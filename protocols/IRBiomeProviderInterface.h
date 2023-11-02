
@protocol IRBiomeProviderInterface <NSObject>

@optional

- (NSArray *)fetchLatestEventsOfEventType:(long long)arg1 numEvents:(unsigned long long)arg2;
- (void)subscribeEvent:(long long)arg1;
- (void)unsubscribeEvent:(long long)arg1;

@end
