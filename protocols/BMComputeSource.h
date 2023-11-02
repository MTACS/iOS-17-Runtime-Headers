
@protocol BMComputeSource <NSObject>

@required

- (void)eventsPrunedWithStreamIdentifier:(NSString *)arg1 reason:(unsigned long long)arg2;
- (void)sendEventWithStreamIdentifier:(NSString *)arg1 timestamp:(NSNumber *)arg2 storeEvent:(BMStoreEvent *)arg3;

@end
