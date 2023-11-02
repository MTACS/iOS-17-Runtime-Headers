
@protocol HMEPersistentConnectionServerDataSource <NSObject>

@required

- (unsigned long long)debounceTimeForConnection:(id <HMEPersistentConnection>)arg1;
- (NSArray *)server:(HMEPersistentConnectionServer *)arg1 expandedTopicsForTopics:(NSArray *)arg2;
- (NSSet *)server:(HMEPersistentConnectionServer *)arg1 upstreamTopicsForTopic:(NSString *)arg2;

@end
