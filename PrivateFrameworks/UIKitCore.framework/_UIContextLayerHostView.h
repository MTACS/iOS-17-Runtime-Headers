
@interface _UIContextLayerHostView : _UISceneLayerHostView

@property (nonatomic, copy) UISceneAsynchronousRenderingOptions *asynchronousRenderingOptions;
@property (nonatomic) unsigned long long renderingMode;

+ (Class)layerClass;

- (void)_prepareForWindowDealloc;
- (id)asynchronousRenderingOptions;
- (id)initWithSceneLayer:(id)arg1;
- (id)layer;
- (unsigned long long)renderingMode;
- (void)setAsynchronousRenderingOptions:(id)arg1;
- (void)setInheritsSecurity:(bool)arg1;
- (void)setRenderingMode:(unsigned long long)arg1;
- (void)setResizesHostedContext:(bool)arg1;
- (void)setStopsHitTestTransformAccumulation:(bool)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
