
@interface BYFlowSkipController : NSObject {
    <BYCapabilities> * _capabilities;
    FLFollowUpController * _followUpController_doNotAccessDirectly;
    <NSObject> * _wfNetworkChangeObserver;
}

@property (nonatomic, retain) <BYCapabilities> *capabilities;

+ (id)_actionForFlowSkipIdentifiers:(id)arg1;
+ (id)_actionIdentifierForFlowSkipIdentifier:(id)arg1;
+ (void)_clearShouldObserveChangeFromNetworkSSID;
+ (id)_flowSkipIdentifierFromActionIdentifier:(id)arg1;
+ (id)_localizedStringListingFlowSkipIdentifiers:(id)arg1;
+ (void)_setShouldObserveChangeFromNetworkSSID:(id)arg1;
+ (bool)_shouldObserveChangeFromNetworkSSID:(id*)arg1;
+ (id)_supportedIdentifiers;
+ (id)flowSkipIdentifiersFromFollowUpAction:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_followUpController;
- (bool)_isBasicFunctionalityEnabled;
- (bool)_isPasscodeSet;
- (id)_pendingFollowUpItem;
- (void)_persistInitialNetworkSSID;
- (void)_postFollowUpItemForFlowSkipIdentifiers:(id)arg1 previousFollowUpItem:(id)arg2 forceNotification:(bool)arg3;
- (void)_registerWiFiObserverActivityWithNeedsActivity:(bool)arg1 handlerQueue:(id)arg2;
- (void)_repostExistingFollowUpItemForcingNotification:(id)arg1;
- (long long)_timeIntervalForFrequentNotifications;
- (long long)_timeIntervalForNotifications;
- (long long)_timeIntervalForWifiObserver;
- (long long)_timeoutForWifiObserver;
- (void)cancelPendingFlows;
- (id)capabilities;
- (void)didCompleteFlow:(id)arg1;
- (void)didSkipFlow:(id)arg1;
- (id)getFlowSkipIdentifiers;
- (id)init;
- (void)observeFinishSetupTriggers;
- (void)passcodeDidChange;
- (void)registerActivities;
- (void)revisePendingFollowUpsForcingRepost:(bool)arg1;
- (void)setBasicFunctionalityEnabled:(bool)arg1;
- (void)setCapabilities:(id)arg1;
- (void)unregisterActivities;

@end
