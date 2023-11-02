
@interface _MTLBinaryArchive : _MTLObjectWithLabel <MTLBinaryArchiveSPI> {
    NSString * _absoluteOpenPath;
    struct unordered_map<unsigned long long, std::vector<MTLFunctionId>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::vector<MTLFunctionId>>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _airntBinaryList;
    struct vector<functionIdExtended, std::allocator<functionIdExtended>> { 
        struct functionIdExtended {} *__begin_; 
        struct functionIdExtended {} *__end_; 
        struct __compressed_pair<functionIdExtended *, std::allocator<functionIdExtended>> { 
            struct functionIdExtended {} *__value_; 
        } __end_cap_; 
    }  _airntExtraBinaryEntries;
    struct vector<MTLAirNTObject *, std::allocator<MTLAirNTObject *>> { 
        struct MTLAirNTObject {} **__begin_; 
        struct MTLAirNTObject {} **__end_; 
        struct __compressed_pair<MTLAirNTObject **, std::allocator<MTLAirNTObject *>> { 
            struct MTLAirNTObject {} **__value_; 
        } __end_cap_; 
    }  _airntFromDescriptorFunctionList;
    struct vector<MTLAirNTObject *, std::allocator<MTLAirNTObject *>> { 
        struct MTLAirNTObject {} **__begin_; 
        struct MTLAirNTObject {} **__end_; 
        struct __compressed_pair<MTLAirNTObject **, std::allocator<MTLAirNTObject *>> { 
            struct MTLAirNTObject {} **__value_; 
        } __end_cap_; 
    }  _airntObjectList;
    struct unordered_map<unsigned long long, unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, unsigned long long>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, unsigned long long>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, unsigned long long>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _airntOffsetToIndexMap;
    struct vector<MTLPipelineNTObject *, std::allocator<MTLPipelineNTObject *>> { 
        struct MTLPipelineNTObject {} **__begin_; 
        struct MTLPipelineNTObject {} **__end_; 
        struct __compressed_pair<MTLPipelineNTObject **, std::allocator<MTLPipelineNTObject *>> { 
            struct MTLPipelineNTObject {} **__value_; 
        } __end_cap_; 
    }  _airntPipelineList;
    bool  _alwaysReturnDriverReflection;
    char * _archiveIDInt;
    NSMutableDictionary * _asynEntries;
    bool  _collectArchives;
    <MTLDevice> * _device;
    NSMutableDictionary * _entries;
    struct unordered_map<MTLFunctionId, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>, CompareFunctionIdHash, CompareFunctionIdHash, std::allocator<std::pair<const MTLFunctionId, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>>> { 
        struct __hash_table<std::__hash_value_type<MTLFunctionId, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, std::__unordered_map_hasher<MTLFunctionId, std::__hash_value_type<MTLFunctionId, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, CompareFunctionIdHash, CompareFunctionIdHash>, std::__unordered_map_equal<MTLFunctionId, std::__hash_value_type<MTLFunctionId, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, CompareFunctionIdHash, CompareFunctionIdHash>, std::allocator<std::__hash_value_type<MTLFunctionId, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLFunctionId, std::__hash_value_type<MTLFunctionId, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, CompareFunctionIdHash, CompareFunctionIdHash>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<MTLFunctionId, std::__hash_value_type<MTLFunctionId, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, CompareFunctionIdHash, CompareFunctionIdHash>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _executableFileIndex;
    struct unordered_map<std::string, id<MTLLibrarySPI>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, id<MTLLibrarySPI>>>> { 
        struct __hash_table<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, id<MTLLibrarySPI>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, id<MTLLibrarySPI>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, id<MTLLibrarySPI>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, id<MTLLibrarySPI>>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, id<MTLLibrarySPI>>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _extLibCache;
    MTLLoadedFileContentsWrapper * _fileData;
    MTLLoadedFile * _fileMapping;
    struct unordered_map<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *, CompareFunctionIdHash, CompareFunctionIdHash, std::allocator<std::pair<const MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>>> { 
        struct __hash_table<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, std::__unordered_map_hasher<MTLFunctionId, std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, CompareFunctionIdHash, CompareFunctionIdHash>, std::__unordered_map_equal<MTLFunctionId, std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, CompareFunctionIdHash, CompareFunctionIdHash>, std::allocator<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLFunctionId, std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, CompareFunctionIdHash, CompareFunctionIdHash>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<MTLFunctionId, std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, CompareFunctionIdHash, CompareFunctionIdHash>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _gpuArchiverIDMap;
    unsigned int  _internalArchiverId;
    bool  _isLegacy;
    struct map<MTLUINT256_t, std::pair<unsigned int, unsigned long long>, CompareHash, std::allocator<std::pair<const MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> { 
        struct __tree<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, std::__map_value_compare<MTLUINT256_t, std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, CompareHash>, std::allocator<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<MTLUINT256_t, std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, CompareHash>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _legacyPipelineFileIndex;
    struct map<MTLUINT256_t, std::pair<unsigned int, unsigned long long>, CompareHash, std::allocator<std::pair<const MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> { 
        struct __tree<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, std::__map_value_compare<MTLUINT256_t, std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, CompareHash>, std::allocator<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<MTLUINT256_t, std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, CompareHash>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _legacySpecializedFunctionArchiveFileIndex;
    struct unordered_map<MTLUINT256_t, NSObject<OS_dispatch_data> *, UnorderedContainerHash, UnorderedContainerHash, std::allocator<std::pair<const MTLUINT256_t, NSObject<OS_dispatch_data> *>>> { 
        struct __hash_table<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, UnorderedContainerHash, UnorderedContainerHash>, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, UnorderedContainerHash, UnorderedContainerHash>, std::allocator<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, UnorderedContainerHash, UnorderedContainerHash>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, UnorderedContainerHash, UnorderedContainerHash>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _legacySpecializedFunctions;
    struct unordered_map<unsigned long long, id<MTLLibrarySPI>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, id<MTLLibrarySPI>>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _libCache;
    NSObject<OS_dispatch_data> * _metalScript;
    struct unique_ptr<MTLMetalScriptBuilder, std::default_delete<MTLMetalScriptBuilder>> { 
        struct __compressed_pair<MTLMetalScriptBuilder *, std::default_delete<MTLMetalScriptBuilder>> { 
            struct MTLMetalScriptBuilder {} *__value_; 
        } __ptr_; 
    }  _mtlScriptBuilder;
    unsigned long long  _newBinary;
    unsigned long long  _options;
    struct unique_ptr<MTLPipelineCollection, std::default_delete<MTLPipelineCollection>> { 
        struct __compressed_pair<MTLPipelineCollection *, std::default_delete<MTLPipelineCollection>> { 
            struct MTLPipelineCollection {} *__value_; 
        } __ptr_; 
    }  _pipelineCollection;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _recompilationArchiveBytes;
    struct map<MTLUINT256_t, std::pair<unsigned int, unsigned long long>, CompareHash, std::allocator<std::pair<const MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> { 
        struct __tree<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, std::__map_value_compare<MTLUINT256_t, std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, CompareHash>, std::allocator<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<MTLUINT256_t, std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, CompareHash>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _recompilationArchiveFileIndex;
    unsigned long long  _recompilationArchiveOffset;
    struct unordered_map<MTLUINT256_t, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>, UnorderedContainerHash, UnorderedContainerHash, std::allocator<std::pair<const MTLUINT256_t, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>>> { 
        struct __hash_table<std::__hash_value_type<MTLUINT256_t, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, UnorderedContainerHash, UnorderedContainerHash>, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, UnorderedContainerHash, UnorderedContainerHash>, std::allocator<std::__hash_value_type<MTLUINT256_t, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLUINT256_t, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, UnorderedContainerHash, UnorderedContainerHash>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long>>, UnorderedContainerHash, UnorderedContainerHash>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _reflectionsIndex;
    NSObject<OS_dispatch_queue> * _serializeQueue;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _serializing;
    unsigned long long  _specializedFunctionArchiveBytes;
    unsigned long long  _specializedFunctionArchiveOffset;
    struct unordered_map<MTLUINT256_t, MTLProgramObject *, UnorderedContainerHash, UnorderedContainerHash, std::allocator<std::pair<const MTLUINT256_t, MTLProgramObject *>>> { 
        struct __hash_table<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash>, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash>, std::allocator<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _variantMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *keys;
@property (copy) NSString *label;
@property (readonly) unsigned long long options;
@property bool recompilationTarget;
@property (readonly) Class superclass;

+ (unsigned int)archiveTypeAtURL:(id)arg1 device:(id)arg2 error:(id*)arg3;
+ (unsigned int)archiveVersionCompatible:(struct MachOToolsVersion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 isMatchingSlice:(bool)arg2 device:(id)arg3;
+ (id)descriptorDataForArchive:(id)arg1;
+ (bool)deserializeBinaryArchiveDescriptorMachO:(struct { bool x1; bool x2; unsigned long long x3; unsigned long long x4; bool x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; bool x10; unsigned long long x11; unsigned long long x12; bool x13; struct MTLLoaderSliceIdentifier { int x_14_1_1; int x_14_1_2; } x14; }*)arg1 fileData:(id)arg2;
+ (bool)deserializeBinaryArchiveHeader:(struct { bool x1; bool x2; unsigned long long x3; unsigned long long x4; bool x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; bool x10; unsigned long long x11; unsigned long long x12; bool x13; struct MTLLoaderSliceIdentifier { int x_14_1_1; int x_14_1_2; } x14; }*)arg1 fileData:(id)arg2 device:(id)arg3;
+ (struct MTLLoaderSliceIdentifier { int x1; int x2; })sliceIDForSpecializedFunctions;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addArchiveEntryInternal:(id)arg1 forKey:(const struct { unsigned char x1[32]; }*)arg2;
- (void)addBinaryEntryImpl:(id)arg1 forKey:(id)arg2;
- (void)addBinaryEntryInternal:(id)arg1 forKey:(id)arg2;
- (bool)addComputePipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2;
- (bool)addComputePipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)addFunctionWithDescriptor:(id)arg1 library:(id)arg2 error:(id*)arg3;
- (bool)addLibraryWithDescriptor:(id)arg1 error:(id*)arg2;
- (bool)addMeshRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2;
- (bool)addMeshRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)addRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2;
- (bool)addRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2;
- (bool)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)airntSerializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)archiveFunctionIds;
- (bool)archiveSkipsAIRValidation;
- (void)clearLibCache;
- (void)dealloc;
- (void)deallocContainers;
- (id)description;
- (id)device;
- (bool)enumerateArchivesFromBackingFile:(id /* block */)arg1;
- (bool)enumerateArchivesFromBackingFileFromSlice:(const struct MTLLoaderSliceIdentifier { int x1; int x2; }*)arg1 version:(unsigned long long)arg2 verifyKey:(const struct { unsigned char x1[32]; }*)arg3 offset:(unsigned long long)arg4 bytes:(unsigned long long)arg5 enumerator:(id /* block */)arg6;
- (bool)enumerateArchivesFromPipelineCollection:(id /* block */)arg1;
- (bool)enumerateSpecializedFunctionArchivesFromBackingFile:(id /* block */)arg1;
- (void*)findProgramObjectForFunction:(const struct { unsigned char x1[32]; }*)arg1;
- (id)flatBufferFromJSON:(id)arg1 schema:(const char *)arg2 schemaSize:(unsigned long long)arg3;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)getArchiveIDWithError:(id*)arg1;
- (id)getArchiveIDWithErrorInternal:(id*)arg1;
- (id)getBinaryDataForKey:(id)arg1 reflectionType:(BOOL)arg2;
- (id)getBinaryDataForKeyInternal:(id)arg1;
- (id)getLibraryInArchiveAtPos:(void*)arg1 atIndex:(unsigned int)arg2 error:(id*)arg3;
- (id)getLibraryInArchiveAtPos:(void*)arg1 error:(id*)arg2;
- (id)getMetalScript;
- (bool)getScriptsWithAIRNTObject:(void*)arg1;
- (bool)getSpecializedFunctionArchivesToSerialize:(void*)arg1;
- (void)initMetalScriptWithArchive:(id)arg1;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2 error:(id*)arg3;
- (id)initWithOptions:(unsigned long long)arg1 device:(id)arg2 url:(id)arg3 error:(id*)arg4;
- (id)keys;
- (bool)legacySerializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)loadAirntBlocksForSlice:(const struct MTLLoaderSliceIdentifier { int x1; int x2; }*)arg1 sliceOffset:(unsigned long long)arg2 skipAIRValidation:(bool)arg3;
- (bool)loadFileIndex:(void*)arg1 expectedSliceId:(const struct MTLLoaderSliceIdentifier { int x1; int x2; }*)arg2 expectedVersion:(unsigned long long)arg3 sliceOffset:(unsigned long long)arg4;
- (bool)loadFromURL:(id)arg1 error:(id*)arg2;
- (id)mapFileToMemoryWithPath:(const char *)arg1;
- (const char *)mapFileToMemoryWithPath:(const char *)arg1 fileSize:(unsigned long long*)arg2;
- (id)materializeAIRNTBlockForKey:(id)arg1 reflectionType:(BOOL)arg2;
- (void)materializeAirNTAllForSlice:(const struct MTLLoaderSliceIdentifier { int x1; int x2; }*)arg1 entryList:(void*)arg2;
- (void)materializeAirNTFromOnlineForSlice:(const struct MTLLoaderSliceIdentifier { int x1; int x2; }*)arg1 entryList:(void*)arg2;
- (id)materializeAirScript:(void*)arg1;
- (void)materializeAll;
- (void)materializeAllAIRNTLegacy;
- (id)materializeBitCode:(void*)arg1 atIndex:(unsigned int)arg2;
- (id)materializeEntryForKey:(const struct { unsigned char x1[32]; }*)arg1 fileIndex:(void*)arg2 containsEntry:(id /* block */)arg3 addEntry:(id /* block */)arg4;
- (id)materializeFromFileOffset:(unsigned long long)arg1 hash:(struct { unsigned char x1[32]; }*)arg2;
- (id)materializeFromHash:(struct { unsigned char x1[32]; }*)arg1 fileIndex:(void*)arg2;
- (id)materializeReflectionBlock:(void*)arg1;
- (id)newArchiveDataForKeyInternal:(const struct { unsigned char x1[32]; }*)arg1;
- (id)newArchiverIdWithBinaryKey:(id)arg1 entry:(id)arg2 srcArchiverId:(id)arg3 functionType:(unsigned long long)arg4;
- (id)newComputePipelineDescriptorWithScript:(const struct PipelineScript { unsigned char x1[1]; }*)arg1;
- (id)newFunctionDescriptorWithAirScript:(const struct ConstantsSpecializationScript { unsigned char x1[1]; }*)arg1;
- (id)newFunctionWithAIRNTObject:(void*)arg1 error:(id*)arg2;
- (id)newMeshRenderPipelineDescriptorWithScript:(const struct PipelineScript { unsigned char x1[1]; }*)arg1;
- (id)newPipelineDescriptorAtIndex:(unsigned long long)arg1 pipelineType:(unsigned int*)arg2 error:(id*)arg3;
- (id)newRenderPipelineDescriptorWithScript:(const struct PipelineScript { unsigned char x1[1]; }*)arg1;
- (id)newSpecializedFunctionWithHash:(struct { unsigned char x1[32]; }*)arg1;
- (id)newTileRenderPipelineDescriptorWithScript:(const struct PipelineScript { unsigned char x1[1]; }*)arg1;
- (unsigned long long)options;
- (void*)pipelineCollection;
- (void*)programObjectForFunction:(const struct { unsigned char x1[32]; }*)arg1;
- (unsigned long long)recompilablePipelineCount;
- (bool)recompilationTarget;
- (bool)recompilePipelinesToArchive:(id)arg1 error:(id*)arg2;
- (bool)recompileStatelessToArchive:(id)arg1 error:(id*)arg2;
- (bool)recompileToArchive:(id)arg1 error:(id*)arg2;
- (struct { unsigned char x1[32]; })reflectionHashWithFunctionId:(const struct MTLFunctionId { struct { unsigned char x_1_1_1[32]; } x1; struct { unsigned char x_2_1_1[32]; } x2[4]; unsigned int x3; }*)arg1 binaryPos:(unsigned long long)arg2;
- (bool)remoteInsertionBegin;
- (void)remoteInsertionEnd;
- (bool)removeComputePipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2;
- (bool)requiresLegacyReflection;
- (bool)serializeToURL:(id)arg1 error:(id*)arg2;
- (bool)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)setRecompilationTarget:(bool)arg1;
- (bool)storeComputePipelineDescriptor:(id)arg1;
- (bool)storeMeshRenderPipelineDescriptor:(id)arg1;
- (bool)storeRenderPipelineDescriptor:(id)arg1;
- (bool)storeTileRenderPipelineDescriptor:(id)arg1;
- (bool)supportsAIRNT;
- (void)updatePipelineWithPipelineArchiverId:(id)arg1 key:(id)arg2 functionType:(unsigned long long)arg3;
- (bool)updateReflectionForEntry:(id)arg1 binaryKey:(id)arg2 requiredReflection:(BOOL)arg3;

@end
