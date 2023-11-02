
@interface AMUIAmbientPresentationSceneClientComponent : FBSSceneComponent {
    long long  _ambientDisplayStyle;
    bool  _ambientPresented;
}

@property (nonatomic) long long ambientDisplayStyle;
@property (getter=isAmbientPresented, nonatomic) bool ambientPresented;

- (long long)_ambientDisplayStyleForScene:(id)arg1;
- (bool)_isAmbientPresentedForScene:(id)arg1;
- (void)_sceneWillConnect:(id)arg1;
- (void)_updateAmbientTraitsForWindowScene:(id)arg1;
- (long long)ambientDisplayStyle;
- (void)dealloc;
- (bool)isAmbientPresented;
- (void)scene:(id)arg1 didUpdateSettings:(id)arg2;
- (void)setAmbientDisplayStyle:(long long)arg1;
- (void)setAmbientPresented:(bool)arg1;
- (void)setScene:(id)arg1;

@end
