
@interface HMDDataStreamSetupOperation : NSObject {
    HMDHAPAccessory * _accessory;
    <HMDDataStreamSetupOperationDelegate> * _delegate;
    NSString * _logIdentifier;
    NSMutableSet * _pendingBulkSendListeners;
    NSObject<OS_dispatch_queue> * _queue;
    HMDService * _transferManagementService;
}

@property (nonatomic, readonly) HMDHAPAccessory *accessory;
@property (nonatomic) <HMDDataStreamSetupOperationDelegate> *delegate;
@property (nonatomic, readonly) NSString *logIdentifier;
@property (nonatomic, readonly) NSMutableSet *pendingBulkSendListeners;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) HMDService *transferManagementService;

+ (id)hapSetupOperationWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4 maxControllerTransportMTU:(unsigned long long)arg5 setupOperationReadRequired:(bool)arg6;
+ (id)tcpSetupOperationWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4;

- (void).cxx_destruct;
- (void)_clearPendingBulkSendListeners;
- (id)accessory;
- (void)addBulkSendListener:(id)arg1 fileType:(id)arg2;
- (void)cancelSetup;
- (void)continueStreamSetupWithResponse:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4;
- (id)logIdentifier;
- (void)movePendingBulkSendListenersToBulkSendProtocol:(id)arg1;
- (id)pendingBulkSendListeners;
- (void)postDidFailWithError:(id)arg1;
- (void)postDidSucceedWithTransport:(id)arg1 sessionEncryption:(id)arg2;
- (void)processTransportSetupResponse:(id)arg1;
- (id)queue;
- (bool)removeBulkSendListener:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startSetup;
- (id)transferManagementService;

@end
