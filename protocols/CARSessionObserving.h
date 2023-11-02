
@protocol CARSessionObserving <NSObject>

@optional

- (void)cancelledConnectionAttemptOnTransport:(unsigned long long)arg1;
- (void)session:(CARSession *)arg1 didUpdateConfiguration:(CARSessionConfiguration *)arg2;
- (void)sessionDidConnect:(CARSession *)arg1;
- (void)sessionDidDisconnect:(CARSession *)arg1;
- (void)startedConnectionAttemptOnTransport:(unsigned long long)arg1;

@end
