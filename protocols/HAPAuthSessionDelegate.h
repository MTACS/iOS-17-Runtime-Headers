
@protocol HAPAuthSessionDelegate <NSObject>

@required

- (void)authSession:(HAPAuthSession *)arg1 authComplete:(NSError *)arg2;
- (void)authSession:(HAPAuthSession *)arg1 authenticateUUID:(NSUUID *)arg2 token:(NSData *)arg3;
- (void)authSession:(HAPAuthSession *)arg1 confirmUUID:(NSUUID *)arg2 token:(NSData *)arg3;
- (void)authSession:(HAPAuthSession *)arg1 sendAuthExchangeData:(NSData *)arg2;
- (void)authSession:(HAPAuthSession *)arg1 validateUUID:(NSUUID *)arg2 token:(NSData *)arg3;

@end
