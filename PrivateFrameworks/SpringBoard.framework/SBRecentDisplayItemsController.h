
@interface SBRecentDisplayItemsController : NSObject <SBAppInteractionEventSourceObserving> {
    SBApplicationController * _appController;
    NSTimer * _delayAfterTransitionTimer;
    <SBRecentDisplayItemsControllerDelegate> * _delegate;
    SBHomeGestureSettings * _homeGestureSettings;
    unsigned long long  _maxDisplayItems;
    long long  _movePersonality;
    NSMutableOrderedSet * _recentDisplayItems;
    NSSet * _relevantTransitionFromSources;
    long long  _removalPersonality;
    <BSInvalidatable> * _stateCaptureInvalidatable;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBRecentDisplayItemsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSOrderedSet *recentDisplayItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addDisplayItemToFront:(id)arg1;
- (void)_addOrMoveDisplayItemToFront:(id)arg1;
- (id)_addStateCaptureHandler;
- (id)_allDisplayItemsForBundleID:(id)arg1;
- (id)_allDisplayItemsForUniqueID:(id)arg1;
- (id)_allDisplayItemsForWebClipID:(id)arg1;
- (id)_allDisplayItemsPassingTest:(id /* block */)arg1;
- (void)_allowAppToAppearWhileHidden:(id)arg1;
- (void)_applicationsBecameHidden:(id)arg1;
- (id)_associatedWebClipIdentifierForAppClipIdentifier:(id)arg1 sceneIdentifier:(id)arg2;
- (void)_clearDelayAfterTransitionTimer;
- (void)_disallowAppFromAppearingWhileHidden:(id)arg1;
- (bool)_displayItem:(id)arg1 matchesBundleID:(id)arg2;
- (id)_displayItemForLayoutElement:(id)arg1;
- (bool)_displayItemIsExecutableOnCurrentPlatform:(id)arg1;
- (bool)_displayItemRepresentsAppClip:(id)arg1;
- (id)_firstDisplayItemForBundleID:(id)arg1;
- (id)_firstDisplayItemForUniqueID:(id)arg1;
- (bool)_isDisallowedDisplayItem:(id)arg1;
- (void)_moveDisplayItemToFront:(id)arg1;
- (void)_removeDisplayItem:(id)arg1;
- (void)_setupDelayAfterTransitionTimerForActivatingElement:(id)arg1;
- (id)_webClipForIdentifier:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)eventSource:(id)arg1 applicationsBecameHidden:(id)arg2;
- (void)eventSource:(id)arg1 applicationsBecameVisible:(id)arg2;
- (void)eventSource:(id)arg1 didBeginTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;
- (void)eventSource:(id)arg1 didFinishTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;
- (void)eventSource:(id)arg1 keyboardFocusChangedToApplication:(id)arg2;
- (void)eventSource:(id)arg1 userDeletedApplications:(id)arg2;
- (void)eventSource:(id)arg1 userDeletedWebBookmark:(id)arg2;
- (void)eventSource:(id)arg1 userQuitApplicationInSwitcher:(id)arg2;
- (void)eventSource:(id)arg1 userRemovedSuggestions:(id)arg2;
- (void)eventSource:(id)arg1 userTouchedApplication:(id)arg2;
- (id)init;
- (id)initWithRemovalPersonality:(long long)arg1 movePersonality:(long long)arg2 transitionFromSources:(id)arg3 maxDisplayItems:(unsigned long long)arg4 eventSource:(id)arg5 applicationController:(id)arg6;
- (id)recentDisplayItems;
- (void)removeDisplayItem:(id)arg1;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (void)setRecentDisplayItems:(id)arg1;

@end
