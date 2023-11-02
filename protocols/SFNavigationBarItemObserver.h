
@protocol SFNavigationBarItemObserver <NSObject>

@optional

- (void)navigationBarItemDidUpdateCustomPlaceholderText:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateExtensionButtonConfiguration:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateFormatButtonSelected:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateLockdownModeAnnotation:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateMediaStateIcon:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateNeedsExtensionBadge:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateOverrideBarStyleForSecurityWarning:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateSecurityAnnotation:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateShowsExtensionsAvailability:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateShowsLockIcon:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateShowsPageFormatButton:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateShowsReaderButton:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateShowsSearchIndicator:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateShowsSiriReaderPlayingIcon:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateShowsStopReloadButtons:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateShowsTranslationButton:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateShowsTranslationIcon:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateShowsVoiceSearchButton:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateStopReloadButtonShowsStop:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateText:(SFNavigationBarItem *)arg1;

@end
