
@interface NCNotificationStructuredListViewController : UIViewController <ATXDigestOnboardingSuggestionClientObserver, NCCreateContactNavigationViewControllerDelegate, NCDigestOnboardingNavigationControllerDelegate, NCLegibilitySettingsAdjusting, NCModalNavigationControllerDelegate, NCModeManagerObserver, NCNotificationManagementViewPresenterDelegate, NCNotificationMasterListDelegate, NCNotificationOptionsMenuSettingsDelegate, NCSupplementaryViewPrototypeRecipeDelegate, _UIAlwaysOnEnvironmentObserver> {
    bool  _backgroundBlurred;
    NCMaterialDisplayingCaptureOnlyViewController * _captureOnlyMaterialViewController;
    <NCNotificationListCoalescingControlsHandler> * _coalescingControlsHandlerInForceTouchState;
    <NCNotificationStructuredListViewControllerDelegate> * _delegate;
    bool  _deviceAuthenticated;
    NSArray * _digestOnboardingLastBundleIdentifiersSelection;
    NSArray * _digestOnboardingLastScheduledDeliveryTimesSelection;
    ATXDigestOnboardingSuggestion * _digestOnboardingSuggestion;
    ATXDigestOnboardingSuggestionClient * _digestOnboardingSuggestionClient;
    ATXDigestOnboardingSuggestionLogging * _digestOnboardingSuggestionLogging;
    NSDate * _digestOnboardingSuggestionPresentationTime;
    NCNotificationListSectionHeaderView * _headerViewInForceTouchState;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insetMargins;
    double  _itemSpacing;
    NCNotificationManagementViewPresenter * _managementViewPresenter;
    NCNotificationMasterList * _masterList;
    NCNotificationListView * _masterListView;
    NCModalNavigationController * _modalNavigationController;
    NCModeManager * _modeManager;
    <NCNotificationListComponent> * _notificationListComponentPresentingOptionsMenu;
    NCNotificationRequest * _notificationRequestRemovedWhilePresentingLongLook;
    NCNotificationViewController * _notificationViewControllerPresentingLongLook;
    NSHashTable * _observers;
    NCNotificationOptionsMenu * _optionsMenu;
    bool  _showNotificationsInAlwaysOn;
    <NCNotificationListSupplementaryViewsContaining> * _testRecipeSupplementaryViewsContainer;
    NCNotificationListTouchEaterManager * _touchEaterManager;
}

