
@interface DYMTLParallelRenderCommandEncoderStateTracker : NSObject <DYMTLParallelRenderCommandEncoderStateTracker> {
    unsigned long long  _height;
    <MTLParallelRenderCommandEncoder> * _renderEncoder;
    <MTLRenderPipelineState> * _renderPipelineState;
    unsigned long long  _width;
}

@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) unsigned long long width;

- (void).cxx_destruct;
- (void)_setDefaultsWithDescriptor:(id)arg1 device:(id)arg2;
- (bool)conformsToProtocol:(id)arg1;
- (id)descriptor;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)height;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;
- (id)initWithEncoder:(id)arg1 descriptor:(id)arg2;
- (bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)width;

@end
