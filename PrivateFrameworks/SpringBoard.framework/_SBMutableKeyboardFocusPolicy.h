
@interface _SBMutableKeyboardFocusPolicy : _SBKeyboardFocusPolicy

@property (nonatomic) long long advicePolicy;
@property (nonatomic) bool cameraIsHosted;
@property (nonatomic, retain) BKSHIDEventDeferringTarget *keyboardFocusTarget;
@property (nonatomic, retain) FBSSceneIdentityToken *overrideSceneIdentityToken;
@property (nonatomic) SBWindowScene *preferredSBFocusWindowScene;
@property (nonatomic, copy) _SBRecentlyUsedSceneIdentityCache *recentlyUsedScenes;
@property (nonatomic) bool shouldSuppressRemoteDeferring;

- (void)setAdvicePolicy:(long long)arg1;
- (void)setCameraIsHosted:(bool)arg1;
- (void)setKeyboardFocusTarget:(id)arg1;
- (void)setOverrideSceneIdentityToken:(id)arg1;
- (void)setPreferredSBFocusWindowScene:(id)arg1;
- (void)setRecentlyUsedScenes:(id)arg1;
- (void)setShouldSuppressRemoteDeferring:(bool)arg1;

@end
