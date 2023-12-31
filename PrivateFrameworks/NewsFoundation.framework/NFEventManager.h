
@interface NFEventManager : NSObject {
    NSMutableSet * _events;
    NSMutableDictionary * _triggers;
}

@property (nonatomic, readonly) NSMutableSet *events;
@property (nonatomic, readonly) NSMutableDictionary *triggers;

- (void).cxx_destruct;
- (void)attemptTriggersForCurrentEvent:(id)arg1;
- (id)events;
- (void)fireEvent:(id)arg1;
- (void)handleAlwaysTrigger:(id)arg1 event:(id)arg2;
- (void)handleOnceTrigger:(id)arg1 event:(id)arg2;
- (id)init;
- (void)triggerAlwaysWhenAllEventsHaveOccurred:(id)arg1 block:(id /* block */)arg2;
- (void)triggerOnAnyEvent:(id)arg1 block:(id /* block */)arg2;
- (void)triggerOnEvent:(id)arg1 block:(id /* block */)arg2;
- (void)triggerOnceWhenAllEventsHaveOccurred:(id)arg1 block:(id /* block */)arg2;
- (void)triggerOnceWhenAnyEventHasOccurred:(id)arg1 block:(id /* block */)arg2;
- (id)triggers;

@end
