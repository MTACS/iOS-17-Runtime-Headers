
@interface DNDSettingsService : NSObject <DNDRemoteServiceConnectionEventListener> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSString * _clientIdentifier;
    DNDGlobalConfigurationService * _globalConfigurationService;
    DNDModeConfigurationService * _modeConfigurationService;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registeredForUpdates;
    NSHashTable * _settingsUpdateListeners;
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
- (bool)_queue_registerForSettingsUpdatesIfRequired;
- (bool)addSettingsUpdateListener:(id)arg1 error:(id*)arg2;
- (void)addSettingsUpdateListener:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)behaviorSettingsReturningError:(id*)arg1;
- (id)clientIdentifier;
- (id)configurationForModeIdentifier:(id)arg1 error:(id*)arg2;
- (id)phoneCallBypassSettingsReturningError:(id*)arg1;
- (void)remoteService:(id)arg1 didReceiveUpdatedBehaviorSettings:(id)arg2;
- (void)remoteService:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2;
- (void)remoteService:(id)arg1 didReceiveUpdatedScheduleSettings:(id)arg2;
- (void)removeSettingsUpdateListener:(id)arg1;
- (bool)removeSettingsUpdateListener:(id)arg1 error:(id*)arg2;
- (id)scheduleSettingsReturningError:(id*)arg1;
- (bool)setBehaviorSettings:(id)arg1 error:(id*)arg2;
- (bool)setBehaviorSettings:(id)arg1 returningError:(id*)arg2;
- (bool)setConfiguration:(id)arg1 forModeIdentifier:(id)arg2 error:(id*)arg3;
- (bool)setPhoneCallBypassSettings:(id)arg1 error:(id*)arg2;
- (bool)setPhoneCallBypassSettings:(id)arg1 returningError:(id*)arg2;
- (bool)setScheduleSettings:(id)arg1 error:(id*)arg2;
- (bool)setScheduleSettings:(id)arg1 returningError:(id*)arg2;

@end
