
@protocol CSCoverSheetViewControllerObserver <NSObject>

@optional

- (void)coverSheetViewController:(CSCoverSheetViewController *)arg1 didChangeActiveBehavior:(CSBehavior *)arg2;
- (void)coverSheetViewController:(CSCoverSheetViewController *)arg1 didUpdateLayout:(FBSDisplayLayout *)arg2;
- (void)coverSheetViewController:(CSCoverSheetViewController *)arg1 didUpdateVisibleNotificationCount:(unsigned long long)arg2;
- (void)coverSheetViewControllerActivityItemsMayHaveChanged:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewControllerDidAddNewSceneHostEnvironment:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewControllerDidDismissPasscodeLockView:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewControllerDidObscureWallpaper:(CSCoverSheetViewController *)arg1 obscured:(bool)arg2;
- (void)coverSheetViewControllerDidPresentModalView:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewControllerExternalLockProviderStateDidChange:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewControllerWillPresentPosterSwitcher:(CSCoverSheetViewController *)arg1;

@end
