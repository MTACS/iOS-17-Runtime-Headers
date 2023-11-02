
@interface DYMTLIndirectArgumentBufferManager : NSObject {
    struct vector<std::vector<std::unordered_map<unsigned long long, std::unordered_map<unsigned long long, unsigned long long>>>, std::allocator<std::vector<std::unordered_map<unsigned long long, std::unordered_map<unsigned long long, unsigned long long>>>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<std::unordered_map<unsigned long long, std::unordered_map<unsigned long long, unsigned long long>>> *, std::allocator<std::vector<std::unordered_map<unsigned long long, std::unordered_map<unsigned long long, unsigned long long>>>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _ancestorMaps;
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
    }  _bufferLengthMap;
    struct map<unsigned long long, std::vector<DYMTLOriginalProcessBuffer>, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::vector<DYMTLOriginalProcessBuffer>>>> { 
        struct __tree<std::__value_type<unsigned long long, std::vector<DYMTLOriginalProcessBuffer>>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, std::vector<DYMTLOriginalProcessBuffer>>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, std::vector<DYMTLOriginalProcessBuffer>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, std::vector<DYMTLOriginalProcessBuffer>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, std::vector<DYMTLOriginalProcessBuffer>>, std::less<unsigned long long>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _bufferVitualAddressMap;
    struct vector<DYCommandBufferUID, std::allocator<DYCommandBufferUID>> { 
        struct DYCommandBufferUID {} *__begin_; 
        struct DYCommandBufferUID {} *__end_; 
        struct __compressed_pair<DYCommandBufferUID *, std::allocator<DYCommandBufferUID>> { 
            struct DYCommandBufferUID {} *__value_; 
        } __end_cap_; 
    }  _commandBufferIds;
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
    }  _computePipelineMap;
    unsigned long long  _currentCommandBuffer;
    unsigned int  _currentCommandBufferFunctionIndex;
    NSObject<OS_dispatch_data> * _currentDeviceDecodingData;
    struct unordered_map<unsigned long long, std::set<DYMTLIABDecodingOp>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::set<DYMTLIABDecodingOp>>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, std::set<DYMTLIABDecodingOp>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::set<DYMTLIABDecodingOp>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::set<DYMTLIABDecodingOp>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, std::set<DYMTLIABDecodingOp>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::set<DYMTLIABDecodingOp>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::set<DYMTLIABDecodingOp>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::set<DYMTLIABDecodingOp>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::set<DYMTLIABDecodingOp>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::set<DYMTLIABDecodingOp>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::set<DYMTLIABDecodingOp>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::set<DYMTLIABDecodingOp>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, std::set<DYMTLIABDecodingOp>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::set<DYMTLIABDecodingOp>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::set<DYMTLIABDecodingOp>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::set<DYMTLIABDecodingOp>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _decodingMap;
    struct set<unsigned long long, std::less<unsigned long long>, std::allocator<unsigned long long>> { 
        struct __tree<unsigned long long, std::less<unsigned long long>, std::allocator<unsigned long long>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long long, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::less<unsigned long long>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _deviceResourcesBuffers;
    struct unordered_map<unsigned long long, std::unordered_map<unsigned long long, std::unordered_map<unsigned long long, unsigned long long>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::unordered_map<unsigned long long, std::unordered_map<unsigned long long, unsigned long long>>>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, std::unordered_map<unsigned long long, std::unordered_map<unsigned long long, unsigned long long>>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::unordered_map<unsigned long long, std::unordered_map<unsigned long long, unsigned long long>>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::unordered_map<unsigned long long, std::unordered_map<unsigned long long, unsigned long long>>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, std::unordered_map<unsigned long long, std::unordered_map<unsigned long long, unsigned long long>>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<unsigned long long, std::unordered_map<unsigned long long, unsigned long long>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<unsigned long long, std::unordered_map<unsigned long long, unsigned long long>>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<unsigned long long, std::unordered_map<unsigned long long, unsigned long long>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<unsigned long long, std::unordered_map<unsigned long long, unsigned long long>>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<unsigned long long, std::unordered_map<unsigned long long, unsigned long long>>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<unsigned long long, std::unordered_map<unsigned long long, unsigned long long>>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<unsigned long long, std::unordered_map<unsigned long long, unsigned long long>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<unsigned long long, std::unordered_map<unsigned long long, unsigned long long>>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<unsigned long long, std::unordered_map<unsigned long long, unsigned long long>>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::unordered_map<unsigned long long, std::unordered_map<unsigned long long, unsigned long long>>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::unordered_map<unsigned long long, std::unordered_map<unsigned long long, unsigned long long>>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _encodedResourcesMap;
    struct vector<std::vector<std::vector<GPUTools::MTL::Utils::DYMTLIndirectArgumentBufferInfo>>, std::allocator<std::vector<std::vector<GPUTools::MTL::Utils::DYMTLIndirectArgumentBufferInfo>>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<std::vector<GPUTools::MTL::Utils::DYMTLIndirectArgumentBufferInfo>> *, std::allocator<std::vector<std::vector<GPUTools::MTL::Utils::DYMTLIndirectArgumentBufferInfo>>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _indirectArgumentBuffers;
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
    }  _indirectCommandBufferMap;
    DYIABPatcher * _patcher;
    DYMTLFunctionPlayer * _player;
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
    }  _renderPipelineMap;
    struct map<unsigned long long, unsigned long long, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, unsigned long long>>> { 
        struct __tree<std::__value_type<unsigned long long, unsigned long long>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, unsigned long long>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, unsigned long long>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, unsigned long long>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, unsigned long long>, std::less<unsigned long long>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _replayerBufferBaseVirtualAddressMap;
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
    }  _replayerComputePipelineMap;
    struct vector<DYMTLReplayerIAB, std::allocator<DYMTLReplayerIAB>> { 
        struct DYMTLReplayerIAB {} *__begin_; 
        struct DYMTLReplayerIAB {} *__end_; 
        struct __compressed_pair<DYMTLReplayerIAB *, std::allocator<DYMTLReplayerIAB>> { 
            struct DYMTLReplayerIAB {} *__value_; 
        } __end_cap_; 
    }  _replayerIABs;
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
    }  _replayerIndirectCommandBufferMap;
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
    }  _replayerRenderPipelineMap;
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
    }  _replayerSamplerMap;
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
    }  _replayerTextureMap;
    unsigned long long  _resourcePatchingType;
    bool  _resourcePatchingTypesInitialized;
    struct unordered_map<unsigned long long, std::vector<unsigned long long>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::vector<unsigned long long>>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, std::vector<unsigned long long>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<unsigned long long>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<unsigned long long>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, std::vector<unsigned long long>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<unsigned long long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<unsigned long long>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<unsigned long long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<unsigned long long>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<unsigned long long>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<unsigned long long>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<unsigned long long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<unsigned long long>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<unsigned long long>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<unsigned long long>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<unsigned long long>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _samplerMap;
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
    }  _textureMap;
    bool  _traceProcessed;
    struct unordered_map<unsigned long long, id<MTLSamplerState>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, id<MTLSamplerState>>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, id<MTLSamplerState>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, id<MTLSamplerState>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, id<MTLSamplerState>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, id<MTLSamplerState>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLSamplerState>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLSamplerState>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLSamplerState>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLSamplerState>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLSamplerState>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLSamplerState>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLSamplerState>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLSamplerState>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLSamplerState>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, id<MTLSamplerState>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, id<MTLSamplerState>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _usedSamplersMap;
}

