
@protocol SFUnifiedTabBarItemViewDelegate <NSObject>

@optional

- (void)tabBarItemView:(SFUnifiedTabBarItemView *)arg1 didFinishShowingAvailabilityLabelOfType:(long long)arg2;
- (void)tabBarItemView:(SFUnifiedTabBarItemView *)arg1 didUpdateHovering:(bool)arg2;
- (void)tabBarItemView:(SFUnifiedTabBarItemView *)arg1 extensionButtonTapped:(UIButton *)arg2 extension:(WBSWebExtensionData *)arg3;
- (void)tabBarItemView:(SFUnifiedTabBarItemView *)arg1 multipleExtensionButtonTapped:(UIButton *)arg2;
- (bool)tabBarItemViewCanBecomeFocused:(SFUnifiedTabBarItemView *)arg1;
- (void)tabBarItemViewCloseButtonTapped:(SFUnifiedTabBarItemView *)arg1;
- (void)tabBarItemViewDidRequestFocusForPencilInput:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: SFUnifiedTabBarItemView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)tabBarItemViewMediaStateMuteButtonTapped:(SFUnifiedTabBarItemView *)arg1;
- (void)tabBarItemViewMenuButtonClicked:(SFUnifiedTabBarItemView *)arg1;
- (void)tabBarItemViewMenuButtonReceivedTouchDown:(SFUnifiedTabBarItemView *)arg1;
- (void)tabBarItemViewMenuButtonTapped:(SFUnifiedTabBarItemView *)arg1;
- (void)tabBarItemViewReaderButtonTapped:(SFUnifiedTabBarItemView *)arg1;
- (void)tabBarItemViewReloadButtonTapped:(SFUnifiedTabBarItemView *)arg1;
- (void)tabBarItemViewStopButtonTapped:(SFUnifiedTabBarItemView *)arg1;
- (void)tabBarItemViewTranslationButtonTapped:(SFUnifiedTabBarItemView *)arg1;
- (void)tabBarItemViewVoiceSearchButtonTapped:(SFUnifiedTabBarItemView *)arg1;

@end
