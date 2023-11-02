
@interface MTSXPCServerProxy : HMFObject <HMFLogging, MTSXPCServerInterface> {
    NSUUID * _UUID;
    <MTSXPCConnection> * _connection;
    id /* block */  _connectionFactory;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSUUID *UUID;
@property (nonatomic, retain) <MTSXPCConnection> *connection;
@property (readonly) id /* block */ connectionFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)UUID;
- (void)checkRestrictedCharacteristicsAccessAllowedWithCompletionHandler:(id /* block */)arg1;
- (id)connection;
- (id /* block */)connectionFactory;
- (void)dealloc;
- (void)fetchDevicePairingsForSystemCommissionerPairingUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchSystemCommissionerPairingsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithConnectionFactory:(id /* block */)arg1;
- (void)invalidate;
- (id)logIdentifier;
- (void)openCommissioningWindowForSystemCommissionerPairingUUID:(id)arg1 duration:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)performDeviceSetupUsingRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)readCommissioningWindowStatusForSystemCommissionerPairingUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeAllDevicePairingsForSystemCommissionerPairingUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeDevicePairingWithUUID:(id)arg1 forSystemCommissionerPairingUUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeSystemCommissionerPairingWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setConnection:(id)arg1;
- (void)showRestrictedCharacteristicsAccessWarningAlert;

@end
