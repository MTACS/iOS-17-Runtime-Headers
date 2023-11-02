
@protocol SFUnifiedTabBarNavigationDelegate <NSObject>

@optional

- (void)unifiedTabBar:(SFUnifiedTabBar *)arg1 didFinishShowingAvailabilityLabelOfType:(long long)arg2;
- (void)unifiedTabBar:(SFUnifiedTabBar *)arg1 extensionButtonTapped:(UIButton *)arg2 extension:(WBSWebExtensionData *)arg3;
- (void)unifiedTabBar:(SFUnifiedTabBar *)arg1 multipleExtensionButtonTapped:(UIButton *)arg2;
- (void)unifiedTabBarMediaStateMuteButtonTapped:(SFUnifiedTabBar *)arg1;
- (void)unifiedTabBarMenuButtonClicked:(SFUnifiedTabBar *)arg1;
- (void)unifiedTabBarMenuButtonReceivedTouchDown:(SFUnifiedTabBar *)arg1;
- (void)unifiedTabBarMenuButtonTapped:(SFUnifiedTabBar *)arg1;
- (void)unifiedTabBarReaderButtonTapped:(SFUnifiedTabBar *)arg1;
- (void)unifiedTabBarReloadButtonTapped:(SFUnifiedTabBar *)arg1;
- (void)unifiedTabBarStopButtonTapped:(SFUnifiedTabBar *)arg1;
- (void)unifiedTabBarTranslationButtonTapped:(SFUnifiedTabBar *)arg1;
- (void)unifiedTabBarURLTapped:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: SFUnifiedTabBar *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)unifiedTabBarVoiceSearchButtonTapped:(SFUnifiedTabBar *)arg1;

@end
