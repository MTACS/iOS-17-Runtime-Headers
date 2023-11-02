
@interface WFBiomeListener : NSObject <WFTriggerListener> {
    WFTriggerEventQueue * _eventQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _remoteTriggerIDToSinks;
    NSMutableDictionary * _triggerIDToSinks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WFTriggerEventQueue *eventQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSMutableDictionary *remoteTriggerIDToSinks;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *triggerIDToSinks;

- (void).cxx_destruct;
- (void)checkTriggerStateWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)checkTriggerStateWithKeyPath:(id)arg1 completion:(id /* block */)arg2;
- (id)eventQueue;
- (void)fireTriggerWithIdentifier:(id)arg1 force:(bool)arg2 eventInfo:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithEventQueue:(id)arg1;
- (id)queue;
- (void)queue_fireTriggerWithIdentifier:(id)arg1 force:(bool)arg2 eventInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)queue_handleEvent:(id)arg1 forTrigger:(id)arg2;
- (void)queue_unregisterConfiguredTriggerWithIdentifier:(id)arg1;
- (void)registerConfiguredTrigger:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteTriggerIDToSinks;
- (id)triggerIDToSinks;
- (void)unregisterConfiguredTriggerWithIdentifier:(id)arg1;

@end
