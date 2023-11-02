
@interface PTGraphRenderer : NSObject {
    NSMutableArray * _buffers;
    PTMetalContext * _metalContext;
    void _range;
    <MTLComputePipelineState> * _renderGraphToRegion;
    int  _samples;
    NSString * _title;
    <MTLComputePipelineState> * _updateGraphSequenceWithBuffer;
    <MTLComputePipelineState> * _updateGraphSequenceWithTextureSample;
    PTUtil * _util;
}

@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)initWithMetalContext:(void *)arg1 range:(void *)arg2 samples:(void *)arg3 sequences:(void *)arg4 title:(void *)arg5; // needs 5 arg types, found 4: id, int, int, id
- (void)renderWithRect:(void *)arg1 frameIndex:(void *)arg2 outTexture:(void *)arg3; // needs 3 arg types, found 2: int, id
- (void)setTitle:(id)arg1;
- (id)title;
- (void)updateWithSequenceId:(int)arg1 buffer:(id)arg2 offset:(unsigned long long)arg3 frameIndex:(int)arg4;
- (void)updateWithSequenceId:(int)arg1 buffer:(id)arg2 offset:(unsigned long long)arg3 scale:(float)arg4 frameIndex:(int)arg5;
- (void)updateWithSequenceId:(void *)arg1 texture:(void *)arg2 samplePos:(void *)arg3 scale:(void *)arg4 frameIndex:(void *)arg5; // needs 5 arg types, found 4: int, id, float, int
- (void)updateWithSequenceId:(int)arg1 value:(float)arg2 frameIndex:(int)arg3;

@end
