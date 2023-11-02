
@interface HAP2AccessoryServerPairingDriverWorkItem : HAP2LoggingObject <HAP2AccessoryServerPairingDriverWorkItem> {
    HAP2SerializedOperationQueue * _operationQueue;
    HMFActivity * _pairingActivity;
    <HAP2AccessoryServerPairingDriverWorkItemInfo> * _pairingDriver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HAP2SerializedOperationQueue *operationQueue;
@property (nonatomic, readonly) HMFActivity *pairingActivity;
@property (nonatomic, readonly) <HAP2AccessoryServerPairingDriverWorkItemInfo> *pairingDriver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelWithError:(id)arg1;
- (id)description;
- (void)finishWithError:(id)arg1;
- (id)maybePairingDriver;
- (id)operationQueue;
- (id)pairingActivity;
- (id)pairingDriver;
- (void)runForPairingDriver:(id)arg1;
- (void)startWithPairingDriver:(id)arg1;

@end
