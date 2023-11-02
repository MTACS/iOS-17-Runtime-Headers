
@interface DYMTLCommonDebugFunctionPlayer : DYMTLCommonFunctionPlayer {
    bool  _bSetStageInRegion;
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _baseCounterIndexForList;
    NSArray * _batchInfos;
    unsigned int  _commandBufferIndex;
    struct unordered_map<unsigned long long, CommandBufferInfo, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, CommandBufferInfo>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, CommandBufferInfo>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, CommandBufferInfo>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, CommandBufferInfo>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, CommandBufferInfo>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CommandBufferInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CommandBufferInfo>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CommandBufferInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CommandBufferInfo>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CommandBufferInfo>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CommandBufferInfo>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CommandBufferInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, CommandBufferInfo>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CommandBufferInfo>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, CommandBufferInfo>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, CommandBufferInfo>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _commandBufferMap;
    struct unordered_map<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _commandEncoderDescriptorMap;
    struct unordered_set<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { 
        struct __hash_table<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *>, std::allocator<std::__hash_node<unsigned long long, void *>>> { 
                struct __hash_node_base<std::__hash_node<unsigned long long, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<unsigned long long>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<unsigned long long>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _commandQueueSet;
    NSDictionary * _counterInfos;
    NSMutableArray * _counterListsPerPass;
    unsigned long long  _currentBatchEncoderIndex;
    unsigned int  _currentEncoderBatchIndex;
    struct vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int, unsigned int>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::pair<unsigned int, unsigned int> *, std::allocator<std::pair<unsigned int, unsigned int>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _currentEncoderBatchInfo;
    unsigned int  _currentEncoderIndex;
    MTLRenderPassDescriptor * _currentParallelDescriptor;
    unsigned long long  _currentParallelId;
    unsigned int  _datamasterIndex;
    struct DYMTLRenderPassDescriptor { 
        unsigned long long visibilityResultBuffer; 
        unsigned long long renderTargetArrayLength; 
        struct DYMTLRenderPassAttachmentDescriptor { 
            unsigned long long texture; 
            unsigned long long level; 
            unsigned long long slice; 
            unsigned long long depthPlane; 
            unsigned long long resolveTexture; 
            unsigned long long resolveLevel; 
            unsigned long long resolveSlice; 
            unsigned long long resolveDepthPlane; 
            unsigned long long loadAction; 
            unsigned long long storeAction; 
            unsigned long long storeActionOptions; 
            struct DYMTLClearValue { 
                union { 
                    struct { 
                        double red; 
                        double green; 
                        double blue; 
                        double alpha; 
                    } ; 
                    double colors[4]; 
                } ; 
            } clearValue; 
            bool yInvert; 
            unsigned long long depthResolveFilter; 
            unsigned long long stencilResolveFilter; 
        } colorAttachments[8]; 
        struct DYMTLRenderPassAttachmentDescriptor { 
            unsigned long long texture; 
            unsigned long long level; 
            unsigned long long slice; 
            unsigned long long depthPlane; 
            unsigned long long resolveTexture; 
            unsigned long long resolveLevel; 
            unsigned long long resolveSlice; 
            unsigned long long resolveDepthPlane; 
            unsigned long long loadAction; 
            unsigned long long storeAction; 
            unsigned long long storeActionOptions; 
            struct DYMTLClearValue { 
                union { 
                    struct { 
                        double red; 
                        double green; 
                        double blue; 
                        double alpha; 
                    } ; 
                    double colors[4]; 
                } ; 
            } clearValue; 
            bool yInvert; 
            unsigned long long depthResolveFilter; 
            unsigned long long stencilResolveFilter; 
        } depthAttachment; 
        struct DYMTLRenderPassAttachmentDescriptor { 
            unsigned long long texture; 
            unsigned long long level; 
            unsigned long long slice; 
            unsigned long long depthPlane; 
            unsigned long long resolveTexture; 
            unsigned long long resolveLevel; 
            unsigned long long resolveSlice; 
            unsigned long long resolveDepthPlane; 
            unsigned long long loadAction; 
            unsigned long long storeAction; 
            unsigned long long storeActionOptions; 
            struct DYMTLClearValue { 
                union { 
                    struct { 
                        double red; 
                        double green; 
                        double blue; 
                        double alpha; 
                    } ; 
                    double colors[4]; 
                } ; 
            } clearValue; 
            bool yInvert; 
            unsigned long long depthResolveFilter; 
            unsigned long long stencilResolveFilter; 
        } stencilAttachment; 
        unsigned long long imageblockSampleLength; 
        unsigned long long threadgroupMemoryLength; 
        unsigned long long tileWidth; 
        unsigned long long tileHeight; 
        unsigned long long renderTargetWidth; 
        unsigned long long renderTargetHeight; 
        unsigned long long defaultRasterSampleCount; 
        unsigned long long rasterizationRateMap; 
        struct DYMTLSamplePosition { 
            float x; 
            float y; 
        } customSamplePositions[8]; 
        unsigned long long customSampleCount; 
        bool openGLModeEnabled; 
        bool ditherEnabled; 
        bool skipEmptyTilesOnClearEnabled; 
    }  _dependencyGraphDYMTLParallelDescriptor;
    MTLRenderPassDescriptor * _dependencyGraphParallelDescriptor;
    NSMutableDictionary * _dependencyGraphThumbnails;
    bool  _disableWireframe;
    unsigned int  _drawIndex;
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
    }  _drawableIdToLayerIdMap;
    struct DYMTLRenderPassDescriptor { 
        unsigned long long visibilityResultBuffer; 
        unsigned long long renderTargetArrayLength; 
        struct DYMTLRenderPassAttachmentDescriptor { 
            unsigned long long texture; 
            unsigned long long level; 
            unsigned long long slice; 
            unsigned long long depthPlane; 
            unsigned long long resolveTexture; 
            unsigned long long resolveLevel; 
            unsigned long long resolveSlice; 
            unsigned long long resolveDepthPlane; 
            unsigned long long loadAction; 
            unsigned long long storeAction; 
            unsigned long long storeActionOptions; 
            struct DYMTLClearValue { 
                union { 
                    struct { 
                        double red; 
                        double green; 
                        double blue; 
                        double alpha; 
                    } ; 
                    double colors[4]; 
                } ; 
            } clearValue; 
            bool yInvert; 
            unsigned long long depthResolveFilter; 
            unsigned long long stencilResolveFilter; 
        } colorAttachments[8]; 
        struct DYMTLRenderPassAttachmentDescriptor { 
            unsigned long long texture; 
            unsigned long long level; 
            unsigned long long slice; 
            unsigned long long depthPlane; 
            unsigned long long resolveTexture; 
            unsigned long long resolveLevel; 
            unsigned long long resolveSlice; 
            unsigned long long resolveDepthPlane; 
            unsigned long long loadAction; 
            unsigned long long storeAction; 
            unsigned long long storeActionOptions; 
            struct DYMTLClearValue { 
                union { 
                    struct { 
                        double red; 
                        double green; 
                        double blue; 
                        double alpha; 
                    } ; 
                    double colors[4]; 
                } ; 
            } clearValue; 
            bool yInvert; 
            unsigned long long depthResolveFilter; 
            unsigned long long stencilResolveFilter; 
        } depthAttachment; 
        struct DYMTLRenderPassAttachmentDescriptor { 
            unsigned long long texture; 
            unsigned long long level; 
            unsigned long long slice; 
            unsigned long long depthPlane; 
            unsigned long long resolveTexture; 
            unsigned long long resolveLevel; 
            unsigned long long resolveSlice; 
            unsigned long long resolveDepthPlane; 
            unsigned long long loadAction; 
            unsigned long long storeAction; 
            unsigned long long storeActionOptions; 
            struct DYMTLClearValue { 
                union { 
                    struct { 
                        double red; 
                        double green; 
                        double blue; 
                        double alpha; 
                    } ; 
                    double colors[4]; 
                } ; 
            } clearValue; 
            bool yInvert; 
            unsigned long long depthResolveFilter; 
            unsigned long long stencilResolveFilter; 
        } stencilAttachment; 
        unsigned long long imageblockSampleLength; 
        unsigned long long threadgroupMemoryLength; 
        unsigned long long tileWidth; 
        unsigned long long tileHeight; 
        unsigned long long renderTargetWidth; 
        unsigned long long renderTargetHeight; 
        unsigned long long defaultRasterSampleCount; 
        unsigned long long rasterizationRateMap; 
        struct DYMTLSamplePosition { 
            float x; 
            float y; 
        } customSamplePositions[8]; 
        unsigned long long customSampleCount; 
        bool openGLModeEnabled; 
        bool ditherEnabled; 
        bool skipEmptyTilesOnClearEnabled; 
    }  _dyParallelRenderCommandEncoderDescriptor;
    unsigned int  _encoderIndex;
    struct unordered_map<unsigned long, std::vector<std::pair<unsigned int, unsigned int>>, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, std::vector<std::pair<unsigned int, unsigned int>>>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long, std::vector<std::pair<unsigned int, unsigned int>>>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::vector<std::pair<unsigned int, unsigned int>>>, std::hash<unsigned long>, std::equal_to<unsigned long>>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::vector<std::pair<unsigned int, unsigned int>>>, std::equal_to<unsigned long>, std::hash<unsigned long>>, std::allocator<std::__hash_value_type<unsigned long, std::vector<std::pair<unsigned int, unsigned int>>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<std::pair<unsigned int, unsigned int>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<std::pair<unsigned int, unsigned int>>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<std::pair<unsigned int, unsigned int>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<std::pair<unsigned int, unsigned int>>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<std::pair<unsigned int, unsigned int>>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<std::pair<unsigned int, unsigned int>>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<std::pair<unsigned int, unsigned int>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<std::pair<unsigned int, unsigned int>>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<std::pair<unsigned int, unsigned int>>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::vector<std::pair<unsigned int, unsigned int>>>, std::hash<unsigned long>, std::equal_to<unsigned long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::vector<std::pair<unsigned int, unsigned int>>>, std::equal_to<unsigned long>, std::hash<unsigned long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _encoderIndexToBatchInfo;
    struct unordered_map<unsigned long long, EncoderInfo, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, EncoderInfo>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, EncoderInfo>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, EncoderInfo>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, EncoderInfo>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, EncoderInfo>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EncoderInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EncoderInfo>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EncoderInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EncoderInfo>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EncoderInfo>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EncoderInfo>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EncoderInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, EncoderInfo>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EncoderInfo>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, EncoderInfo>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, EncoderInfo>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _encoderMap;
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
    }  _encoderToParallelEncoderMap;
    NSMutableArray * _frameCounters;
    unsigned int  _gpuCyclesIndex;
    bool  _isAGXDevice;
    struct vector<bool, std::allocator<bool>> { 
        unsigned long long *__begin_; 
        unsigned long long __size_; 
        struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { 
            unsigned long long __value_; 
        } __cap_alloc_; 
    }  _isDeltaCounter;
    bool  _isTileRenderPassDescriptor;
    struct vector<unsigned long long, std::allocator<unsigned long long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _last;
    unsigned long long  _lastCommandBufferId;
    unsigned long long  _lastCommandBufferIndex;
    unsigned long long  _lastEncoderID;
    unsigned long long  _lastEncoderIndex;
    struct tuple<unsigned long long, unsigned long long> { 
        struct __tuple_impl<std::__tuple_indices<0, 1>, unsigned long long, unsigned long long> { 
            unsigned long long __value_; 
            unsigned long long __value_; 
        } __base_; 
    }  _lastSampleCommandBufferEncoderId;
    struct unordered_map<unsigned long long, CAMetalLayer *, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, CAMetalLayer *>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, CAMetalLayer *>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, CAMetalLayer *>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, CAMetalLayer *>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, CAMetalLayer *>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CAMetalLayer *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CAMetalLayer *>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CAMetalLayer *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CAMetalLayer *>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CAMetalLayer *>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CAMetalLayer *>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CAMetalLayer *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, CAMetalLayer *>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CAMetalLayer *>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, CAMetalLayer *>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, CAMetalLayer *>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _metalLayers;
    unsigned int  _nRemainingCommandsForCurrentEncoder;
    unsigned int  _nSecIndex;
    <MTLFunction> * _nopDrawFragFunction;
    <MTLFunction> * _nopDrawVertexFunction;
    <MTLRenderPipelineState> * _nopRenderPipelineState;
    <MTLFunction> * _nopTileFunction;
    unsigned long long  _parallelCommandBufferId;
    unsigned long long  _parallelEncoderCommandBufferID;
    struct unordered_map<unsigned long long, EncoderInfo, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, EncoderInfo>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, EncoderInfo>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, EncoderInfo>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, EncoderInfo>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, EncoderInfo>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EncoderInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EncoderInfo>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EncoderInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EncoderInfo>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EncoderInfo>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EncoderInfo>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EncoderInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, EncoderInfo>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EncoderInfo>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, EncoderInfo>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, EncoderInfo>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _parallelEncoderMap;
    MTLRenderPassDescriptor * _parallelRenderCommandEncoderDescriptor;
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
    }  _persistantEncoder2ParallelMap;
    NSMutableDictionary * _pixelHistory;
    DYMTLPixelHistoryDrawStatsSupport * _pixelHistoryDrawStatsRenderer;
    NSMutableDictionary * _pixelHistoryEncoderStateTrackings;
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
    }  _pixelHistoryInverseObjectMap;
    <MTLBuffer> * _pixelHistoryPixelPreviousDepth;
    <MTLBuffer> * _pixelHistoryPixelPreviousStencil;
    DYMTLPostVertexDump * _postVertexDump;
    NSDictionary * _profileInfo;
    <MTLRenderPipelineState> * _renderPipelineState;
    unsigned int  _sampleLocationIndex;
    DYMTLShaderDebuggerTraceGenerator * _shaderDebuggerTraceGenerator;
    bool  _shouldIgnoreCaptureFile;
    <MTLFence> * _sparseTextureFence;
    NSArray * _splitEncoderCommandCount;
    unsigned long long  _stageInIndirectBufferId;
    unsigned long long  _stageInIndirectBufferOffset;
    struct { 
        struct { 
            unsigned long long x; 
            unsigned long long y; 
            unsigned long long z; 
        } origin; 
        struct { 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long depth; 
        } size; 
    }  _stageInRegion;
    NSString * _statPixels;
    NSString * _statVertices;
    bool  _supportsTessellation;
    unsigned long long  _targetCommandEncoderId;
    bool  _targetFunctionNeedsSeparatedPostVertexDump;
    DYMTLTextureRenderer * _textureRenderer;
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
    }  _textureToDrawableMap;
    NSMutableDictionary * _thumbnailDictionary;
    DYMTLTileMemoryExtractor * _tileMemoryExtractor;
    long long  _wireframeRenderMode;
    DYMTLDebugWireframeRenderer * _wireframeRenderer;
}

