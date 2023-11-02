
@interface UnifiedBar : SFUnifiedBar <SFUnifiedTabBarNavigationDelegate, _SFBarRegistrationObserving, _SFNavigationBarCommon> {
    <_SFBarRegistrationToken> * _barRegistrationToken;
    <_SFNavigationBarDelegateCommon> * _delegate;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } URLOutlineFrameInNavigationBarSpace;
@property (nonatomic, readonly) <_SFPopoverSourceInfo> *URLOutlinePopoverSourceInfo;
@property (readonly, copy) NSString *debugDescription;
@property <_SFNavigationBarDelegateCommon> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <_SFPopoverSourceInfo> *formatMenuButtonPopoverSourceInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *popoverPassthroughViews;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITextField *textField;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })URLOutlineFrameInNavigationBarSpace;
- (id)URLOutlinePopoverSourceInfo;
- (void)animateLinkImage:(struct CGImage { }*)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(id)arg3 toBarItem:(long long)arg4 afterImageDisappearsBlock:(id /* block */)arg5 afterDestinationLayerBouncesBlock:(id /* block */)arg6;
- (void)animateSafariIconLinkFromPoint:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (bool)canBecomeFirstResponder;
- (id)delegate;
- (void)didCompleteBarRegistrationWithToken:(id)arg1;
- (id)formatMenuButtonPopoverSourceInfo;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)metricsDidChange;
- (id)popoverPassthroughViews;
- (id)popoverSourceInfoForBarItem:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)squishedBarTapped;
- (id)textField;
- (void)unifiedTabBar:(id)arg1 didFinishShowingAvailabilityLabelOfType:(long long)arg2;
- (void)unifiedTabBar:(id)arg1 extensionButtonTapped:(id)arg2 extension:(id)arg3;
- (void)unifiedTabBar:(id)arg1 multipleExtensionButtonTapped:(id)arg2;
- (void)unifiedTabBarMediaStateMuteButtonTapped:(id)arg1;
- (void)unifiedTabBarMenuButtonClicked:(id)arg1;
- (void)unifiedTabBarMenuButtonReceivedTouchDown:(id)arg1;
- (void)unifiedTabBarMenuButtonTapped:(id)arg1;
- (void)unifiedTabBarReaderButtonTapped:(id)arg1;
- (void)unifiedTabBarReloadButtonTapped:(id)arg1;
- (void)unifiedTabBarStopButtonTapped:(id)arg1;
- (void)unifiedTabBarTranslationButtonTapped:(id)arg1;
- (void)unifiedTabBarURLTapped:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)unifiedTabBarVoiceSearchButtonTapped:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })urlOutlineFrameRelativeToView:(id)arg1;
- (id)viewForBarItem:(long long)arg1;

@end
