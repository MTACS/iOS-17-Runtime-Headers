
@interface SBActivitySystemApertureElementObserver : NSObject <ACUISSystemApertureSceneHandleDelegate, SBActivityObserver> {
    NSMutableDictionary * _activeItemByActivityIdentifier;
    NSMutableSet * _activeWidgetActivitiesWithSceneHandles;
    long long  _activityEnvironment;
    NSMutableDictionary * _alertingAssertionsByActivityIdentifier;
    NSMutableDictionary * _contentPayloadIDsByActivityIdentifier;
    NSMutableDictionary * _elementAssertionByActivityIdentifier;
    NSMutableDictionary * _elementByActivityIdentifier;
    NSMutableSet * _ongoingActivities;
    NSMutableOrderedSet * _pendingAlerts;
    NSMutableArray * _pendingItems;
    bool  _preparingElementForPendingAlert;
    NSMutableDictionary * _prominenceStateByActivityIdentifier;
    NSMutableDictionary * _sceneHandleByActivityIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_activityAlertIsPendingForIdentifier:(id)arg1;
- (bool)_activityIsPendingForIdentifier:(id)arg1;
- (void)_addPendingItemIfNecessary:(id)arg1;
- (bool)_canPresentAlert:(id)arg1;
- (bool)_canRegisterElementForActivityItem:(id)arg1;
- (void)_cleanUpAlertPresentation:(id)arg1;
- (void)_cleanUpInvalidRegisteredElements;
- (void)_createAndActivateElementForActivityItem:(id)arg1 completion:(id /* block */)arg2;
- (void)_createAndActivateSystemApertureElementWithScene:(id)arg1 item:(id)arg2 completion:(id /* block */)arg3;
- (id)_createSceneHandle:(id)arg1;
- (id)_createSystemApertureSceneHandleWithItem:(id)arg1;
- (bool)_hasValidAlertingAssertion;
- (void)_invalidateSystemApertureElementForItem:(id)arg1 completion:(id /* block */)arg2;
- (bool)_isActivityOngoing:(id)arg1;
- (bool)_isContentReadyForAlert:(id)arg1;
- (id)_pendingItemForAlert:(id)arg1;
- (void)_prepareAndPresentActivityAlert:(id)arg1;
- (void)_prepareForAlertingActivityIfNecessary:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentAlert:(id)arg1;
- (void)_presentOrPendActivityAlert:(id)arg1;
- (void)_presentPendingAlertIfNecessary;
- (void)_presentPendingAlertIfNecessaryForActivityIdentifier:(id)arg1;
- (void)_registerSystemApertureElementForPendingActivityIfNecessary;
- (bool)_registeredElementExistsForBundleIdentifier:(id)arg1;
- (id)_registeredElementForBundleIdentifier:(id)arg1;
- (void)_removePendingItem:(id)arg1;
- (void)_removeSystemApertureSceneHandleWithItem:(id)arg1;
- (void)_sendAnalyticsEventWithPayloadBuilder:(id /* block */)arg1;
- (bool)_shouldSwapActivityItem:(id)arg1 withOtherItem:(id)arg2;
- (void)_storeSceneHandle:(id)arg1 item:(id)arg2;
- (void)_swapActivityItem:(id)arg1 withItem:(id)arg2;
- (void)_swapItemWithRegisteredItemIfNecessary:(id)arg1;
- (bool)_systemApertureElementAssertionExistsForBundleIdentifier:(id)arg1;
- (void)_unlockAndLaunchAppIfPossible:(id)arg1 withAction:(id)arg2;
- (void)_updatePendingItemWithItem:(id)arg1;
- (void)_updateSystemApertureElementProminence:(bool)arg1 item:(id)arg2;
- (void)activityDidDismiss:(id)arg1;
- (void)activityDidEnd:(id)arg1;
- (void)activityDidStart:(id)arg1;
- (void)activityDidUpdate:(id)arg1;
- (void)activityEnvironmentChanged:(long long)arg1;
- (void)activityProminenceChanged:(bool)arg1 item:(id)arg2;
- (void)activitySystemApertureSceneHandle:(id)arg1 requestsLaunchWithAction:(id)arg2;
- (void)activitySystemApertureSceneHandle:(id)arg1 updatedContentPayloadID:(id)arg2;
- (void)activityWasBlockedForItem:(id)arg1;
- (void)activityWasUnblockedForItem:(id)arg1;
- (void)dismissAlert:(id)arg1;
- (id)init;
- (void)presentAlert:(id)arg1;
- (bool)shouldHandleActivityItem:(id)arg1;

@end
