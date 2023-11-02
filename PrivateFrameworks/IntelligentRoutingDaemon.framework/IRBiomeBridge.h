
@interface IRBiomeBridge : NSObject <IRBiomeProviderInterface> {
    IRBiomeProvider * _biomeProvider;
    NSMutableDictionary * _eventTypeToSchedulerMap;
    NSMutableDictionary * _eventTypeToSinkMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_logCompletion:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)fetchLatestEventsOfEventType:(long long)arg1 numEvents:(unsigned long long)arg2;
- (id)initWithBiomeProvider:(id)arg1 targetQueue:(id)arg2;
- (void)subscribeEvent:(long long)arg1;
- (void)unsubscribeEvent:(long long)arg1;

@end
