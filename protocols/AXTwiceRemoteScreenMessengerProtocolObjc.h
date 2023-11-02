
@protocol AXTwiceRemoteScreenMessengerProtocolObjc <NSObject>

@required

- (void)cleanup;
- (void)receiveMessage:(NSDictionary *)arg1;
- (void)reconnectToAXUIServerIfNeeded;
- (void)sendMessage:(NSDictionary *)arg1;

@end
