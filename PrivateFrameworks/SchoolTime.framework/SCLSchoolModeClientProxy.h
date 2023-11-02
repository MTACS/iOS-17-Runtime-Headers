
@interface SCLSchoolModeClientProxy : NSObject <SCLSchoolModeXPCServer> {
    NSXPCConnection * _connection;
    SCLSchoolModeCoordinator * _coordinator;
    <SCLSchoolModeClientProxyDelegate> * _delegate;
    NSString * _identifier;
    NSUUID * _pairingID;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property SCLSchoolModeCoordinator *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SCLSchoolModeClientProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSString *identifier;
@property (retain) NSUUID *pairingID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)addUnlockHistoryItem:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)applySchedule:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)connectWithPairingID:(id)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (id)connection;
- (id)coordinator;
- (id)delegate;
- (oneway void)deleteHistoryWithCompletion:(id /* block */)arg1;
- (id)description;
- (void)didUpdateScheduleSettings:(id)arg1 notify:(bool)arg2;
- (void)didUpdateState:(id)arg1 fromState:(id)arg2;
- (oneway void)dumpState;
- (oneway void)fetchRecentUnlockHistoryItemsWithCompletion:(id /* block */)arg1;
- (id)identifier;
- (id)initWithConnection:(id)arg1;
- (oneway void)noteSignificantUserInteraction;
- (id)pairingID;
- (id)remoteClient;
- (void)sendServerSettings:(id)arg1;
- (id)serverSettings;
- (oneway void)setActive:(bool)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)setCoordinator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPairingID:(id)arg1;
- (oneway void)triggerRemoteSync;
- (void)unlockHistoryDidChange;
- (bool)validateBooleanEntitlement:(id)arg1 error:(id*)arg2;
- (bool)validatePairing:(id*)arg1;

@end
