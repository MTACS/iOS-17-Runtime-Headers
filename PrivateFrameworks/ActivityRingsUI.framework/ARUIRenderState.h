
@interface ARUIRenderState : NSObject <ARUIRendering> {
    <MTLRenderPipelineState> * _renderPipelineState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MTLRenderPipelineState> *renderPipelineState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (id)renderPipelineDescriptorFromLibrary:(id)arg1;
- (id)renderPipelineState;
- (void)setRenderPipelineState:(id)arg1;

@end
