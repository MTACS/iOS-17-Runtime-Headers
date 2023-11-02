
@interface DNDModeConfigurationService : NSObject <DNDRemoteServiceConnectionEventListener> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSString * _clientIdentifier;
    NSHashTable * _listeners;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registeredForUpdates;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_createDefaultModeConfigurationForIdentifier:(id)arg1 withRequestDetails:(id)arg2 error:(id*)arg3;
- (id)_createEmptyModeConfigurationForMode:(id)arg1 withRequestDetails:(id)arg2 error:(id*)arg3;
- (unsigned long long)_defaultConfigurationTypeForModeSemanticType:(long long)arg1;
- (id)_initWithClientIdentifier:(id)arg1;
- (bool)_queue_registerForUpdatesIfRequired;
- (void)addListener:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)allModesReturningError:(id*)arg1;
- (id)allowedModesForContactHandle:(id)arg1 error:(id*)arg2;
- (id)availableModesReturningError:(id*)arg1;
- (bool)canRemoveModeConfigurationForModeIdentifier:(id)arg1;
- (bool)clearAppActionWithIdentifier:(id)arg1 forApplicationIdentifier:(id)arg2 modeIdentifier:(id)arg3 error:(id*)arg4;
- (bool)clearAppConfigurationActionWithIdentifier:(id)arg1 forApplicationIdentifier:(id)arg2 modeIdentifier:(id)arg3 error:(id*)arg4;
- (bool)clearSystemActionWithIdentifier:(id)arg1 forModeIdentifier:(id)arg2 error:(id*)arg3;
- (bool)clearSystemConfigurationActionWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 error:(id*)arg3;
- (id)clientIdentifier;
- (id)createDefaultDrivingModeConfigurationWithError:(id*)arg1;
- (id)createDefaultSleepingModeConfigurationWithError:(id*)arg1;
- (id)createDefaultWorkoutModeConfigurationWithError:(id*)arg1;
- (id)createEmptyModeConfigurationForMode:(id)arg1 error:(id*)arg2;
- (id)createModeConfigurationUsingTemplateForModeIdentifier:(id)arg1 error:(id*)arg2;
- (id)createModeConfigurationUsingTemplateForModeSemanticType:(long long)arg1 error:(id*)arg2;
- (id)getAppActionsForModeIdentifier:(id)arg1 error:(id*)arg2;
- (id)getAppConfigurationActionsForModeIdentifier:(id)arg1 error:(id*)arg2;
- (id)getAppConfigurationPredicateForActionIdentifier:(id)arg1 forApplicationIdentifier:(id)arg2 modeIdentifier:(id)arg3 error:(id*)arg4;
- (id)getAppConfigurationTargetContentIdentifierPrefixesForCurrentModeReturningError:(id*)arg1;
- (id)getAppConfigurationTargetContentIdentifierPrefixesForModeIdentifier:(id)arg1 error:(id*)arg2;
- (bool)getSyncAvailableReturningError:(id*)arg1;
- (bool)getSyncEnabledReturningError:(id*)arg1;
- (bool)getSyncPreferenceEnabledReturningError:(id*)arg1;
- (id)getSystemActionsForModeIdentifier:(id)arg1 error:(id*)arg2;
- (id)getSystemConfigurationActionsForModeIdentifier:(id)arg1 error:(id*)arg2;
- (bool)hasActivelyConfiguredModes:(bool*)arg1 error:(id*)arg2;
- (bool)hasActivelyConfiguredModesReturningError:(id*)arg1;
- (bool)isLocalUserAvailableForContactInActiveMode:(id)arg1 error:(id*)arg2;
- (id)modeConfigurationForModeIdentifier:(id)arg1 error:(id*)arg2;
- (id)modeConfigurationsReturningError:(id*)arg1;
- (id)publishCurrentStatusKitAvailabilityReturningError:(id*)arg1;
- (void)remoteService:(id)arg1 didReceiveAppConfigurationContextUpdateForModeIdentifier:(id)arg2;
- (void)remoteService:(id)arg1 didReceiveUpdatedAvailableModeIdentifiers:(id)arg2;
- (void)removeListener:(id)arg1;
- (bool)removeModeConfigurationForModeIdentifier:(id)arg1 deletePlaceholder:(bool)arg2 error:(id*)arg3;
- (bool)removeModeConfigurationForModeIdentifier:(id)arg1 error:(id*)arg2;
- (bool)setAppAction:(id)arg1 forApplicationIdentifier:(id)arg2 modeIdentifier:(id)arg3 error:(id*)arg4;
- (bool)setAppConfigurationAction:(id)arg1 forApplicationIdentifier:(id)arg2 modeIdentifier:(id)arg3 error:(id*)arg4;
- (bool)setAppConfigurationPredicate:(id)arg1 forActionIdentifier:(id)arg2 forApplicationIdentifier:(id)arg3 modeIdentifier:(id)arg4 error:(id*)arg5;
- (bool)setAppConfigurationTargetContentIdentifierPrefix:(id)arg1 forActionIdentifier:(id)arg2 forApplicationIdentifier:(id)arg3 modeIdentifier:(id)arg4 error:(id*)arg5;
- (bool)setModeConfiguration:(id)arg1 error:(id*)arg2;
- (bool)setSyncPreferenceEnabled:(bool)arg1 error:(id*)arg2;
- (bool)setSystemAction:(id)arg1 forModeIdentifier:(id)arg2 error:(id*)arg3;
- (bool)setSystemConfigurationAction:(id)arg1 modeIdentifier:(id)arg2 error:(id*)arg3;
- (id)silencedModesForContactHandle:(id)arg1 error:(id*)arg2;
- (bool)syncModeConfigurationsReturningError:(id*)arg1;

@end
