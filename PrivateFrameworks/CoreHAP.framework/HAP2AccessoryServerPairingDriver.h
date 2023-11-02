
@interface HAP2AccessoryServerPairingDriver : HAP2LoggingObject <HAP2AccessoryServerPairingDriver, HAP2AccessoryServerPairingDriverWorkItemInfo, HAP2Cancelable> {
    <HAP2UnpairedAccessoryServer> * _accessoryServer;
    unsigned long long  _authMethod;
    NSError * _cancelError;
    unsigned long long  _currentWorkItemIndex;
    <HAP2AccessoryServerPairingDriverDelegate> * _delegate;
    <HAP2AccessoryServerEncoding> * _encoding;
    unsigned long long  _featureFlags;
    HAP2SerializedOperationQueue * _operationQueue;
    HMFActivity * _pairingActivity;
    HAPPairSetupSession * _pairingSession;
    HAP2PropertyLock * _propertyLock;
    <HAP2AccessoryServerSecureTransportFactory> * _secureTransportFactory;
    <HAP2AccessoryServerTransport> * _transport;
    NSArray * _workItems;
}

@property (nonatomic) <HAP2UnpairedAccessoryServer> *accessoryServer;
@property (nonatomic, readonly) unsigned long long authMethod;
@property (nonatomic, retain) NSError *cancelError;
@property (nonatomic) unsigned long long currentWorkItemIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HAP2AccessoryServerPairingDriverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <HAP2AccessoryServerEncoding> *encoding;
@property (nonatomic, readonly) unsigned long long featureFlags;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAP2SerializedOperationQueue *operationQueue;
@property (nonatomic) HMFActivity *pairingActivity;
@property (nonatomic, retain) HAPPairSetupSession *pairingSession;
@property (nonatomic, readonly) HAP2PropertyLock *propertyLock;
@property (nonatomic, readonly) <HAP2AccessoryServerSecureTransportFactory> *secureTransportFactory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HAP2AccessoryServerTransport> *transport;
@property (nonatomic, readonly) NSArray *workItems;

+ (id)_generateWorkItemsForAuthMethod:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_cancelWithError:(id)arg1;
- (void)_pairingFinishedWithError:(id)arg1;
- (id)accessoryServer;
- (unsigned long long)authMethod;
- (id)cancelError;
- (void)cancelWithError:(id)arg1;
- (id)currentWorkItem;
- (unsigned long long)currentWorkItemIndex;
- (id)delegate;
- (id)description;
- (id)encoding;
- (unsigned long long)featureFlags;
- (id)initWithTransport:(id)arg1 secureTransportFactory:(id)arg2 encoding:(id)arg3 featureFlags:(unsigned long long)arg4;
- (id)initWithTransport:(id)arg1 secureTransportFactory:(id)arg2 encoding:(id)arg3 featureFlags:(unsigned long long)arg4 workItems:(id)arg5;
- (id)moveToNextWorkItem;
- (id)operationQueue;
- (id)pairAccessory:(id)arg1 delegate:(id)arg2;
- (id)pairingActivity;
- (id)pairingSession;
- (id)propertyLock;
- (id)secureTransportFactory;
- (void)setAccessoryServer:(id)arg1;
- (void)setCancelError:(id)arg1;
- (void)setCurrentWorkItemIndex:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setPairingActivity:(id)arg1;
- (void)setPairingSession:(id)arg1;
- (id)transport;
- (void)workItem:(id)arg1 finishedWithError:(id)arg2;
- (id)workItems;

@end
