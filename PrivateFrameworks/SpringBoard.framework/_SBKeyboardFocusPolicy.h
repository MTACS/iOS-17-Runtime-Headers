
@interface _SBKeyboardFocusPolicy : NSObject <BSDescriptionStreamable, NSCopying, NSMutableCopying> {
    bool  _cameraIsHosted;
    BKSHIDEventDeferringTarget * _keyboardFocusTarget;
    FBSSceneIdentityToken * _overrideSceneIdentityToken;
    unsigned long long  _policyGeneration;
    SBWindowScene * _preferredSBFocusWindowScene;
    _SBRecentlyUsedSceneIdentityCache * _recentlyUsedScenes;
    long long  _selectionPolicy;
    bool  _shouldSuppressRemoteDeferring;
}

@property (nonatomic, readonly) long long advicePolicy;
@property (nonatomic, readonly) bool cameraIsHosted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BKSHIDEventDeferringTarget *keyboardFocusTarget;
@property (nonatomic, readonly) FBSSceneIdentityToken *overrideSceneIdentityToken;
@property (nonatomic, readonly) unsigned long long policyGeneration;
@property (nonatomic, readonly) SBWindowScene *preferredSBFocusWindowScene;
@property (nonatomic, readonly, copy) _SBRecentlyUsedSceneIdentityCache *recentlyUsedScenes;
@property (nonatomic, readonly) bool shouldSuppressRemoteDeferring;
@property (readonly) Class superclass;

+ (id)build:(id /* block */)arg1;
+ (id)new;

- (void).cxx_destruct;
- (long long)advicePolicy;
- (void)appendDescriptionToFormatter:(id)arg1;
- (bool)cameraIsHosted;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)keyboardFocusTarget;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)overrideSceneIdentityToken;
- (unsigned long long)policyGeneration;
- (id)preferredSBFocusWindowScene;
- (id)recentlyUsedScenes;
- (bool)shouldSuppressRemoteDeferring;

@end
