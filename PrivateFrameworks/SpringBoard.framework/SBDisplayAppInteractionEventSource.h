
@interface SBDisplayAppInteractionEventSource : NSObject <BKSTouchDeliveryObserving, FBSDisplayLayoutPublisherObserving, SBAppInteractionEventSourceProviding, SBApplicationRestrictionObserver, SBLayoutStateTransitionObserver> {
    SBFAnalyticsClient * _analyticsClient;
    SBApplicationController * _applicationController;
    SBApplicationRestrictionController * _applicationRestrictionController;
    NSString * _currentFocusedBundleID;
    <FBSDisplayLayoutPublishing> * _displayLayoutPublisher;
    SBLayoutStateTransitionCoordinator * _layoutStateTransitionCoordinator;
    NSHashTable * _observers;
    BKSTouchDeliveryObservationService * _touchDeliveryObservationService;
}

@property (nonatomic) SBFAnalyticsClient *analyticsClient;
@property (nonatomic) SBApplicationController *applicationController;
@property (nonatomic) SBApplicationRestrictionController *applicationRestrictionController;
@property (nonatomic, copy) NSString *currentFocusedBundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <FBSDisplayLayoutPublishing> *displayLayoutPublisher;
@property (readonly) unsigned long long hash;
@property (nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) Class superclass;
@property (nonatomic) BKSTouchDeliveryObservationService *touchDeliveryObservationService;

- (void).cxx_destruct;
- (id)_bundleIDsForIcons:(id)arg1;
- (void)_configureEventSourceWithAnalyticsClient:(id)arg1 applicationController:(id)arg2 applicationRestrictionController:(id)arg3 iconModel:(id)arg4 layoutStateTransitionCoordinator:(id)arg5 displayLayoutPublisher:(id)arg6 touchDeliveryObservationService:(id)arg7;
- (void)_iconVisibilityDidChange:(id)arg1;
- (id)_initWithAnalyticsClient:(id)arg1 applicationController:(id)arg2 applicationRestrictionController:(id)arg3 iconModel:(id)arg4 layoutStateTransitionCoordinator:(id)arg5 displayLayoutPublisher:(id)arg6 touchDeliveryObservationService:(id)arg7;
- (void)_installedAppsDidChange:(id)arg1;
- (void)_noteTouchForProcess:(int)arg1 context:(unsigned int)arg2;
- (void)_notifyTransition:(id)arg1 beginning:(bool)arg2;
- (void)_userQuitApplication:(id)arg1;
- (void)_userRemovedSuggestion:(id)arg1;
- (void)_webBookmarkUninstalled:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)analyticsClient;
- (id)applicationController;
- (id)applicationRestrictionController;
- (void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3;
- (id)currentFocusedBundleID;
- (void)dealloc;
- (id)displayLayoutPublisher;
- (id)layoutStateTransitionCoordinator;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (id)observers;
- (void)publisher:(id)arg1 didUpdateLayout:(id)arg2 withTransition:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)setAnalyticsClient:(id)arg1;
- (void)setApplicationController:(id)arg1;
- (void)setApplicationRestrictionController:(id)arg1;
- (void)setCurrentFocusedBundleID:(id)arg1;
- (void)setDisplayLayoutPublisher:(id)arg1;
- (void)setLayoutStateTransitionCoordinator:(id)arg1;
- (void)setTouchDeliveryObservationService:(id)arg1;
- (id)touchDeliveryObservationService;
- (void)touchDetachedForIdentifier:(unsigned int)arg1 context:(unsigned int)arg2 pid:(int)arg3;
- (void)touchUpOccuredForIdentifier:(unsigned int)arg1 detached:(bool)arg2 context:(unsigned int)arg3 pid:(int)arg4;
- (void)windowSceneDidConnect:(id)arg1;

@end
