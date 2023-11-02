
@protocol BMComputeSourceServer <NSObject>

@required

- (void)eventsPrunedWithStreamIdentifier:(NSString *)arg1 reason:(unsigned long long)arg2;
- (void)sendEventWithStreamIdentifier:(NSString *)arg1 timestamp:(NSNumber *)arg2 signpostID:(unsigned long long)arg3 eventData:(NSData *)arg4;

@end
