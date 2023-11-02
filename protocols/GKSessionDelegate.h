
@protocol GKSessionDelegate <NSObject>

@optional

- (void)session:(GKSession *)arg1 connectionWithPeerFailed:(NSString *)arg2 withError:(NSError *)arg3;
- (void)session:(GKSession *)arg1 didFailWithError:(NSError *)arg2;
- (void)session:(GKSession *)arg1 didReceiveConnectionRequestFromPeer:(NSString *)arg2;
- (void)session:(GKSession *)arg1 peer:(NSString *)arg2 didChangeState:(int)arg3;

@end
