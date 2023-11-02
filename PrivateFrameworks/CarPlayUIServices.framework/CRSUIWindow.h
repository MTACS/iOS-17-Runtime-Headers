
@interface CRSUIWindow : UIWindow <_UISceneSettingsDiffAction> {
    double  _bannerHeight;
    NSLayoutConstraint * _heightConstraint;
    UILayoutGuide * _notificationLayoutGuide;
    CRSUIApplicationSceneSettingsDiffInspector * _settingsDiffInspector;
}

@property (nonatomic) double bannerHeight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic, readonly) UILayoutGuide *notificationLayoutGuide;
@property (nonatomic, retain) CRSUIApplicationSceneSettingsDiffInspector *settingsDiffInspector;
@property (readonly) Class superclass;

+ (id)_stringForStyle:(long long)arg1;

- (void).cxx_destruct;
- (id)_mapSettings;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (void)_setMapStyle:(long long)arg1;
- (id)_settings;
- (void)_updateMapStyleTrait;
- (double)bannerHeight;
- (void)commonInit;
- (id)heightConstraint;
- (id)initWithWindowScene:(id)arg1;
- (id)notificationLayoutGuide;
- (void)notificationLayoutGuideDidChange;
- (void)setBannerHeight:(double)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setSettingsDiffInspector:(id)arg1;
- (id)settingsDiffInspector;

@end
