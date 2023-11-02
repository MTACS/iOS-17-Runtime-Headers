
@interface DNDGlobalConfigurationService : NSObject <DNDRemoteServiceConnectionEventListener> {
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
- (id)_initWithClientIdentifier:(id)arg1;
- (bool)_queue_registerForUpdatesIfRequired;
- (void)_updateListenersOfCloudSyncPreferenceChange:(bool)arg1;
- (void)addListener:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)clientIdentifier;
- (void)didChangeFocusStatusSharingSettingForApplicationIdentifier:(id)arg1;
- (id)getAccountFeatureSupportWithError:(id*)arg1;
- (unsigned long long)getCloudSyncStateReturningError:(id*)arg1;
- (unsigned long long)getPairSyncStateReturningError:(id*)arg1;
- (id)getPhoneCallBypassSettingsReturningError:(id*)arg1;
- (bool)getPreventAutoReplyReturningError:(id*)arg1;
- (id)getStateDumpReturningError:(id*)arg1;
- (bool)isAutoReplyPrevented;
- (bool)isCloudSyncActive;
- (void)isCloudSyncActiveWithCompletionHandler:(id /* block */)arg1;
- (bool)modesCanImpactAvailability;
- (void)remoteService:(id)arg1 didReceiveUpdatedPairSyncState:(unsigned long long)arg2;
- (void)remoteService:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2;
- (void)remoteService:(id)arg1 didReceiveUpdatedPreventAutoReplySetting:(bool)arg2;
- (void)removeListener:(id)arg1;
- (bool)setCloudSyncPreferenceEnabled:(bool)arg1 error:(id*)arg2;
- (bool)setModesCanImpactAvailability:(bool)arg1 error:(id*)arg2;
- (bool)setPairSyncPreferenceEnabled:(bool)arg1 error:(id*)arg2;
- (bool)setPhoneCallBypassSettings:(id)arg1 error:(id*)arg2;
- (bool)setPreventAutoReply:(bool)arg1 error:(id*)arg2;

@end
