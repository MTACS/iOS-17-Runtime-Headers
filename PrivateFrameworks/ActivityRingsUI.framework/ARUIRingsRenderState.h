
@interface ARUIRingsRenderState : NSObject <ARUIPrecompiledRendering, ARUIRendering, ARUIRingsState> {
    long long  _centeredAroundPercentSegmentDrawCount;
    unsigned long long  _renderArea;
    <MTLRenderPipelineState> * _renderPipelineState;
}

@property (nonatomic) long long centeredAroundPercentSegmentDrawCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long renderArea;
@property (nonatomic, retain) <MTLRenderPipelineState> *renderPipelineState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)centeredAroundPercentSegmentDrawCount;
- (void)didInitialize;
- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (id)initWithPipelineLibrary:(id)arg1;
- (id)name;
- (unsigned long long)renderArea;
- (id)renderPipelineDescriptorFromLibrary:(id)arg1;
- (id)renderPipelineState;
- (void)setCenteredAroundPercentSegmentDrawCount:(long long)arg1;
- (void)setRenderArea:(unsigned long long)arg1;
- (void)setRenderPipelineState:(id)arg1;
- (bool)shouldRunStateForRing:(id)arg1;

@end