@property (nonatomic) bool backgroundBlurred;
@property (nonatomic, readonly) NSString *backgroundGroupNameBase;
@property (nonatomic, retain) NCMaterialDisplayingCaptureOnlyViewController *captureOnlyMaterialViewController;
@property (nonatomic) <NCNotificationListCoalescingControlsHandler> *coalescingControlsHandlerInForceTouchState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationStructuredListViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDeviceAuthenticated, nonatomic) bool deviceAuthenticated;
@property (nonatomic, retain) NSArray *digestOnboardingLastBundleIdentifiersSelection;
@property (nonatomic, retain) NSArray *digestOnboardingLastScheduledDeliveryTimesSelection;
@property (nonatomic, retain) ATXDigestOnboardingSuggestion *digestOnboardingSuggestion;
@property (nonatomic, retain) ATXDigestOnboardingSuggestionClient *digestOnboardingSuggestionClient;
@property (nonatomic, retain) ATXDigestOnboardingSuggestionLogging *digestOnboardingSuggestionLogging;
@property (nonatomic, retain) NSDate *digestOnboardingSuggestionPresentationTime;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } effectiveContentSize;
@property (nonatomic, readonly) bool hasVisibleContent;
@property (nonatomic, readonly) bool hasVisibleContentToReveal;
@property (nonatomic, readonly) bool hasVisibleUrgentBreakthroughContent;
@property (readonly) unsigned long long hash;
@property (nonatomic) NCNotificationListSectionHeaderView *headerViewInForceTouchState;
@property (nonatomic) UIPanGestureRecognizer *homeAffordancePanGesture;
@property (getter=isHomeAffordanceVisible, nonatomic) bool homeAffordanceVisible;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insetMargins;
@property (nonatomic, readonly) double itemSpacing;
@property (nonatomic, retain) NCNotificationManagementViewPresenter *managementViewPresenter;
@property (nonatomic, retain) NCNotificationMasterList *masterList;
@property (nonatomic, retain) NCNotificationListView *masterListView;
@property (nonatomic, retain) NCModalNavigationController *modalNavigationController;
@property (nonatomic, retain) NCModeManager *modeManager;
@property (nonatomic) <NCNotificationListComponent> *notificationListComponentPresentingOptionsMenu;
@property (nonatomic) bool notificationListExpandsVisibleRegionOnSignificantScroll;
@property (nonatomic, retain) NCNotificationRequest *notificationRequestRemovedWhilePresentingLongLook;
@property (nonatomic) NCNotificationViewController *notificationViewControllerPresentingLongLook;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NCNotificationOptionsMenu *optionsMenu;
@property (getter=isOverlayFooterContentVisible, nonatomic, readonly) bool overlayFooterContentVisible;
@property (getter=isPresentingNotificationInLongLook, nonatomic, readonly) bool presentingNotificationInLongLook;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } scrollViewVisibleContentLayoutOffset;
@property (getter=isScrollingListContent, nonatomic, readonly) bool scrollingListContent;
@property (nonatomic) bool showNotificationsInAlwaysOn;
@property (readonly) Class superclass;
@property (nonatomic, retain) <NCNotificationListSupplementaryViewsContaining> *testRecipeSupplementaryViewsContainer;
@property (nonatomic, retain) NCNotificationListTouchEaterManager *touchEaterManager;
@property (nonatomic, readonly) unsigned long long visibleNotificationCount;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_contentSizeCategoryDidChange;
- (void)_didChangeDeepestActionResponder;
- (void)_didChangeDeepestUnambiguousResponder;
- (void)_didExitAlwaysOn;
- (bool)_forwarNotificationRequestToLongLookIfNecessary:(id)arg1;
- (void)_handleDeviceUnauthenticated;
- (bool)_isPresentingDigestOnboardingSuggestion;
- (id)_logDescription;
- (id)_notificationSystemSettings;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_overlayFooterViewEdgeInsetsForOrientation:(long long)arg1;
- (void)_presentNavigationControllerAndBeginModalInteraction:(id)arg1 sender:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_presentOptionsMenuForNotificationRequest:(id)arg1 withPresentingView:(id)arg2 optionsForSection:(bool)arg3;
- (void)_requestAuthenticationAndPerformBlock:(id /* block */)arg1;
- (void)_resetSwipeInteractionWithRevealedActionsAnimated:(bool)arg1;
- (void)_scheduleDigestOnboardingSuggestion;
- (id)_sectionSettingsForSectionIdentifier:(id)arg1;
- (void)_setDigestOnboardingSuggestionVisible:(bool)arg1;
- (void)_setScheduledDeliveryEnabledForSectionIdentifier:(id)arg1;
- (void)_setSystemScheduledDeliveryEnabled:(bool)arg1 scheduledDeliveryTimes:(id)arg2;
- (bool)_shouldPresentDigestOnboardingSuggestion;
- (void)_toggleDigestOnboardingSuggestionIfNecessary;
- (void)addContentObserver:(id)arg1;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (bool)backgroundBlurred;
- (id)backgroundGroupNameBase;
- (id)backgroundGroupNameBaseForNotificationListBaseComponent:(id)arg1;
- (id)captureOnlyMaterialViewController;
- (id)coalescingControlsHandlerInForceTouchState;
- (void)collapseGroupForNotificationRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)containerViewForPreviewInteractionPresentedContentForNotificationListBaseComponent:(id)arg1;
- (void)createContactNavigationControllerDidComplete:(id)arg1;
- (id)delegate;
- (id)digestOnboardingLastBundleIdentifiersSelection;
- (id)digestOnboardingLastScheduledDeliveryTimesSelection;
- (void)digestOnboardingNavigationController:(id)arg1 didChangeDeliveryTimesActiveSelection:(id)arg2 appBundleIdentifiersActiveSelection:(id)arg3;
- (void)digestOnboardingNavigationController:(id)arg1 didScheduleDigestDeliveryTimes:(id)arg2 forAppBundleIdentifiers:(id)arg3;
- (void)digestOnboardingNavigationControllerDidDeferSetup:(id)arg1;
- (id)digestOnboardingSuggestion;
- (id)digestOnboardingSuggestionClient;
- (void)digestOnboardingSuggestionClient:(id)arg1 didSuggestOnboarding:(id)arg2;
- (id)digestOnboardingSuggestionLogging;
- (id)digestOnboardingSuggestionPresentationTime;
- (bool)dismissModalFullScreenAnimated:(bool)arg1;
- (struct CGSize { double x1; double x2; })effectiveContentSize;
- (void)expandGroupForNotificationRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)hasVisibleContent;
- (bool)hasVisibleContentToReveal;
- (bool)hasVisibleUrgentBreakthroughContent;
- (id)headerViewInForceTouchState;
- (id)hideHomeAffordanceAnimationSettingsForNotificationListComponent:(id)arg1;
- (id)homeAffordancePanGesture;
- (id)init;
- (void)insertNotificationRequest:(id)arg1;
- (id)insertSupplementaryViewsContainerAtListPosition:(unsigned long long)arg1 identifier:(id)arg2 withDescription:(id)arg3;
- (id)insertSupplementaryViewsContainerAtListPosition:(unsigned long long)arg1 withDescription:(id)arg2;
- (double)insetHorizontalMarginForNotificationListComponent:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insetMargins;
- (bool)interpretsViewAsContent:(id)arg1;
- (bool)isContentExtensionVisible:(id)arg1;
- (bool)isDeviceAuthenticated;
- (bool)isHomeAffordanceVisible;
- (bool)isOverlayFooterContentVisible;
- (bool)isPresentingNotificationInLongLook;
- (bool)isScrollingListContent;
- (double)itemSpacing;
- (id)legibilitySettingsForNotificationListBaseComponent:(id)arg1;
- (void)listViewControllerPresentedByUserAction;
- (id)managementViewPresenter;
- (id)masterList;
- (id)masterListView;
- (void)migrateNotifications;
- (id)modalNavigationController;
- (void)modalNavigationControllerDidDismiss:(id)arg1;
- (id)modeManager;
- (void)modeManager:(id)arg1 didUpdateCurrentModeConfiguration:(id)arg2 previousModeConfiguration:(id)arg3;
- (void)modifyNotificationRequest:(id)arg1;
- (id)newCaptureOnlyMaterialViewController;
- (void)notificationListBaseComponent:(id)arg1 didAddViewController:(id)arg2;
- (void)notificationListBaseComponent:(id)arg1 didBeginUserInteractionWithViewController:(id)arg2;
- (void)notificationListBaseComponent:(id)arg1 didEndUserInteractionWithViewController:(id)arg2;
- (void)notificationListBaseComponent:(id)arg1 didPresentCoalescingControlsHandler:(id)arg2 inForceTouchState:(bool)arg3;
- (void)notificationListBaseComponent:(id)arg1 didRemoveViewController:(id)arg2;
- (void)notificationListBaseComponent:(id)arg1 didTransitionActionsForSwipeInteraction:(id)arg2 revealed:(bool)arg3;
- (void)notificationListBaseComponent:(id)arg1 didTransitionCoalescingControlsHandler:(id)arg2 toClearState:(bool)arg3;
- (void)notificationListBaseComponent:(id)arg1 didUpdateViewController:(id)arg2;
- (void)notificationListBaseComponent:(id)arg1 requestsClearingPresentables:(id)arg2;
- (void)notificationListBaseComponent:(id)arg1 requestsModalPresentationOfNavigationController:(id)arg2 sender:(id)arg3 animated:(bool)arg4 completion:(id /* block */)arg5;
- (void)notificationListBaseComponent:(id)arg1 willUpdateViewController:(id)arg2;
- (void)notificationListBaseComponentDidRemoveAll:(id)arg1;
- (void)notificationListBaseComponentDidSignificantUserInteraction:(id)arg1;
- (void)notificationListBaseComponentRequestsClearingAll:(id)arg1;
- (void)notificationListComponent:(id)arg1 acceptedSummaryOnboarding:(bool)arg2;
- (id)notificationListComponent:(id)arg1 containerViewProviderForExpandedContentForViewController:(id)arg2;
- (void)notificationListComponent:(id)arg1 didPresentSectionHeaderView:(id)arg2 inForceTouchState:(bool)arg3;
- (void)notificationListComponent:(id)arg1 didRemoveNotificationRequest:(id)arg2;
- (void)notificationListComponent:(id)arg1 didTransitionSectionHeaderView:(id)arg2 toClearState:(bool)arg3;
- (bool)notificationListComponent:(id)arg1 isClockNotificationRequest:(id)arg2;
- (void)notificationListComponent:(id)arg1 isPresentingLongLookForViewController:(id)arg2;
- (id)notificationListComponent:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2;
- (id)notificationListComponent:(id)arg1 notificationRequestForUUID:(id)arg2;
- (void)notificationListComponent:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(id /* block */)arg5;
- (void)notificationListComponent:(id)arg1 requestsAuthenticationAndPerformBlock:(id /* block */)arg2;
- (void)notificationListComponent:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;
- (void)notificationListComponent:(id)arg1 requestsExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(bool)arg4 withParameters:(id)arg5 completion:(id /* block */)arg6;
- (void)notificationListComponent:(id)arg1 requestsPresentingManagementViewForNotificationRequest:(id)arg2 managementViewType:(unsigned long long)arg3 withPresentingView:(id)arg4 completion:(id /* block */)arg5;
- (void)notificationListComponent:(id)arg1 requestsPresentingOptionsMenuForNotificationRequest:(id)arg2 presentingViewProvider:(id /* block */)arg3 optionsForSection:(bool)arg4 completion:(id /* block */)arg5;
- (id)notificationListComponent:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;
- (void)notificationListComponent:(id)arg1 setAllowsDirectMessages:(bool)arg2 forSectionIdentifier:(id)arg3;
- (void)notificationListComponent:(id)arg1 setAllowsTimeSensitive:(bool)arg2 forSectionIdentifier:(id)arg3;
- (void)notificationListComponent:(id)arg1 setModeConfiguration:(id)arg2;
- (void)notificationListComponent:(id)arg1 setMuted:(bool)arg2 untilDate:(id)arg3 forSectionIdentifier:(id)arg4 threadIdentifier:(id)arg5;
- (void)notificationListComponent:(id)arg1 setNotificationSystemSettings:(id)arg2;
- (void)notificationListComponent:(id)arg1 setScheduledDelivery:(bool)arg2 forSectionIdentifier:(id)arg3;
- (bool)notificationListComponent:(id)arg1 shouldAllowInteractionsForNotificationRequest:(id)arg2;
- (void)notificationListComponent:(id)arg1 shouldFinishLongLookTransitionForNotificationRequest:(id)arg2 trigger:(long long)arg3 withCompletionBlock:(id /* block */)arg4;
- (void)notificationListComponent:(id)arg1 willDismissLongLookForCancelActionForViewController:(id)arg2;
- (void)notificationListComponentChangedContent:(id)arg1;
- (id)notificationListComponentPresentingOptionsMenu;
- (id)notificationListComponentRequestsCurrentModeConfiguration:(id)arg1;
- (bool)notificationListComponentShouldAllowLongPressGesture:(id)arg1;
- (bool)notificationListExpandsVisibleRegionOnSignificantScroll;
- (id)notificationManagementViewPresenter:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;
- (void)notificationManagementViewPresenter:(id)arg1 setAllowsCriticalAlerts:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenter:(id)arg1 setAllowsNotifications:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenter:(id)arg1 setAllowsTimeSensitive:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenter:(id)arg1 setDeliverQuietly:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenter:(id)arg1 setMuted:(bool)arg2 untilDate:(id)arg3 forNotificationRequest:(id)arg4 withSectionIdentifier:(id)arg5 threadIdentifier:(id)arg6;
- (void)notificationManagementViewPresenter:(id)arg1 setMuted:(bool)arg2 untilDate:(id)arg3 forSectionIdentifier:(id)arg4 threadIdentifier:(id)arg5;
- (void)notificationManagementViewPresenter:(id)arg1 setScheduledDelivery:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenterDidDismissManagementView:(id)arg1;
- (id)notificationManagementViewPresenterRequestsSystemSettings:(id)arg1;
- (void)notificationManagementViewPresenterWillPresentManagementView:(id)arg1;
- (void)notificationMasterList:(id)arg1 didUpdateOverlayFooterContentVisibility:(bool)arg2;
- (void)notificationMasterList:(id)arg1 requestsClearingFromIncomingSectionNotificationRequests:(id)arg2;
- (void)notificationMasterList:(id)arg1 requestsPresentingFocusActivityPickerFromView:(id)arg2;
- (void)notificationMasterList:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)notificationMasterList:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)notificationMasterList:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(struct CGPoint { double x1; double x2; })arg3 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg4;
- (bool)notificationMasterList:(id)arg1 shouldFilterNotificationRequest:(id)arg2;
- (void)notificationMasterListDidScrollToRevealNotificationHistory:(id)arg1;
- (Class)notificationMasterListNotificationViewControllerClass:(id)arg1;
- (bool)notificationMasterListShouldAllowNotificationHistoryReveal:(id)arg1;
- (void)notificationMasterListWillExpandNotificationListCount:(id)arg1;
- (void)notificationOptionsMenu:(id)arg1 addSenderToContactsForNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3;
- (void)notificationOptionsMenu:(id)arg1 requestsClearingSectionWithIdentifier:(id)arg2;
- (id)notificationOptionsMenu:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;
- (void)notificationOptionsMenu:(id)arg1 setAllowsCriticalAlerts:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationOptionsMenu:(id)arg1 setAllowsNotifications:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationOptionsMenu:(id)arg1 setAllowsTimeSensitive:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationOptionsMenu:(id)arg1 setModeConfiguration:(id)arg2;
- (void)notificationOptionsMenu:(id)arg1 setMuted:(bool)arg2 untilDate:(id)arg3 forNotificationRequest:(id)arg4 withSectionIdentifier:(id)arg5 threadIdentifier:(id)arg6;
- (void)notificationOptionsMenu:(id)arg1 setScheduledDelivery:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (id)notificationOptionsMenuRequestsCurrentModeConfiguration:(id)arg1;
- (id)notificationOptionsMenuRequestsSystemSettings:(id)arg1;
- (void)notificationOptionsMenuWillDismiss:(id)arg1;
- (id)notificationRequestRemovedWhilePresentingLongLook;
- (id)notificationRequestWithNotificationIdentifier:(id)arg1 sectionIdentifier:(id)arg2;
- (id)notificationSystemSettingsForNotificationListComponent:(id)arg1;
- (id)notificationUsageTrackingStateForNotificationListComponent:(id)arg1;
- (id)notificationViewControllerPresentingLongLook;
- (void)notificationsLoadedForSectionIdentifier:(id)arg1;
- (void)notifyContentObservers;
- (id)observers;
- (id)optionsMenu;
- (void)removeContentObserver:(id)arg1;
- (void)removeNotificationRequest:(id)arg1;
- (void)removeOverrideNotificationListDisplayStyleSettingForReason:(id)arg1;
- (void)revealNotificationHistory:(bool)arg1 animated:(bool)arg2;
- (id)scrollView;
- (struct CGPoint { double x1; double x2; })scrollViewVisibleContentLayoutOffset;
- (void)setBackgroundBlurred:(bool)arg1;
- (void)setCaptureOnlyMaterialViewController:(id)arg1;
- (void)setCoalescingControlsHandlerInForceTouchState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceAuthenticated:(bool)arg1;
- (void)setDigestOnboardingLastBundleIdentifiersSelection:(id)arg1;
- (void)setDigestOnboardingLastScheduledDeliveryTimesSelection:(id)arg1;
- (void)setDigestOnboardingSuggestion:(id)arg1;
- (void)setDigestOnboardingSuggestionClient:(id)arg1;
- (void)setDigestOnboardingSuggestionLogging:(id)arg1;
- (void)setDigestOnboardingSuggestionPresentationTime:(id)arg1;
- (void)setHeaderViewInForceTouchState:(id)arg1;
- (void)setHomeAffordancePanGesture:(id)arg1;
- (void)setHomeAffordanceVisible:(bool)arg1;
- (void)setManagementViewPresenter:(id)arg1;
- (void)setMasterList:(id)arg1;
- (void)setMasterListView:(id)arg1;
- (void)setModalNavigationController:(id)arg1;
- (void)setModeManager:(id)arg1;
- (void)setNotificationListComponentPresentingOptionsMenu:(id)arg1;
- (void)setNotificationListExpandsVisibleRegionOnSignificantScroll:(bool)arg1;
- (void)setNotificationRequestRemovedWhilePresentingLongLook:(id)arg1;
- (void)setNotificationViewControllerPresentingLongLook:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setOptionsMenu:(id)arg1;
- (void)setOverrideNotificationListDisplayStyleSetting:(unsigned long long)arg1 forReason:(id)arg2 hideNotificationCount:(bool)arg3;
- (void)setShowNotificationsInAlwaysOn:(bool)arg1;
- (void)setTestRecipeSupplementaryViewsContainer:(id)arg1;
- (void)setTouchEaterManager:(id)arg1;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationListComponent:(id)arg1;
- (bool)shouldHintDefaultActionForNotificationListBaseComponent:(id)arg1;
- (bool)showNotificationsInAlwaysOn;
- (id)testRecipeSupplementaryViewsContainer;
- (void)toggleFilteringForSectionIdentifier:(id)arg1 shouldFilter:(bool)arg2;
- (id)touchEaterManager;
- (void)traitCollectionDidChange:(id)arg1;
- (id)unhideHomeAffordanceAnimationSettingsForNotificationListComponent:(id)arg1;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
- (void)updateNotificationSystemSettings:(id)arg1 previousSystemSettings:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)visibleNotificationCount;

@end