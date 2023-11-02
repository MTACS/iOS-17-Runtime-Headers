
@interface PUParallaxLayerView : UIView

@property (nonatomic, readonly) PUParallaxLayerLayoutInfo *currentLayoutInfo;
@property (nonatomic, readonly) PFParallaxLayer *parallaxLayer;

- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)currentLayoutInfo;
- (void)layoutWithInfo:(id)arg1;
- (id)parallaxLayer;

@end
