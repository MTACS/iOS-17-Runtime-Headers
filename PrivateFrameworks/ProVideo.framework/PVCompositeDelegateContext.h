
@interface PVCompositeDelegateContext : NSObject {
    id  _preprocessData;
    PVColorSpace * _renderingColorSpace;
    PVInstructionGraphSourceNode * _sourceNode;
}

@property (nonatomic, readonly) id preprocessData;
@property (nonatomic, readonly) PVColorSpace *renderingColorSpace;
@property (nonatomic, readonly) PVInstructionGraphSourceNode *sourceNode;

- (void).cxx_destruct;
- (id)initWithNode:(id)arg1;
- (id)preprocessData;
- (id)renderingColorSpace;
- (void)setPreprocessData:(id)arg1;
- (void)setRenderColorSpace:(id)arg1;
- (id)sourceNode;

@end
