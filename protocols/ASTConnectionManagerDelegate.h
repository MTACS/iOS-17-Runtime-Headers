
@protocol ASTConnectionManagerDelegate <NSObject>

@required

- (void)connectionManager:(id <ASTConnectionManager>)arg1 pausedSendingResultForTest:(NSNumber *)arg2 reason:(long long)arg3;
- (void)connectionManager:(id <ASTConnectionManager>)arg1 resumedSendingResultForTest:(NSNumber *)arg2;
- (void)connectionManagerRequestPaused:(id <ASTConnectionManager>)arg1;
- (void)connectionManagerRequestResumed:(id <ASTConnectionManager>)arg1;

@end
