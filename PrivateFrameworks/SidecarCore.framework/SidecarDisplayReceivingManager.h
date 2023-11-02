
@interface SidecarDisplayReceivingManager : NSObject

- (void)disconnectFromDeviceWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSendingDeviceSessionStatesWithCompletion:(id /* block */)arg1;
- (void)ignoreDetectionForAnchorIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)requestConnectionFromDeviceWithIdentifier:(id)arg1 completion:(id /* block */)arg2;

@end
