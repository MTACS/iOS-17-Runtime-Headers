
@interface SBRenderOverlayRecipe : NSObject <SBTestRecipe> {
    SBWindow * _window;
    UIWindowScene * _windowScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)title;
- (void)windowSceneDidUpdate:(id)arg1;

@end
