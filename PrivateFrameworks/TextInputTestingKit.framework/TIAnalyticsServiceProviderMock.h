
@interface TIAnalyticsServiceProviderMock : NSObject <TIAnalyticsServiceProvider> {
    NSMutableDictionary * _allEvents;
}

@property (nonatomic, readonly) NSMutableDictionary *allEvents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allEvents;
- (void)clear;
- (long long)countEvent:(id)arg1;
- (long long)countEvent:(id)arg1 filteredWithPredicate:(id)arg2;
- (void)dispatchEventWithName:(id)arg1 payload:(id)arg2;
- (id)eventsWithName:(id)arg1;
- (id)init;
- (double)sumFloatField:(id)arg1 forEvent:(id)arg2;
- (double)sumFloatField:(id)arg1 forEvent:(id)arg2 filteredWithPredicate:(id)arg3;
- (double)sumFloatField:(id)arg1 forEvents:(id)arg2;
- (long long)sumIntegerField:(id)arg1 forEvent:(id)arg2;
- (long long)sumIntegerField:(id)arg1 forEvent:(id)arg2 filteredWithPredicate:(id)arg3;
- (long long)sumIntegerField:(id)arg1 forEvents:(id)arg2;

@end
