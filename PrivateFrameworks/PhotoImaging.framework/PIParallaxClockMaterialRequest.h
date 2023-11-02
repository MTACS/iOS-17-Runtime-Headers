
@interface PIParallaxClockMaterialRequest : NURenderRequest {
    PFParallaxLayerStack * _layerStack;
    PIParallaxStyle * _style;
}

@property (nonatomic, retain) PFParallaxLayerStack *layerStack;
@property (nonatomic, retain) PIParallaxStyle *style;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithComposition:(id)arg1;
- (id)initWithLayerStack:(id)arg1;
- (id)layerStack;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (void)setLayerStack:(id)arg1;
- (void)setStyle:(id)arg1;
- (id)style;
- (void)submit:(id /* block */)arg1;

@end
