
@interface BNSceneSettings : UIApplicationSceneSettings <BSSettingDescriptionProvider>

@property (nonatomic, readonly) int bannerAppearState;
@property (nonatomic, readonly, copy) Class clientContainerViewControllerClass;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } containerSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } presentationSize;
@property (nonatomic, readonly, copy) NSString *revocationReason;
@property (readonly) Class superclass;
@property (getter=isUserInteractionInProgress, nonatomic, readonly) bool userInteractionInProgress;
@property (nonatomic, readonly) int viewControllerAppearState;

- (int)bannerAppearState;
- (Class)clientContainerViewControllerClass;
- (struct CGSize { double x1; double x2; })containerSize;
- (bool)isUserInteractionInProgress;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })presentationSize;
- (id)revocationReason;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (int)viewControllerAppearState;

@end
