#ifndef _llvmheaders_h
#define _llvmheaders_h

#include "clang/AST/ASTConsumer.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/Basic/Diagnostic.h"
#include "clang/Basic/FileManager.h"
#include "clang/Basic/SourceManager.h"
#include "clang/Basic/TargetInfo.h"
#include "clang/Basic/TargetOptions.h"
#include "clang/CodeGen/CodeGenAction.h"
#include "clang/CodeGen/ModuleBuilder.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Lex/Preprocessor.h"
#include "clang/Parse/ParseAST.h"
#include "clang/AST/ASTContext.h"
#include "llvm/Analysis/Passes.h"
#include "llvm/ExecutionEngine/ExecutionEngine.h"
#include "llvm/ExecutionEngine/JIT.h"
#include "llvm/ExecutionEngine/JITMemoryManager.h"

#include "llvm/PassManager.h"
#include "llvm/Support/Host.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Transforms/Scalar.h"
#include "llvm/Support/TargetRegistry.h"
#include "llvm/Support/FormattedStream.h"
#include "llvm/Support/Program.h"
#include "llvm/Transforms/Utils/Cloning.h"
#include "llvm/Transforms/IPO.h"
#include "llvm/Transforms/Vectorize.h"
#include "llvm/Transforms/IPO/PassManagerBuilder.h"
#include "llvm/ExecutionEngine/JITEventListener.h"
#include "llvm/Support/DynamicLibrary.h"
#include "llvm/Bitcode/ReaderWriter.h"

#if LLVM_VERSION == 32
#include "llvmheaders_32.h"
#elif LLVM_VERSION == 33
#include "llvmheaders_33.h"
#elif LLVM_VERSION == 34
#include "llvmheaders_34.h"
#elif LLVM_VERSION == 35
#include "llvmheaders_35.h"
#else
#error "unsupported LLVM version"
//for OSX code completion
#define LLVM_VERSION 35
#include "llvmheaders_35.h"
#endif

#if LLVM_VERSION >= 34
#define TERRA_CAN_USE_MCJIT
#endif

#endif
