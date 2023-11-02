
@interface MPSGraphExecutable : MPSGraphObject {
    bool  _briefProfilingOpNames;
    void * _builder;
    unsigned long long  _compilationID;
    NSString * _dumpCompiledProductsPath;
    bool  _enableCommitAndContinue;
    bool  _enableGPUQuantizationOps;
    bool  _enableProfilingOpNames;
    unsigned long long  _evDumpModuleFlag;
    NSString * _evDumpModulePath;
    struct shared_ptr<mlir::MLIRContext> { 
        struct MLIRContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _executableContext;
    struct recursive_mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _executableMutex;
    NSArray * _feedTensorArray;
    NSDictionary * _feeds;
    NSFileManager * _fileManager;
    long long  _forcePlacementOnDevice;
    bool  _generateRuntimeExecutionReport;
    MPSGraph * _graph;
    bool  _keepANECUnitNameAttrs;
    bool  _legacyANEQuantization;
    NSString * _modelFileArchivePath;
    NSString * _modelTime;
    unsigned long long  _modelUID;
    struct unordered_map<std::string, std::unique_ptr<RuntimeCacheEntry>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unique_ptr<RuntimeCacheEntry>>>> { 
        struct __hash_table<std::__hash_value_type<std::string, std::unique_ptr<RuntimeCacheEntry>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unique_ptr<RuntimeCacheEntry>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unique_ptr<RuntimeCacheEntry>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::unique_ptr<RuntimeCacheEntry>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<RuntimeCacheEntry>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<RuntimeCacheEntry>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<RuntimeCacheEntry>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<RuntimeCacheEntry>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<RuntimeCacheEntry>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<RuntimeCacheEntry>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<RuntimeCacheEntry>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<RuntimeCacheEntry>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<RuntimeCacheEntry>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unique_ptr<RuntimeCacheEntry>>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unique_ptr<RuntimeCacheEntry>>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _newRuntimeCache;
    bool  _oldCostModelPass;
    struct unordered_map<std::string, LazyLoadableModuleRef, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, LazyLoadableModuleRef>>> { 
        struct __hash_table<std::__hash_value_type<std::string, LazyLoadableModuleRef>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, LazyLoadableModuleRef>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, LazyLoadableModuleRef>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, LazyLoadableModuleRef>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, LazyLoadableModuleRef>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, LazyLoadableModuleRef>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, LazyLoadableModuleRef>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, LazyLoadableModuleRef>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, LazyLoadableModuleRef>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, LazyLoadableModuleRef>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, LazyLoadableModuleRef>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, LazyLoadableModuleRef>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, LazyLoadableModuleRef>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, LazyLoadableModuleRef>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, LazyLoadableModuleRef>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _optimizedModuleCache;
    struct unordered_map<std::string, LazyLoadableModuleRef, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, LazyLoadableModuleRef>>> { 
        struct __hash_table<std::__hash_value_type<std::string, LazyLoadableModuleRef>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, LazyLoadableModuleRef>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, LazyLoadableModuleRef>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, LazyLoadableModuleRef>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, LazyLoadableModuleRef>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, LazyLoadableModuleRef>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, LazyLoadableModuleRef>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, LazyLoadableModuleRef>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, LazyLoadableModuleRef>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, LazyLoadableModuleRef>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, LazyLoadableModuleRef>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, LazyLoadableModuleRef>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, LazyLoadableModuleRef>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, LazyLoadableModuleRef>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, LazyLoadableModuleRef>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _optimizedNoDeviceModuleCache;
    unsigned long long  _options;
    MPSGraphCompilationDescriptor * _originalCompilationDescriptor;
    struct LazyLoadableModuleRef { 
        struct shared_ptr<mlir::MLIRContext> { 
            struct MLIRContext {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } _ctx; 
        struct OwningOpRef<mlir::ModuleOp> { 
            struct ModuleOp { 
                struct Operation {} *state; 
            } op; 
        } _originalModule; 
        NSURL *_moduleURL; 
    }  _originalModule;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _originalModuleIsOptimized;
    struct recursive_mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _originalModuleMutex;
    bool  _printCostModel;
    bool  _runPlacementPass;
    unsigned long long  _sharedEventSignalValue;
    NSObject<OS_dispatch_queue> * _specializationDispatchQueue;
    struct atomic<int> { 
        struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
            _Atomic int __a_value; 
        } __a_; 
    }  _specializationsPending;
    struct condition_variable { 
        struct _opaque_pthread_cond_t { 
            long long __sig; 
            BOOL __opaque[40]; 
        } __cv_; 
    }  _specializationsPendingCV;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _specializationsPendingMutex;
    void * _symbolTable;
    NSArray * _targetOperations;
    NSArray * _targetTensorArray;
    bool  _useCostModel;
}

@property (readonly) NSArray *feedTensors;
@property unsigned long long options;
@property (readonly) NSArray *targetTensors;

+ (id)executablesWithMLIRSourceForMultipleModules:(id)arg1 executableDescriptor:(id)arg2 regionNames:(id)arg3;
+ (unsigned long long)getValidateNetworkSupportedVersion;
+ (struct __CFDictionary { }*)validateNetworkWithParams:(struct __CFDictionary { }*)arg1 apiVersion:(unsigned long long)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)allocateTensorDataTargetsForDevice:(id)arg1 inputsArray:(id)arg2;
- (void)aneRegionOpsHashSet:(void*)arg1;
- (struct OwningOpRef<mlir::ModuleOp> { struct ModuleOp { struct Operation {} *x_1_1_1; } x1; })cloneForFeeds:(id)arg1 targetTensors:(id)arg2 targetOperations:(id)arg3;
- (void)commonPostInit:(void*)arg1;
- (void)commonPreInitWithDescriptor:(id)arg1;
- (struct vector<mlir::Type, std::allocator<mlir::Type>> { struct Type {} *x1; struct Type {} *x2; struct __compressed_pair<mlir::Type *, std::allocator<mlir::Type>> { struct Type {} *x_3_1_1; } x3; })convertMPSGraphShapesToMLIRTypes:(id)arg1;
- (struct vector<mlir::Type, std::allocator<mlir::Type>> { struct Type {} *x1; struct Type {} *x2; struct __compressed_pair<mlir::Type *, std::allocator<mlir::Type>> { struct Type {} *x_3_1_1; } x3; })convertMPSGraphShapesToMLIRTypes:(id)arg1 funcOp:(struct FuncOp { struct Operation {} *x1; })arg2 compilationDescriptor:(id)arg3;
- (id)createMLIRLibraryWithMPSGraphPackage:(id)arg1 packageKey:(id)arg2 appendOptimizedModules:(bool)arg3;
- (void)dealloc;
- (id)debugDescription;
- (void)dump;
- (void)dumpCompiledProducts;
- (id)emitObjCToURL:(id)arg1 test:(bool)arg2;
- (void)emitObjUnitTestToUrl:(id)arg1;
- (id)encodeToCommandBuffer:(id)arg1 inputsArray:(id)arg2 resultsArray:(id)arg3 executionDescriptor:(id)arg4;
- (id)encodeWithMPSCommandBuffer:(id)arg1 inputsArray:(id)arg2 resultsArray:(id)arg3 executionDescriptor:(id)arg4;
- (id)feedTensors;
- (void)fileBackModule:(const void*)arg1 withPath:(id)arg2;
- (id)getIR;
- (id)getInputShapes;
- (void*)getNewRuntimeForDevice:(id)arg1 module:(struct ModuleOp { struct Operation {} *x1; })arg2 inputShapes:(id)arg3 compilationDescriptor:(id)arg4 fallingBack:(bool)arg5;
- (void*)getNewRuntimeForDevice:(id)arg1 module:(struct ModuleOp { struct Operation {} *x1; })arg2 inputsArray:(id)arg3 compilationDescriptor:(id)arg4;
- (id)getOperationsToVisitForOperation:(id)arg1 visitedOperations:(id)arg2;
- (unsigned long long)getOptimizedModuleCacheSize;
- (unsigned long long)getOptimizedNoDeviceModuleCacheSize;
- (id)getOutputShapes;
- (id)getOutputTypesWithDevice:(id)arg1 inputTypes:(id)arg2 compilationDescriptor:(id)arg3;
- (id)getTargetShapesForDevice:(id)arg1 inputsArray:(id)arg2;
- (id)getTensorDataArraysWithDevice:(id)arg1 feedsDictionary:(id)arg2 resultsDictionary:(id)arg3 inputsArray:(id)arg4 resultsArray:(id)arg5;
- (id)initWithCoreMLPackage:(id)arg1 executableDescriptor:(id)arg2;
- (id)initWithGraph:(id)arg1 device:(id)arg2 feeds:(id)arg3 targetTensors:(id)arg4 targetOperations:(id)arg5 executableDescriptor:(id)arg6;
- (id)initWithMILProgram:(void*)arg1 executableDescriptor:(id)arg2;
- (id)initWithMILProgramWithURL:(id)arg1 executableDescriptor:(id)arg2;
- (id)initWithMLIRBytecode:(id)arg1 executableDescriptor:(id)arg2;
- (id)initWithMLIRCommon:(struct unique_ptr<llvm::MemoryBuffer, std::default_delete<llvm::MemoryBuffer>> { struct __compressed_pair<llvm::MemoryBuffer *, std::default_delete<llvm::MemoryBuffer>> { struct MemoryBuffer {} *x_1_1_1; } x1; })arg1 executableDescriptor:(id)arg2;
- (id)initWithMLIRModule:(struct ModuleOp { struct Operation {} *x1; })arg1 executableDescriptor:(id)arg2;
- (id)initWithMLIRSource:(id)arg1 executableDescriptor:(id)arg2;
- (id)initWithMLIRSourceFromURL:(id)arg1 executableDescriptor:(id)arg2;
- (id)initWithMPSGraphPackageAtURL:(id)arg1 compilationDescriptor:(id)arg2;
- (void)initializeMLIR;
- (id)initializeWithMLIRModule:(struct ModuleOp { struct Operation {} *x1; })arg1 executableDescriptor:(id)arg2;
- (bool)isExecutableForFeeds:(id)arg1 targetTensors:(id)arg2 targetOperations:(id)arg3 compilationDescriptor:(id)arg4;
- (id)lazyInitWithModuleURL:(id)arg1 executableDescriptor:(id)arg2;
- (struct OwningOpRef<mlir::ModuleOp> { struct ModuleOp { struct Operation {} *x_1_1_1; } x1; })optimizationPassesWithDevice:(id)arg1 sourceModule:(void*)arg2 compilationID:(unsigned long long)arg3 compilationDescriptor:(id)arg4;
- (void)optimizeOriginalModuleWithCompilationDescriptor:(id)arg1;
- (unsigned long long)options;
- (id)runAsyncWithCommandQueue:(id)arg1 inputsArray:(id)arg2 resultsArray:(id)arg3 executionDescriptor:(id)arg4;
- (id)runAsyncWithDevice:(id)arg1 inputsArray:(id)arg2 resultsArray:(id)arg3 executionDescriptor:(id)arg4;
- (id)runAsyncWithMTLCommandQueue:(id)arg1 inputsArray:(id)arg2 resultsArray:(id)arg3 executionDescriptor:(id)arg4;
- (id)runInternalWithDevice:(id)arg1 commandBuffer:(id)arg2 feeds:(id)arg3 results:(id)arg4 executableExecutionDescriptor:(id)arg5 mpsGraphOwnedCommandBuffer:(bool)arg6;
- (id)runInternalWithDevice:(id)arg1 commandBuffer:(id)arg2 feedsDictionary:(id)arg3 resultsDictionary:(id)arg4 executableExecutionDescriptor:(id)arg5 mpsGraphOwnedCommandBuffer:(bool)arg6;
- (id)runWithDevice:(id)arg1 inputsArray:(id)arg2 resultsArray:(id)arg3 executionDescriptor:(id)arg4;
- (id)runWithMTLCommandQueue:(id)arg1 inputsArray:(id)arg2 resultsArray:(id)arg3;
- (id)runWithMTLCommandQueue:(id)arg1 inputsArray:(id)arg2 resultsArray:(id)arg3 executionDescriptor:(id)arg4;
- (void)sanitizeExternalModuleWithVariableFetchHandler:(id /* block */)arg1;
- (void)serializeToMPSGraphPackageAtURL:(id)arg1 descriptor:(id)arg2;
- (void)setOptions:(unsigned long long)arg1;
- (void)specializeForMultipleInputTypesWithDevice:(id)arg1 multipleInputTypes:(id)arg2 compilationDescriptor:(id)arg3;
- (void)specializeWithDevice:(id)arg1 inputShapes:(id)arg2 compilationDescriptor:(id)arg3;
- (void)specializeWithDevice:(id)arg1 inputTypes:(id)arg2 compilationDescriptor:(id)arg3;
- (struct ModuleOp { struct Operation {} *x1; })specializeWithDevice:(id)arg1 inputsArray:(id)arg2 compilationDescriptor:(id)arg3;
- (struct ModuleOp { struct Operation {} *x1; })specializedModuleWithDevice:(id)arg1 inputShapes:(id)arg2 compilationDescriptor:(id)arg3 fallingBack:(bool)arg4;
- (id)targetTensors;

@end
