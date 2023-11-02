
@interface PFWallpaperCompoundLayerStack : NSObject {
    PFParallaxLayerStack * _landscapeLayerStack;
    PFParallaxLayerStack * _portraitLayerStack;
}

@property (nonatomic, readonly) PFParallaxLayerStack *landscapeLayerStack;
@property (nonatomic, readonly) PFPosterLayout *layout;
@property (nonatomic, readonly) PFParallaxLayerStack *portraitLayerStack;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (id)backgroundBackfillLayer;
- (id)compoundLayerStackByUpdatingParallaxDisabled:(bool)arg1;
- (id)compoundLayerStackByUpdatingPortraitDepthEnabled:(bool)arg1 landscapeDepthEnabled:(bool)arg2;
- (id)compoundLayerStackByUpdatingSettlingEffectEnabled:(bool)arg1;
- (id)initWithPortraitLayerStack:(id)arg1 landscapeLayerStack:(id)arg2;
- (id)landscapeLayerStack;
- (id)layout;
- (id)portraitLayerStack;
- (struct CGSize { double x1; double x2; })size;

@end
