
@interface MTLGPUDebugPipelineStateInfoEncoder : NSObject {
    <MTLArgumentEncoder> * _argumentEncoder;
}

@property (nonatomic, readonly) unsigned long long encodedLength;

- (void)dealloc;
- (unsigned long long)encodedLength;
- (id)initWithDevice:(id)arg1;
- (void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void)setComputePipelineState:(id)arg1;
- (void)setRenderPipelineState:(id)arg1;

@end
