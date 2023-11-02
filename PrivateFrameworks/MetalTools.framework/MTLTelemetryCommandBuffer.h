
@interface MTLTelemetryCommandBuffer : MTLToolsCommandBuffer {
    struct MTLTelemetryKernelStateRec { 
        int pbAlloc; 
        int spmRenderCount; 
        int tiledSceneBytes; 
        int renderCount; 
    }  _initKernelState;
    MTLTelemetryDevice * _telemetryDevice;
    struct MTLTelemetryAnisoClippedCountsRec { unsigned int x1[4]; } * anisoClippedCounts;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * attachmentCount;
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
    unsigned int  cbBlits;
    unsigned int  cbDispatches;
    unsigned int  cbDraws;
    unsigned int  cbMemoryBarriers;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * computeEncoderDispatchDistribution;
    unsigned int  depthClipModeClampCount;
    struct MTLTelemetryDispatchDistributionRec { unsigned int x1; struct MTLTelemetryStatisticUIRec { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned long long x_2_1_3; unsigned int x_2_1_4; } x2; struct MTLTelemetryStatisticUIRec { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned long long x_3_1_3; unsigned int x_3_1_4; } x3; struct MTLTelemetryStatisticUIRec { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned long long x_4_1_3; unsigned int x_4_1_4; } x4; struct MTLTelemetryStatisticUIRec { unsigned int x_5_1_1; unsigned int x_5_1_2; unsigned long long x_5_1_3; unsigned int x_5_1_4; } x5; struct MTLTelemetryStatisticUIRec { unsigned int x_6_1_1; unsigned int x_6_1_2; unsigned long long x_6_1_3; unsigned int x_6_1_4; } x6; struct MTLTelemetryStatisticUIRec { unsigned int x_7_1_1; unsigned int x_7_1_2; unsigned long long x_7_1_3; unsigned int x_7_1_4; } x7; struct MTLTelemetryStatisticUIRec { unsigned int x_8_1_1; unsigned int x_8_1_2; unsigned long long x_8_1_3; unsigned int x_8_1_4; } x8; struct MTLTelemetryStatisticUIRec { unsigned int x_9_1_1; unsigned int x_9_1_2; unsigned long long x_9_1_3; unsigned int x_9_1_4; } x9; } * dispatchDistribution;
    struct MTLTelemetryDrawDistributionRec { struct MTLTelemetryDrawStatRec { unsigned int x_1_1_1; struct MTLTelemetryStatisticUIRec { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned long long x_2_2_3; unsigned int x_2_2_4; } x_1_1_2; struct MTLTelemetryStatisticUIRec { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned long long x_3_2_3; unsigned int x_3_2_4; } x_1_1_3; } x1[5][3][3]; } * drawDistribution;
    struct MTLTelemetryEncoderCountRec { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } * encoderCount;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * parallellRenderEncoderDistribution;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * renderEncoderDrawCallDistribution;
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
    struct MTLTelemetryScissorRectDistributionRec { struct MTLTelemetryStatisticUIRec { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned long long x_1_1_3; unsigned int x_1_1_4; } x1; struct MTLTelemetryStatisticFRec { float x_2_1_1; float x_2_1_2; float x_2_1_3; unsigned int x_2_1_4; } x2; struct MTLTelemetryStatisticFRec { float x_3_1_1; float x_3_1_2; float x_3_1_3; unsigned int x_3_1_4; } x3; } * scissorRectDistribution;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * textureBindCount;
    struct MTLTelemetryViewportDistributionRec { struct MTLTelemetryStatisticUIRec { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned long long x_1_1_3; unsigned int x_1_1_4; } x1; struct MTLTelemetryStatisticFRec { float x_2_1_1; float x_2_1_2; float x_2_1_3; unsigned int x_2_1_4; } x2; struct MTLTelemetryStatisticFRec { float x_3_1_1; float x_3_1_2; float x_3_1_3; unsigned int x_3_1_4; } x3; struct MTLTelemetryStatisticFRec { float x_4_1_1; float x_4_1_2; float x_4_1_3; unsigned int x_4_1_4; } x4; struct MTLTelemetryStatisticFRec { float x_5_1_1; float x_5_1_2; float x_5_1_3; unsigned int x_5_1_4; } x5; } * viewportDistribution;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)blitCommandEncoder;
- (id)blitCommandEncoderWithDescriptor:(id)arg1;
- (id)computeCommandEncoder;
- (id)computeCommandEncoderWithDescriptor:(id)arg1;
- (void)dealloc;
- (void)initDistributions;
- (id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2 descriptor:(id)arg3;
- (void)mergeDistributions;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (void)postCompletionHandlers;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;

@end
