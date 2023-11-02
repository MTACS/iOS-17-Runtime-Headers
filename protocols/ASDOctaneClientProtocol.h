
@protocol ASDOctaneClientProtocol <NSObject>

@required

- (void)receiveEventOfType:(long long)arg1 eventData:(NSData *)arg2 identifier:(NSUUID *)arg3;
- (void)transactionDeleted:(unsigned long long)arg1 forBundleID:(NSString *)arg2;
- (void)transactionUpdated:(NSData *)arg1 forBundleID:(NSString *)arg2;

@end
