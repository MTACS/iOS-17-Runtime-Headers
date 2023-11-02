
@protocol CTConnectionPairDelegate <NSObject>

@required

- (void)connectionPairStateChanged:(long long)arg1;
- (void)receivedData:(NSData *)arg1 fromConnectionId:(long long)arg2;

@end
