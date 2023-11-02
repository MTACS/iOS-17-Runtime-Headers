
@protocol ICQUIRemoteUIPresenterDelegate <NSObject>

@optional

- (void)remoteUIFlowManager:(ICQUIRemoteUIPresenter *)arg1 didCompleteFlowWithSuccess:(bool)arg2 error:(NSError *)arg3;
- (void)remoteUIFlowManager:(ICQUIRemoteUIPresenter *)arg1 didDismissWithError:(NSError *)arg2;
- (void)remoteUIFlowManager:(ICQUIRemoteUIPresenter *)arg1 didLoadWithSuccess:(bool)arg2 error:(NSError *)arg3;

@end