@property (nonatomic, retain) NSMutableArray *counterListsPerPass;
@property (nonatomic) unsigned int currentEncoderIndex;
@property (nonatomic, retain) NSMutableArray *frameCounters;
@property (nonatomic, readonly) DYMTLPostVertexDump *postVertexDump;
@property (nonatomic, readonly) DYMTLShaderDebuggerTraceGenerator *shaderDebuggerTraceGenerator;
@property (nonatomic) bool shouldIgnoreCaptureFile;
@property (nonatomic, retain) NSString *statPixels;
@property (nonatomic, retain) NSString *statVertices;
@property (nonatomic, readonly) bool targetFunctionNeedsSeparatedPostVertexDump;
@property (nonatomic) long long wireframeRenderMode;

+ (id)harvestableTexture:(id)arg1;
+ (id)thumbnailTexture:(unsigned long long)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addRenderPassDescriptorToEncoderMapFromArgumentPointer:(void*)arg1 forEncoder:(unsigned long long)arg2;
- (void)_addRenderPassDescriptorToEncoderMapFromRenderPassDescriptor:(struct DYMTLRenderPassDescriptor { unsigned long long x1; unsigned long long x2; struct DYMTLRenderPassAttachmentDescriptor { unsigned long long x_3_1_1; unsigned long long x_3_1_2; unsigned long long x_3_1_3; unsigned long long x_3_1_4; unsigned long long x_3_1_5; unsigned long long x_3_1_6; unsigned long long x_3_1_7; unsigned long long x_3_1_8; unsigned long long x_3_1_9; unsigned long long x_3_1_10; unsigned long long x_3_1_11; struct DYMTLClearValue { union { struct { double x_1_4_1; double x_1_4_2; double x_1_4_3; double x_1_4_4; } x_1_3_1; double x_1_3_2[4]; } x_12_2_1; } x_3_1_12; bool x_3_1_13; unsigned long long x_3_1_14; unsigned long long x_3_1_15; } x3[8]; struct DYMTLRenderPassAttachmentDescriptor { unsigned long long x_4_1_1; unsigned long long x_4_1_2; unsigned long long x_4_1_3; unsigned long long x_4_1_4; unsigned long long x_4_1_5; unsigned long long x_4_1_6; unsigned long long x_4_1_7; unsigned long long x_4_1_8; unsigned long long x_4_1_9; unsigned long long x_4_1_10; unsigned long long x_4_1_11; struct DYMTLClearValue { union { struct { double x_1_4_1; double x_1_4_2; double x_1_4_3; double x_1_4_4; } x_1_3_1; double x_1_3_2[4]; } x_12_2_1; } x_4_1_12; bool x_4_1_13; unsigned long long x_4_1_14; unsigned long long x_4_1_15; } x4; }*)arg1 forEncoder:(unsigned long long)arg2;
- (struct AttachmentInfo { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })_attachmentInfoForCommandEncoderID:(unsigned long long)arg1;
- (void)_createBatchIdFilterMapping:(bool)arg1 withCommandEncoder:(id)arg2;
- (void)_endEncodingForAllRemainingEncoders:(void*)arg1;
- (void)_executeGraphicsFunction;
- (unsigned long long)_executeIndirectCommandBufferUpToSubIndex:(unsigned long long)arg1 outBuffer:(id*)arg2 outDataPointer:(const char **)arg3;
- (void)_extractTileMemoryWithRenderPassDescriptor:(struct DYMTLRenderPassDescriptor { unsigned long long x1; unsigned long long x2; struct DYMTLRenderPassAttachmentDescriptor { unsigned long long x_3_1_1; unsigned long long x_3_1_2; unsigned long long x_3_1_3; unsigned long long x_3_1_4; unsigned long long x_3_1_5; unsigned long long x_3_1_6; unsigned long long x_3_1_7; unsigned long long x_3_1_8; unsigned long long x_3_1_9; unsigned long long x_3_1_10; unsigned long long x_3_1_11; struct DYMTLClearValue { union { struct { double x_1_4_1; double x_1_4_2; double x_1_4_3; double x_1_4_4; } x_1_3_1; double x_1_3_2[4]; } x_12_2_1; } x_3_1_12; bool x_3_1_13; unsigned long long x_3_1_14; unsigned long long x_3_1_15; } x3[8]; struct DYMTLRenderPassAttachmentDescriptor { unsigned long long x_4_1_1; unsigned long long x_4_1_2; unsigned long long x_4_1_3; unsigned long long x_4_1_4; unsigned long long x_4_1_5; unsigned long long x_4_1_6; unsigned long long x_4_1_7; unsigned long long x_4_1_8; unsigned long long x_4_1_9; unsigned long long x_4_1_10; unsigned long long x_4_1_11; struct DYMTLClearValue { union { struct { double x_1_4_1; double x_1_4_2; double x_1_4_3; double x_1_4_4; } x_1_3_1; double x_1_3_2[4]; } x_12_2_1; } x_4_1_12; bool x_4_1_13; unsigned long long x_4_1_14; unsigned long long x_4_1_15; } x4; }*)arg1 renderEncoderID:(unsigned long long)arg2 isDrawCall:(bool)arg3;
- (void)_forceAttachmentLoadActionToLoad:(id)arg1;
- (void)_forceAttachmentStoreActionToStore:(id)arg1;
- (id)_generateDummyPipeline:(id)arg1;
- (id)_generateThumbnailAndResourceInfoForRequestedTextures:(id)arg1 resolution:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 commandBuffer:(id)arg3;
- (bool)_isFunctionCommandEncoderCreation;
- (bool)_isReceiverTypeCommandEncoderRelated;
- (void)_modifyDescriptorForLayering:(id)arg1 withBuffer:(id)arg2;
- (void)_modifyDescriptorForStore:(id)arg1;
- (void)_setupEncodersForBatchIdFiltering;
- (void)_splitBlitEncoder;
- (void)_splitCommandEncoders;
- (void)_splitComputeEncoder;
- (void)_splitRenderEncoders;
- (void)_superExecutePlatformFunction;
- (void)_swizzleAttachmentTextureForLoad:(id)arg1 withBuffer:(id)arg2;
- (id)_texture2DFromTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 commandBuffer:(id)arg5;
- (void)_trackObjects;
- (void)_updateMemorylessTextures:(id)arg1;
- (void)_updateRemainingCommandsForEncoder;
- (void)allowOverlap:(bool)arg1 withPState:(unsigned int)arg2;
- (id)collectPixelDrawStats:(id)arg1 originalEncoderId:(unsigned long long)arg2 originalEncoder:(id)arg3 originalPipeline:(id)arg4 atX:(unsigned long long)arg5 y:(unsigned long long)arg6 draw:(id /* block */)arg7;
- (id)collectPixelDrawStatsTotal:(id)arg1 originalPipeline:(id)arg2 atX:(unsigned long long)arg3 y:(unsigned long long)arg4 draw:(id /* block */)arg5;
- (void)commitEncodersAndCommandBuffers;
- (id)counterInfo:(id)arg1;
- (id)counterListsPerPass;
- (unsigned int)currentEncoderIndex;
- (id)dependencyGraphThumbnailCache;
- (id)derivedCounterData;
- (void)enableConsistentState:(bool)arg1;
- (void)enableStatsSampling:(bool)arg1;
- (void)encodeStoreActionForParallelRenderCommandEncoder:(id)arg1 withDescriptor:(id)arg2;
- (void)encodeStoreActionForRenderCommandEncoder:(id)arg1 withDescriptor:(id)arg2;
- (void*)encoderMap;
- (void)executeFunctions:(struct CoreFunction { unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; union { unsigned long long x_5_1_1; unsigned long long x_5_1_2; } x5; struct Argument { void *x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; unsigned int x_6_1_4; unsigned short x_6_1_5; unsigned short x_6_1_6; } x6; struct Argument { void *x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned short x_7_1_5; unsigned short x_7_1_6; } x7[16]; unsigned int x8; unsigned int x9; void *x10; void *x11; }*)arg1 count:(unsigned long long)arg2 subCommandIndex:(unsigned int)arg3;
- (void)executeGraphicsFunction;
- (void)executePlatformFunction;
- (void)extractCommandBufferTranslationData;
- (void)extractComputeIndirectArgumentBuffers:(void*)arg1;
- (void)extractIndirectArgumentBuffers;
- (void)extractRenderIndirectArgumentBuffers:(void*)arg1;
- (id)frameCounters;
- (id)generatePerPrimitiveHistory:(unsigned long long)arg1 commandQueue:(id)arg2 currentEncoderId:(unsigned long long)arg3 originalEncoder:(id)arg4 originalPipeline:(id)arg5 atX:(unsigned long long)arg6 y:(unsigned long long)arg7;
- (id)generatePerPrimitiveHistory_drawPrimitives_vertexStart_vertexCount:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 total:(unsigned long long)arg4 commandQueue:(id)arg5 currentEncoderId:(unsigned long long)arg6 originalEncoder:(id)arg7 originalPipeline:(id)arg8 atX:(unsigned long long)arg9 y:(unsigned long long)arg10;
- (unsigned long long)getStatLocations;
- (id)initWithCaptureStore:(id)arg1;
- (bool)isBlitSamplingSupported;
- (bool)isCounterAvailable:(id)arg1;
- (id)pixelHistoryCache;
- (id)postVertexDump;
- (void)prepareForCaptureExecution;
- (void)presentDrawable;
- (id)replayerLayerForDrawableId:(unsigned long long)arg1;
- (void)resetFunctionPlayerData;
- (void)resetPixelHistoryCache;
- (void)sampleEncoderCounters;
- (void)sampleSplitEncoderCounters;
- (void)setConsistentStateTo:(unsigned int)arg1;
- (void)setCounterListsPerPass:(id)arg1;
- (void)setCurrentEncoderIndex:(unsigned int)arg1;
- (void)setDevice:(id)arg1;
- (void)setFrameCounters:(id)arg1;
- (void)setShouldIgnoreCaptureFile:(bool)arg1;
- (void)setStatLocations:(unsigned long long)arg1;
- (void)setStatPixels:(id)arg1;
- (void)setStatVertices:(id)arg1;
- (void)setWireframeRenderMode:(long long)arg1;
- (void)setupAllStatLocationsWithBlitOption:(bool)arg1;
- (void)setupBatchFilterForEncoders:(id)arg1;
- (id)setupCounterConfigurationAndGetFrameProfilerCounters;
- (void)setupFrameTimeProfiling;
- (void)setupProfileInfo:(id)arg1;
- (void)setupProfilingForCounterLists;
- (bool)setupProfilingForListAtIndex:(unsigned long long)arg1;
- (id)shaderDebuggerTraceGenerator;
- (bool)shouldExecuteGraphicsFunction;
- (bool)shouldIgnoreCaptureFile;
- (id)statPixels;
- (id)statVertices;
- (void)stopFrameProfiling;
- (bool)targetFunctionNeedsSeparatedPostVertexDump;
- (id)thumbnailCache;
- (void)updateReplayerLayer:(unsigned long long)arg1 withOriginalLayer:(unsigned long long)arg2;
- (void)waitForCommmandBuffersCompletion;
- (long long)wireframeRenderMode;

@end
