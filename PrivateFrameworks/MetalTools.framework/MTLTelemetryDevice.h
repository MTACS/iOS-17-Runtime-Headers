
@interface MTLTelemetryDevice : MTLToolsDevice {
    bool  _isGLMTL;
    unsigned long long  _startTime;
    NSObject<OS_os_log> * _telemetryLog;
    NSObject<OS_dispatch_source> * _timer;
    double  _timerScale;
    struct MTLTelemetryAnisoClippedCountsRec { unsigned int x1[4]; } * anisoClippedCounts;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * attachmentCount;
    struct MTLTelemetryStencilStateDistributionRec { unsigned int x1[8][8]; unsigned int x2[8][8]; unsigned int x3[8][8]; } * backFaceStencilStateDistribution;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * blitEncoderBlitDistribution;
    struct unordered_map<MTLPixelFormat, MTLTelemetryBlitDistribution, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, std::allocator<std::pair<const MTLPixelFormat, MTLTelemetryBlitDistribution>>> { 
        struct __hash_table<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>>, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  blitMap;
    struct MTLTelemetryBufferDistributionRec { struct MTLTelemetryBufferStatRec { struct MTLTelemetryStatisticUIRec { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned long long x_1_2_3; unsigned int x_1_2_4; } x_1_1_1; } x1; } * bufferDistribution;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * commandBufferBlitDistribution;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * commandBufferDispatchDistribution;
    struct MTLTelemetryCommandBufferCounttRec { unsigned int x1; unsigned int x2; } * commandBufferDistribution;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * commandBufferDrawCallDistribution;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * commandBufferMemoryBarrierDistribution;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * computeEncoderDispatchDistribution;
    struct unordered_map<unsigned int, MTLTelemetryComputePipelineUsageRec, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, MTLTelemetryComputePipelineUsageRec>>> { 
        struct __hash_table<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  computePipeUsageMap;
    struct MTLTelemetryComputePipelineDistributionRec { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } * computePipelineDistribution;
    struct unordered_map<std::string, MTLTelemetryStatisticUIRec, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, MTLTelemetryStatisticUIRec>>> { 
        struct __hash_table<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  computeStatDistributionMap;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * depthClipModeClampDistribution;
    struct MTLTelemetryDepthStateDistributionRec { unsigned int x1; unsigned int x2[8]; } * depthStateDistribution;
    struct MTLTelemetryDispatchDistributionRec { unsigned int x1; struct MTLTelemetryStatisticUIRec { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned long long x_2_1_3; unsigned int x_2_1_4; } x2; struct MTLTelemetryStatisticUIRec { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned long long x_3_1_3; unsigned int x_3_1_4; } x3; struct MTLTelemetryStatisticUIRec { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned long long x_4_1_3; unsigned int x_4_1_4; } x4; struct MTLTelemetryStatisticUIRec { unsigned int x_5_1_1; unsigned int x_5_1_2; unsigned long long x_5_1_3; unsigned int x_5_1_4; } x5; struct MTLTelemetryStatisticUIRec { unsigned int x_6_1_1; unsigned int x_6_1_2; unsigned long long x_6_1_3; unsigned int x_6_1_4; } x6; struct MTLTelemetryStatisticUIRec { unsigned int x_7_1_1; unsigned int x_7_1_2; unsigned long long x_7_1_3; unsigned int x_7_1_4; } x7; struct MTLTelemetryStatisticUIRec { unsigned int x_8_1_1; unsigned int x_8_1_2; unsigned long long x_8_1_3; unsigned int x_8_1_4; } x8; struct MTLTelemetryStatisticUIRec { unsigned int x_9_1_1; unsigned int x_9_1_2; unsigned long long x_9_1_3; unsigned int x_9_1_4; } x9; } * dispatchDistribution;
    struct MTLTelemetryDrawDistributionRec { struct MTLTelemetryDrawStatRec { unsigned int x_1_1_1; struct MTLTelemetryStatisticUIRec { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned long long x_2_2_3; unsigned int x_2_2_4; } x_1_1_2; struct MTLTelemetryStatisticUIRec { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned long long x_3_2_3; unsigned int x_3_2_4; } x_1_1_3; } x1[5][3][3]; } * drawDistribution;
    struct MTLTelemetryEncoderDistributionRec { struct MTLTelemetryStatisticUIRec { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned long long x_1_1_3; unsigned int x_1_1_4; } x1; struct MTLTelemetryStatisticUIRec { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned long long x_2_1_3; unsigned int x_2_1_4; } x2; struct MTLTelemetryStatisticUIRec { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned long long x_3_1_3; unsigned int x_3_1_4; } x3; struct MTLTelemetryStatisticUIRec { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned long long x_4_1_3; unsigned int x_4_1_4; } x4; struct MTLTelemetryStatisticUIRec { unsigned int x_5_1_1; unsigned int x_5_1_2; unsigned long long x_5_1_3; unsigned int x_5_1_4; } x5; } * encoderDistribution;
    struct unordered_map<std::string, MTLTelemetryStatisticUIRec, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, MTLTelemetryStatisticUIRec>>> { 
        struct __hash_table<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  fragStatDistributionMap;
    struct MTLTelemetryStencilStateDistributionRec { unsigned int x1[8][8]; unsigned int x2[8][8]; unsigned int x3[8][8]; } * frontFaceStencilStateDistribution;
    struct MTLTelemetryKernelDistributionRec { struct MTLTelemetryStatisticIRec { int x_1_1_1; int x_1_1_2; long long x_1_1_3; int x_1_1_4; } x1; struct MTLTelemetryStatisticIRec { int x_2_1_1; int x_2_1_2; long long x_2_1_3; int x_2_1_4; } x2; struct MTLTelemetryStatisticIRec { int x_3_1_1; int x_3_1_2; long long x_3_1_3; int x_3_1_4; } x3; struct MTLTelemetryStatisticIRec { int x_4_1_1; int x_4_1_2; long long x_4_1_3; int x_4_1_4; } x4; } * kernelDistribution;
    struct unordered_map<unsigned int, MTLTelemetryKernelUsageRec, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, MTLTelemetryKernelUsageRec>>> { 
        struct __hash_table<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  kernelUsageMap;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * parallellRenderEncoderDistribution;
    NSObject<OS_dispatch_queue> * queue;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * renderEncoderDrawCallDistribution;
    struct unordered_map<unsigned int, MTLTelemetryRenderFuncUsageRec, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, MTLTelemetryRenderFuncUsageRec>>> { 
        struct __hash_table<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  renderFuncUsageMap;
    struct unordered_map<unsigned int, MTLTelemetryRenderPipelineUsageRec, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, MTLTelemetryRenderPipelineUsageRec>>> { 
        struct __hash_table<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  renderPipeUsageMap;
    struct MTLTelemetryRenderPipelineDistributionRec { unsigned int x1[8]; unsigned int x2; unsigned int x3; unsigned int x4; struct MTLTelemetryStatisticUIRec { unsigned int x_5_1_1; unsigned int x_5_1_2; unsigned long long x_5_1_3; unsigned int x_5_1_4; } x5; struct MTLTelemetryStatisticUIRec { unsigned int x_6_1_1; unsigned int x_6_1_2; unsigned long long x_6_1_3; unsigned int x_6_1_4; } x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; } * renderPipelineDistribution;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * renderTargetArrayLengthDistribution;
    struct unordered_map<MTLPixelFormat, MTLTelemetryRenderTargetDistribution, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, std::allocator<std::pair<const MTLPixelFormat, MTLTelemetryRenderTargetDistribution>>> { 
        struct __hash_table<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>>, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  renderTargetMap;
    struct MTLTelemetrySamplerDistributionRec { unsigned int x1; struct MTLTelemetrySamplerStatRec { unsigned int x_2_1_1; struct MTLTelemetryStatisticUIRec { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned long long x_2_2_3; unsigned int x_2_2_4; } x_2_1_2; struct MTLTelemetryStatisticUIRec { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned long long x_3_2_3; unsigned int x_3_2_4; } x_2_1_3; struct MTLTelemetryStatisticUIRec { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned long long x_4_2_3; unsigned int x_4_2_4; } x_2_1_4; struct MTLTelemetryStatisticUIRec { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned long long x_5_2_3; unsigned int x_5_2_4; } x_2_1_5; struct MTLTelemetryStatisticFRec { float x_6_2_1; float x_6_2_2; float x_6_2_3; unsigned int x_6_2_4; } x_2_1_6; struct MTLTelemetryStatisticFRec { float x_7_2_1; float x_7_2_2; float x_7_2_3; unsigned int x_7_2_4; } x_2_1_7; struct MTLTelemetryStatisticUIRec { unsigned int x_8_2_1; unsigned int x_8_2_2; unsigned long long x_8_2_3; unsigned int x_8_2_4; } x_2_1_8; } x2[7][8]; } * samplerDistribution;
    struct MTLTelemetryScissorRectDistributionRec { struct MTLTelemetryStatisticUIRec { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned long long x_1_1_3; unsigned int x_1_1_4; } x1; struct MTLTelemetryStatisticFRec { float x_2_1_1; float x_2_1_2; float x_2_1_3; unsigned int x_2_1_4; } x2; struct MTLTelemetryStatisticFRec { float x_3_1_1; float x_3_1_2; float x_3_1_3; unsigned int x_3_1_4; } x3; } * scissorRectDistribution;
    struct MTLTelemetrySupportQueryStatRec { 
        struct unordered_map<std::string, unsigned int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned int>>> { 
            struct __hash_table<std::__hash_value_type<std::string, unsigned int>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, unsigned int>>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int>, std::hash<std::string>, std::equal_to<std::string>>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int>, std::equal_to<std::string>, std::hash<std::string>>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } featureSetCount; 
        struct MTLTelemetryStatisticUIRec { 
            unsigned int min; 
            unsigned int max; 
            unsigned long long total; 
            unsigned int count; 
        } texSampleCount; 
    }  supportQuery;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * textureBindCount;
    struct unordered_map<MTLPixelFormat, MTLTelemetryTextureDistribution, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, std::allocator<std::pair<const MTLPixelFormat, MTLTelemetryTextureDistribution>>> { 
        struct __hash_table<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>>, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  textureMap;
    struct mach_timebase_info { 
        unsigned int numer; 
        unsigned int denom; 
    }  timebase;
    struct MTLTelemetryViewportDistributionRec { struct MTLTelemetryStatisticUIRec { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned long long x_1_1_3; unsigned int x_1_1_4; } x1; struct MTLTelemetryStatisticFRec { float x_2_1_1; float x_2_1_2; float x_2_1_3; unsigned int x_2_1_4; } x2; struct MTLTelemetryStatisticFRec { float x_3_1_1; float x_3_1_2; float x_3_1_3; unsigned int x_3_1_4; } x3; struct MTLTelemetryStatisticFRec { float x_4_1_1; float x_4_1_2; float x_4_1_3; unsigned int x_4_1_4; } x4; struct MTLTelemetryStatisticFRec { float x_5_1_1; float x_5_1_2; float x_5_1_3; unsigned int x_5_1_4; } x5; } * viewportDistribution;
    struct unordered_map<std::string, MTLTelemetryStatisticUIRec, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, MTLTelemetryStatisticUIRec>>> { 
        struct __hash_table<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  vtxStatDistributionMap;
}

@property (nonatomic) unsigned long long startTime;
@property (nonatomic, readonly) NSObject<OS_os_log> *telemetryLog;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)dealloc;
- (void)emitFeatureQueryUsage;
- (void)emitTelemetry;
- (bool)enableTelemetry;
- (struct { unsigned long long x1; unsigned long long x2; })heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (struct { unsigned long long x1; unsigned long long x2; })heapTextureSizeAndAlignWithDescriptor:(id)arg1;
- (void)initDistributions;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(id /* block */)arg4;
- (id)newBufferWithDescriptor:(id)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newCommandQueue;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newDepthStencilStateWithDescriptor:(id)arg1;
- (id)newHeapWithDescriptor:(id)arg1;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newSamplerStateWithDescriptor:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface { }*)arg2 plane:(unsigned long long)arg3;
- (void)setGLMode:(bool)arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (void)setTimerInterval:(double)arg1;
- (unsigned long long)startTime;
- (void)startTimerWithInterval:(double)arg1;
- (bool)supportsFeatureSet:(unsigned long long)arg1;
- (bool)supportsTextureSampleCount:(unsigned long long)arg1;
- (id)telemetryLog;

@end
