
@interface DNDSUserAvailabilityCoordinator : NSObject {
    bool  _active;
    <DNDSModeConfigurationProviding> * _configurationProvider;
    NSObject<OS_dispatch_queue> * _extensionLaunchQueue;
    NSObject<OS_dispatch_queue> * _queue;
    <DNDSStateProviding> * _stateProvider;
    SKStatusPublishingService * _statusService;
    <DNDSUserAvailabilityTCCProviding> * _tccProvider;
}

- (void).cxx_destruct;
- (id)_entitlementRecordForApplicationRecord:(id)arg1;
- (bool)_isLocalUserAvailableForAppId:(id)arg1 modeIdentifier:(id)arg2 withError:(out id*)arg3;
- (bool)_isLocalUserAvailableForMessagesWithModeIdentifier:(id)arg1 withError:(out id*)arg2;
- (bool)_isTCCUserAvailabilityGrantedForMessages;
- (void)_publishStatusKitAvailability:(bool)arg1 activityIdentifier:(id)arg2 local:(bool)arg3 scheduled:(bool)arg4 date:(id)arg5 forced:(bool)arg6 completion:(id /* block */)arg7;
- (void)_publishStatusKitCurrentAvailabilityForced:(bool)arg1 override:(long long)arg2 completionHandler:(id /* block */)arg3;
- (bool)_queue_didAppAvailabilityChangeForApplicationIdentifier:(id)arg1 fromConfiguration:(id)arg2 toConfiguration:(id)arg3;
- (void)_queue_notifyIntentExtensionsOfUserAvailability:(id)arg1 applicationIdentifiers:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_queue_notifyIntentExtensionsOfUserAvailability:(id)arg1 availabilityOverride:(long long)arg2 applicationIdentifiers:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_queue_updateAvailabilityKit:(id)arg1 fromConfiguration:(id)arg2 toConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)allowedModesForContactHandle:(id)arg1 withError:(out id*)arg2;
- (void)coordinateUserAvailability:(id)arg1 fromConfiguration:(id)arg2 toConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)coordinateUserAvailabilityUpdateForApplicationIdentifier:(id)arg1 forced:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)exceptionalModesForContactHandle:(id)arg1 withError:(out id*)arg2;
- (id)initWithConfigurationProvider:(id)arg1 stateProvider:(id)arg2;
- (id)initWithConfigurationProvider:(id)arg1 stateProvider:(id)arg2 userAvailabilityTCCProvider:(id)arg3;
- (bool)isLocalUserAvailableForApplicationIdentifier:(id)arg1 withError:(out id*)arg2;
- (bool)isTCCUserAvailabilityGrantedForBundleId:(id)arg1;
- (id)publishStatusKitAvailabilityReturningError:(out id*)arg1;
- (void)resume;
- (void)resumeUpdatingInvitationsForContacts:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendStatusKitInvitationsForContacts:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendStatusKitInvitationsForContacts:(id)arg1 forceAvailabilityPublish:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)silencedModesForContactHandle:(id)arg1 withError:(out id*)arg2;
- (void)suspend;
- (void)suspendWithOverrideSetting:(long long)arg1 completionHandler:(id /* block */)arg2;
- (bool)userAvailabilityInActiveModeForContactHandle:(id)arg1 withError:(out id*)arg2;

@end
