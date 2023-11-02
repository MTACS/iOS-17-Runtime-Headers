
@interface HAP2AccessoryServerController : HAP2LoggingObject <HAP2AccessoryServerController, HAP2AccessoryServerControllerPrivate, HAP2AccessoryServerSecureTransportDelegate> {
    HAP2AccessoryServerAccessoryCache * _accessoryCache;
    <HAP2AccessoryServerAccessoryFactory> * _accessoryFactory;
    <HAP2AccessoryServerPrivate> * _accessoryServer;
    bool  _attemptedReReadAttributeDatabase;
    unsigned long long  _currentAccessoryIPTryCount;
    <HAP2AccessoryServerEncoding> * _encoding;
    bool  _flagNotificationEnableConsistencyWarning;
    HAP2SerializedOperationQueue * _operationQueue;
    HAP2PropertyLock * _propertyLock;
    bool  _readingAttributeDatabase;
    unsigned long long  _sessionNumber;
    unsigned long long  _sessionStartTime;
    <HAP2AccessoryServerSecureTransport> * _transport;
}

@property (nonatomic) <HAP2AccessoryServerPrivate> *accessoryServer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <HAP2AccessoryServerEncoding> *encoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HAP2AccessoryServerSecureTransport> *transport;

+ (id)controllerIdentifier;
+ (id)new;

- (void).cxx_destruct;
- (id)accessoryServer;
- (id)addPairing:(id)arg1 completion:(id /* block */)arg2;
- (void)closeSession;
- (void)dealloc;
- (id)description;
- (id)disableNotificationsForCharacteristics:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)enableNotificationsForCharacteristics:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)encoding;
- (void)handleUpdatedMetadataWithOldMetadata:(id)arg1;
- (id)init;
- (id)initWithEncoding:(id)arg1 secureTransport:(id)arg2 operationQueue:(id)arg3;
- (id)initWithEncoding:(id)arg1 secureTransport:(id)arg2 operationQueue:(id)arg3 accessoryFactory:(id)arg4;
- (id)listPairingsWithCompletion:(id /* block */)arg1;
- (bool)mergeWithNewController:(id)arg1;
- (id)readAttributeDatabaseWithCompletion:(id /* block */)arg1;
- (id)readValuesForCharacteristics:(id)arg1 timeout:(double)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)removePairing:(id)arg1 cleanupLocalData:(bool)arg2 completion:(id /* block */)arg3;
- (void)secureTransport:(id)arg1 didChangeState:(unsigned long long)arg2 error:(id)arg3;
- (void)secureTransport:(id)arg1 didReceiveEvent:(id)arg2;
- (void)secureTransport:(id)arg1 needsLocalPairingIdentityWithCompletion:(id /* block */)arg2;
- (void)secureTransport:(id)arg1 needsRemotePairingIdentityForDeviceID:(id)arg2 completion:(id /* block */)arg3;
- (void)setAccessoryServer:(id)arg1;
- (id)transport;
- (id)unpairedIdentifyWithCompletion:(id /* block */)arg1;
- (void)updateMaxRequestTimeout:(double)arg1;
- (id)writeValuesForCharacteristics:(id)arg1 timeout:(double)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4;

@end
