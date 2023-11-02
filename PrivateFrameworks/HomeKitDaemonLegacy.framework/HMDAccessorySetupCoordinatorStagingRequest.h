
@interface HMDAccessorySetupCoordinatorStagingRequest : NSObject {
    NSUUID * _UUID;
    id /* block */  _cancelHandler;
    id /* block */  _confirmDeviceCredentialCompletionHandler;
    NSError * _error;
    HMFMessage * _pendingCancelMessage;
    HMFMessage * _pendingRequestMessage;
    NSMutableArray * _pendingResponsePayloads;
    id /* block */  _selectThreadNetworkHandler;
    id /* block */  _selectWiFiNetworkHandler;
}

@property (readonly, copy) NSUUID *UUID;
@property (nonatomic, copy) id /* block */ cancelHandler;
@property (nonatomic, copy) id /* block */ confirmDeviceCredentialCompletionHandler;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) HMFMessage *pendingCancelMessage;
@property (nonatomic, retain) HMFMessage *pendingRequestMessage;
@property (nonatomic, retain) NSMutableArray *pendingResponsePayloads;
@property (nonatomic, copy) id /* block */ selectThreadNetworkHandler;
@property (nonatomic, copy) id /* block */ selectWiFiNetworkHandler;

- (void).cxx_destruct;
- (id)UUID;
- (id /* block */)cancelHandler;
- (id /* block */)confirmDeviceCredentialCompletionHandler;
- (id)error;
- (id)init;
- (id)pendingCancelMessage;
- (id)pendingRequestMessage;
- (id)pendingResponsePayloads;
- (id /* block */)selectThreadNetworkHandler;
- (id /* block */)selectWiFiNetworkHandler;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setConfirmDeviceCredentialCompletionHandler:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setPendingCancelMessage:(id)arg1;
- (void)setPendingRequestMessage:(id)arg1;
- (void)setPendingResponsePayloads:(id)arg1;
- (void)setSelectThreadNetworkHandler:(id /* block */)arg1;
- (void)setSelectWiFiNetworkHandler:(id /* block */)arg1;

@end
