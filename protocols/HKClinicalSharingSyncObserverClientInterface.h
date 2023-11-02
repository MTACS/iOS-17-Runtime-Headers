
@protocol HKClinicalSharingSyncObserverClientInterface

@required

- (void)client_syncDidFinishWithError:(NSError *)arg1;
- (void)client_syncDidStartWithInfo:(HKClinicalSharingSyncInfo *)arg1;

@end
