
@protocol SMFrameworkProtocol <NSObject>

@required

- (void)onInitiatorSafetyCacheChangeForSessionID:(NSUUID *)arg1 phoneCache:(SMCache *)arg2 watchCache:(SMCache *)arg3 cacheExpiryDate:(NSDate *)arg4 cacheReleaseDate:(NSDate *)arg5;
- (void)onReceiverSafetyCacheChangeForSessionID:(NSUUID *)arg1 phoneCache:(SMCache *)arg2 watchCache:(SMCache *)arg3;
- (void)onReceiverSessionStatusChangeForSessionID:(NSUUID *)arg1 sessionStatus:(SMReceiverSessionStatus *)arg2;
- (void)onSessionStateChanged:(SMSessionManagerState *)arg1 forActiveDevice:(bool)arg2 withError:(NSError *)arg3;

@end
