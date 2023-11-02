
@protocol BNBannerClientContainer <_UISceneSettingsDiffAction, _UISceneBSActionResponding>

@required

- (<BNBannerClientContainerDelegate> *)delegate;
- (id)initWithScene:(UIScene *)arg1 presentable:(id <BNPresentable><BNHostedContentProviding>)arg2 context:(id <BNPresentableContext>)arg3;
- (bool)isDeferringFocus;
- (UIWindow *)keyWindowForScreen:(UIScreen *)arg1;
- (<BNPresentable><BNHostedContentProviding> *)presentable;
- (<BNPresentableContext> *)presentableContext;
- (UIScene *)scene;
- (void)setDelegate:(id <BNBannerClientContainerDelegate>)arg1;

@optional

- (bool)isAccessibilityIgnoringSmartInvertColors;

@end
