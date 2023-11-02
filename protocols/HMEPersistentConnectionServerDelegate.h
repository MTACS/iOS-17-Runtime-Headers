
@protocol HMEPersistentConnectionServerDelegate <NSObject>

@required

- (void)sendUpdatedCachedEvents:(NSArray *)arg1 toConnection:(id <HMEPersistentConnection>)arg2;
- (void)sendUpdatedEvents:(NSArray *)arg1 toConnection:(id <HMEPersistentConnection>)arg2;
- (bool)shouldAllowEvent:(HMEEvent *)arg1 topic:(NSString *)arg2 connection:(id <HMEPersistentConnection>)arg3;

@end
