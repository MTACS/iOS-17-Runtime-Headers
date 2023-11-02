
@interface MTLDebugParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder {
    struct atomic<unsigned long long> { 
        struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> { 
            _Atomic unsigned long long __a_value; 
        } __a_; 
    }  _attachmentWriteMask;
    MTLRenderPassDescriptor * _descriptor;
    unsigned int  _unknownStoreActions;
}

@property (nonatomic, readonly, copy) MTLRenderPassDescriptor *descriptor;

- (void)dealloc;
- (id)description;
- (id)descriptor;
- (void)endEncoding;
- (id)endEncodingAndRetrieveProgramAddressTable;
- (void)endEncoding_private;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithBaseRenderPass:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3;
- (void)mergeAttachmentWriteMask:(unsigned long long)arg1;
- (id)renderCommandEncoder;
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(union { struct { unsigned int x_1_1_1 : 8; unsigned int x_1_1_2 : 24; unsigned int x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; } x1; struct { unsigned int x_2_1_1 : 8; unsigned int x_2_1_2 : 24; unsigned int x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; } x2; }*)arg1 capacity:(unsigned long long)arg2;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;
- (void)setStencilStoreAction:(unsigned long long)arg1;
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;

@end
