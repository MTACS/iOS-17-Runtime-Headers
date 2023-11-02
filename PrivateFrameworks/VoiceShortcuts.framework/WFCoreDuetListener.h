
@interface WFCoreDuetListener : NSObject <WFTriggerListener> {
    <WFDatabaseProvider> * _databaseProvider;
    SwiftVCDaemonXPCEventHandler * _eventHandler;
    WFTriggerEventQueue * _eventQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _registrations;
    <_CDUserContext> * _userContext;
}

@property (nonatomic, readonly) <WFDatabaseProvider> *databaseProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SwiftVCDaemonXPCEventHandler *eventHandler;
@property (nonatomic, retain) WFTriggerEventQueue *eventQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSMutableDictionary *registrations;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <_CDUserContext> *userContext;

- (void).cxx_destruct;
- (void)checkTriggerStateWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)checkTriggerStateWithKeyPath:(id)arg1 completion:(id /* block */)arg2;
- (id)databaseProvider;
- (id)databaseWithError:(id*)arg1;
- (id)eventHandler;
- (id)eventQueue;
- (void)fireTriggerWithIdentifier:(id)arg1 force:(bool)arg2 eventInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)handleCallbackForTriggerWithIdentifier:(id)arg1 info:(id)arg2;
- (void)handleSunriseSunsetChanged;
- (id)initWithDatabaseProvider:(id)arg1 eventQueue:(id)arg2;
- (bool)isCallbackRegisteredWithIdentifier:(id)arg1;
- (id)queue;
- (void)queue_fireTriggerWithIdentifier:(id)arg1 force:(bool)arg2 eventInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)queue_unregisterCallbackForIdentifier:(id)arg1;
- (void)registerCallback:(id)arg1 withIdentifier:(id)arg2;
- (void)registerConfiguredTrigger:(id)arg1 completion:(id /* block */)arg2;
- (void)registerSunriseSunsetCallbackIfNeeded;
- (bool)registerTrigger:(id)arg1 error:(id*)arg2;
- (id)registrations;
- (void)setEventQueue:(id)arg1;
- (void)unregisterConfiguredTriggerWithIdentifier:(id)arg1;
- (id)userContext;

@end
