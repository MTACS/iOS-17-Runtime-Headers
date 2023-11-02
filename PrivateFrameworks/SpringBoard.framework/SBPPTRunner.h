
@interface SBPPTRunner : NSObject <CCUIPPTHostDelegate, NCNotificationViewControllerObserving>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_operationToPutVideoInPIP;
+ (id)_operationToRestoreVideoFromPIP;
+ (id)_operationToStashPIP;
+ (id)_operationToUnstashStashedPIP;
+ (bool)isAppLibraryTest:(id)arg1;
+ (bool)isFocusModeTest:(id)arg1;
+ (bool)isPageManagementTest:(id)arg1;
+ (id)sharedInstance;

- (void)_configureParams:(id)arg1 forScrollView:(id)arg2;
- (id)_libraryViewController;
- (id)_mainDisplayWindowScene;
- (id)_mainDisplayWindowScene;
- (id)_operationToDismissCoverSheetForTestWithName:(id)arg1;
- (id)_operationToDismissDashBoardForTestWithName:(id)arg1;
- (id)_operationToPresentCoverSheetForTestWithName:(id)arg1;
- (void)_runAppLibraryPadPresent;
- (void)_runAppLibraryTestWithName:(id)arg1 options:(id)arg2;
- (void)_runCoverSheetDismissTestWithOptions:(id)arg1;
- (void)_runCoverSheetDismissToSafariTestWithOptions:(id)arg1;
- (void)_runCoverSheetPresentOverSafariTestWithOptions:(id)arg1;
- (void)_runCoverSheetPresentTestWithOptions:(id)arg1;
- (bool)_runCoverSheetTestWithName:(id)arg1 options:(id)arg2;
- (void)_runDashBoardDismissTestWithOptions:(id)arg1;
- (bool)_runDashBoardTestWithName:(id)arg1 options:(id)arg2;
- (void)_runFloatingDockBringupTestWithOptions:(id)arg1;
- (void)_runFloatingDockDismissTestWithOptions:(id)arg1;
- (void)_runFocusModePresentTestWithName:(id)arg1 options:(id)arg2;
- (void)_runFocusModeTestWithName:(id)arg1 options:(id)arg2;
- (void)_runLibrarySearchTest;
- (void)_runNotificationBannerTransitionTestWithOptions:(id)arg1;
- (void)_runNotificationClearLongLookTransitionTestWithOptions:(id)arg1;
- (void)_runNotificationReParkLongLookTransitionTestWithOptions:(id)arg1;
- (void)_runNotificationShortToLongLookTransitionTestWithOptions:(id)arg1;
- (void)_runPIPAutoStashByEnteringSwitcherTestWithOptions:(id)arg1;
- (void)_runPIPAutoUnstashAndRestoreByExitingSwitcherBackToAppTestWithOptions:(id)arg1;
- (void)_runPIPBasicRestoreTestWithOptions:(id)arg1;
- (void)_runPIPManualStashTestWithOptions:(id)arg1;
- (void)_runPIPManualUnstashTestWithOptions:(id)arg1;
- (void)_runPageManagementPresentTestWithName:(id)arg1 options:(id)arg2;
- (void)_runPageManagementTestWithName:(id)arg1 options:(id)arg2;
- (void)_runPiPAutoStashByEnteringSwitcherTestWithOptions:(id)arg1;
- (void)_runPiPAutoUnstashAndRestoreByExitingSwitcherBackToAppTestWithOptions:(id)arg1;
- (void)_runPiPBasicRestoreTestWithOptions:(id)arg1;
- (void)_runPiPManualStashTestWithOptions:(id)arg1;
- (void)_runPiPManualUnstashTestWithOptions:(id)arg1;
- (void)_runPullToAppLibrarySearchTest;
- (void)_runScrollDeweyTest;
- (void)_runScrollWithinExpandedPodTest;
- (void)_runSiriTestWithName:(id)arg1 options:(id)arg2;
- (void)_runSwipeFromDeweyTest;
- (void)_runSwipeToDeweyTest;
- (void)_setCoverSheetPresentationManagerTransitionCallbacksForTestName:(id)arg1 operation:(id)arg2;
- (void)assistantDidAppear:(id)arg1 windowScene:(id)arg2;
- (void)assistantWillAppear:(id)arg1 windowScene:(id)arg2;
- (void)longLookDidDismissForNotificationViewController:(id)arg1;
- (void)longLookDidPresentForNotificationViewController:(id)arg1;
- (void)longLookWillDismissForNotificationViewController:(id)arg1;
- (void)longLookWillPresentForNotificationViewController:(id)arg1;
- (void)prepareForControlCenterPPTHostState:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (bool)runTestWithName:(id)arg1 options:(id)arg2;

@end
