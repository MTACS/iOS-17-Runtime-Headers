
@interface SPBeaconManagerSimpleBeaconUpdateInterface : NSObject <SPSimpleBeaconUpdateClientXPCProtocol> {
    id /* block */  _collectionDifferenceBlock;
    SPSimpleBeaconContext * _context;
    <SPBeaconManagerXPCProtocol> * _proxy;
    bool  _reconnectionUpdate;
    NSObject<OS_dispatch_queue> * _serialQueue;
    FMXPCSession * _session;
    NSArray * _simpleBeacons;
}

@property (nonatomic, copy) id /* block */ collectionDifferenceBlock;
@property (nonatomic, retain) SPSimpleBeaconContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SPBeaconManagerXPCProtocol> *proxy;
@property (nonatomic) bool reconnectionUpdate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, retain) FMXPCSession *session;
@property (nonatomic, copy) NSArray *simpleBeacons;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)remoteInterface;

- (void).cxx_destruct;
- (void)_processRemovals:(id)arg1;
- (id /* block */)collectionDifferenceBlock;
- (id)context;
- (void)dealloc;
- (void)handleReconnection;
- (id)init;
- (void)interruptionHandler:(id)arg1;
- (void)invalidationHandler:(id)arg1;
- (id)proxy;
- (void)receivedSimpleBeaconRemovals:(id)arg1;
- (void)receivedSimpleBeaconUpdates:(id)arg1;
- (bool)reconnectionUpdate;
- (void)removeObservers;
- (id)serialQueue;
- (id)session;
- (void)setCollectionDifferenceBlock:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (void)setProxy:(id)arg1;
- (void)setReconnectionUpdate:(bool)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSimpleBeaconDifferenceBlock:(id /* block */)arg1;
- (void)setSimpleBeacons:(id)arg1;
- (id)simpleBeacons;
- (void)startUpdatingSimpleBeaconsWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)stopUpdatingSimpleBeaconsWithCompletion:(id /* block */)arg1;

@end
