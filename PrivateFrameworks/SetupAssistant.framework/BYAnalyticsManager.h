
@interface BYAnalyticsManager : NSObject {
    NSMutableArray * _events;
    NSMutableDictionary * _lazyEvents;
}

@property (nonatomic, retain) NSMutableArray *events;
@property (nonatomic, retain) NSMutableDictionary *lazyEvents;

- (void).cxx_destruct;
- (void)_gatherDataFromProducers;
- (void)_sendEvent:(id)arg1 payload:(id)arg2;
- (void)addEvent:(id)arg1;
- (void)addEvent:(id)arg1 withPayload:(id)arg2 persist:(bool)arg3;
- (void)addEvent:(id)arg1 withPayloadBlock:(id /* block */)arg2 persist:(bool)arg3;
- (void)commit;
- (void)commitThenUpload;
- (id)events;
- (id)init;
- (id)lazyEvents;
- (void)removeEventsUsingBlock:(id /* block */)arg1;
- (void)removeNonPersistentEvents;
- (void)reset;
- (void)setEvents:(id)arg1;
- (void)setLazyEvents:(id)arg1;
- (void)stash:(id)arg1;

@end
