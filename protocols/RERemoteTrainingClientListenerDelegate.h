
@protocol RERemoteTrainingClientListenerDelegate

@required

- (void)remoteTrainingClientListenerDidConnectContext:(RETrainingContext *)arg1;
- (void)remoteTrainingClientListenerDidDisconnectContext:(RETrainingContext *)arg1;

@end