@property (nonatomic, readonly) void*bufferVitualAddressMap;
@property (nonatomic, readonly) void*replayerBufferBaseVirtualAddressMap;
@property (nonatomic, readonly) void*replayerSamplerMap;
@property (nonatomic, readonly) void*replayerTextureMap;
@property (nonatomic, readonly) void*samplerMap;
@property (nonatomic, readonly) void*textureMap;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)argumentEncoderForDecodingOperation:(const void*)arg1 reflectionStructType:(id*)arg2;
- (id)blitBufferFromGPU:(id)arg1;
- (void*)bufferVitualAddressMap;
- (void)decodeReplayerIAB:(id)arg1 offset:(unsigned long long)arg2 function:(id)arg3 argument:(id)arg4;
- (id)device;
- (void)encodeIndirectArgumentsForBuffer:(unsigned long long)arg1 data:(void*)arg2;
- (void)encodeIndirectArgumentsForBuffer:(unsigned long long)arg1 data:(void*)arg2 decodingMap:(void*)arg3;
- (void)encodeIndirectArgumentsForBuffer:(unsigned long long)arg1 decodingMap:(void*)arg2;
- (void)executeIABDecodingOp:(const void*)arg1 bufferId:(unsigned long long)arg2 data:(void*)arg3 indirectDecodingMap:(void*)arg4;
- (void)findAncestorsForBuffer:(unsigned long long)arg1 commandBufferIndex:(unsigned long long)arg2 commandEncoderIndex:(unsigned long long)arg3 callIndex:(unsigned long long)arg4 ancestors:(void*)arg5;
- (id)findStructTypeForArgumentIndex:(unsigned long long)arg1 inStructType:(id)arg2;
- (id)initWithFunctionPlayer:(id)arg1;
- (void)initializeResourcePatchingTypes;
- (void)notifyReplayerTargetCommandBuffersFinished;
- (void)notifyReplayerTargetIndirectArgumentBuffers:(void*)arg1;
- (id)objectWithId:(unsigned long long)arg1;
- (void)processAncestorMapData:(const void*)arg1;
- (void)processCommandBuffer:(unsigned long long)arg1 functionIndex:(unsigned int)arg2 ancestorMapData:(const void*)arg3 indirectArgumentBuffersData:(const void*)arg4 resourceMapsData:(const void*)arg5 driverDecodingData:(id)arg6;
- (void)processIndirectArgumentBuffersData:(const void*)arg1;
- (void)processResourceMapsData:(const void*)arg1;
- (id)queue;
- (void)readPatchingTable:(id)arg1;
- (void*)replayerBufferBaseVirtualAddressMap;
- (void*)replayerSamplerMap;
- (void*)replayerTextureMap;
- (void)resolveIABDecodingOperations;
- (void*)samplerMap;
- (void*)textureMap;
- (void)uploadDriverDecodingData:(id)arg1;
- (void)writePatchingTableAsJson:(id)arg1;

@end
