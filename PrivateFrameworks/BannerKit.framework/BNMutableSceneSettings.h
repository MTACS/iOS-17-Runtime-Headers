
@interface BNMutableSceneSettings : UIMutableApplicationSceneSettings <BSSettingDescriptionProvider>

@property (nonatomic) int bannerAppearState;
@property (nonatomic, copy) Class clientContainerViewControllerClass;
@property (nonatomic) struct CGSize { double x1; double x2; } containerSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } presentationSize;
@property (nonatomic, copy) NSString *revocationReason;
@property (readonly) Class superclass;
@property (getter=isUserInteractionInProgress, nonatomic) bool userInteractionInProgress;
@property (nonatomic) int viewControllerAppearState;

- (int)bannerAppearState;
- (Class)clientContainerViewControllerClass;
- (struct CGSize { double x1; double x2; })containerSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isUserInteractionInProgress;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })presentationSize;
- (id)revocationReason;
- (void)setBannerAppearState:(int)arg1;
- (void)setClientContainerViewControllerClass:(Class)arg1;
- (void)setContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRevocationReason:(id)arg1;
- (void)setUserInteractionInProgress:(bool)arg1;
- (void)setViewControllerAppearState:(int)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (int)viewControllerAppearState;

@end
