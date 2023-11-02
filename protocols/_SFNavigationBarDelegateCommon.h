
@protocol _SFNavigationBarDelegateCommon <NSObject>

@required

- (void)compressedNavigationBarWasTapped:(id <_SFNavigationBarCommon>)arg1;
- (void)navigationBarReaderButtonWasTapped:(id <_SFNavigationBarCommon>)arg1;
- (void)navigationBarReloadButtonWasTapped:(id <_SFNavigationBarCommon>)arg1;
- (void)navigationBarStopLoadingButtonWasTapped:(id <_SFNavigationBarCommon>)arg1;

@optional

- (void)navigationBar:(id <_SFNavigationBarCommon>)arg1 didFinishShowingAvailabilityLabelOfType:(long long)arg2;
- (void)navigationBar:(id <_SFNavigationBarCommon>)arg1 extensionButtonTapped:(UIButton *)arg2 extension:(WBSWebExtensionData *)arg3;
- (void)navigationBar:(id <_SFNavigationBarCommon>)arg1 multipleExtensionsButtonTapped:(UIButton *)arg2;
- (void)navigationBarFormatMenuButtonBecameUnavailable:(id <_SFNavigationBarCommon>)arg1;
- (void)navigationBarFormatMenuButtonStartedInteraction:(id <_SFNavigationBarCommon>)arg1;
- (void)navigationBarFormatMenuButtonWasTapped:(id <_SFNavigationBarCommon>)arg1;
- (void)navigationBarMediaStateMuteButtonWasTapped:(id <_SFNavigationBarCommon>)arg1;
- (void)navigationBarMetricsDidChange:(id <_SFNavigationBarCommon>)arg1;
- (void)navigationBarMinimizationChanged;
- (void)navigationBarTranslateButtonWasTapped:(id <_SFNavigationBarCommon>)arg1;
- (void)navigationBarURLWasTapped:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: <_SFNavigationBarCommon> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)navigationBarVoiceSearchButtonWasTapped:(id <_SFNavigationBarCommon>)arg1;

@end
