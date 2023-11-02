
@interface ACCBLEPairingProviderInternal : NSObject {
    int  _accDetectToken;
    NSMutableDictionary * _accessories;
    NSMutableDictionary * _delegateList;
    NSLock * _delegateListLock;
    int  _lastScorpiusDetectType;
    NSString * _providerUID;
    <ACCBLEPairingXPCServerProtocol> * _remoteObject;
    NSXPCConnection * _serverConnection;
}

@property (nonatomic) int accDetectToken;
@property (nonatomic, retain) NSMutableDictionary *accessories;
@property (nonatomic, retain) NSMutableDictionary *delegateList;
@property (nonatomic, retain) NSLock *delegateListLock;
@property (nonatomic) int lastScorpiusDetectType;
@property (nonatomic, retain) NSString *providerUID;
@property (nonatomic, retain) <ACCBLEPairingXPCServerProtocol> *remoteObject;
@property (nonatomic, retain) NSXPCConnection *serverConnection;

+ (id)SharedInstance;

- (void).cxx_destruct;
- (int)accDetectToken;
- (id)accessories;
- (void)accessoryBLEPairingAttached:(id)arg1 blePairingUUID:(id)arg2 accInfoDict:(id)arg3 supportedPairTypes:(id)arg4;
- (void)accessoryBLEPairingDataUpdate:(id)arg1 blePairingUUID:(id)arg2 pairType:(unsigned char)arg3 pairData:(id)arg4;
- (void)accessoryBLEPairingDetachAll;
- (void)accessoryBLEPairingDetached:(id)arg1 blePairingUUID:(id)arg2;
- (void)accessoryBLEPairingFinished:(id)arg1 blePairingUUID:(id)arg2;
- (void)accessoryBLEPairingInfoUpdate:(id)arg1 blePairingUUID:(id)arg2 pairType:(unsigned char)arg3 pairInfoList:(id)arg4;
- (void)accessoryBLEPairingStateUpdate:(id)arg1 blePairingUUID:(id)arg2 validMask:(unsigned int)arg3 btRadioOn:(bool)arg4 pairingState:(int)arg5 pairingModeOn:(bool)arg6;
- (void)connectToServer;
- (void)dealloc;
- (id)delegateList;
- (id)delegateListLock;
- (void)devicePairingData:(id)arg1 blePairingUUID:(id)arg2 pairType:(int)arg3 pairData:(id)arg4;
- (void)deviceStateUpdate:(id)arg1 blePairingUUID:(id)arg2 bRadioOn:(bool)arg3 pairState:(int)arg4 bPairModeOn:(bool)arg5;
- (void)deviceUpdatePairingInfo:(id)arg1 blePairingUUID:(id)arg2 pairType:(int)arg3 pairInfo:(id)arg4;
- (int)getAccDetectType:(int)arg1;
- (id)initSharedInstance;
- (int)lastScorpiusDetectType;
- (id)providerUID;
- (void)registerDelegate:(id)arg1 provider:(id)arg2 forUUID:(id)arg3;
- (id)remoteObject;
- (id)serverConnection;
- (void)setAccDetectToken:(int)arg1;
- (void)setAccessories:(id)arg1;
- (void)setDelegateList:(id)arg1;
- (void)setDelegateListLock:(id)arg1;
- (void)setLastScorpiusDetectType:(int)arg1;
- (void)setProviderUID:(id)arg1;
- (void)setRemoteObject:(id)arg1;
- (void)setServerConnection:(id)arg1;
- (void)startBLEUpdates:(id)arg1 blePairingUUID:(id)arg2 pairType:(int)arg3 bRadioUpdatesOn:(bool)arg4 bPairInfoUpdatesOn:(bool)arg5;
- (void)stopBLEUpdates:(id)arg1 blePairingUUID:(id)arg2;
- (void)unregisterDelegateForUUID:(id)arg1;

@end
