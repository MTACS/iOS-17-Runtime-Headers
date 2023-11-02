
@interface NRXPCProxy : NSObject {
    NSString * _appPath;
    <NRNSXPCConnectionProtocol> * _connection;
    <NRXPCProxyDelegate> * _delegate;
    unsigned int  _entitlementBitmask;
    bool  _invalidated;
    bool  _monitorClientForSuspension;
    id  _target;
}

@property (nonatomic, readonly) NSString *appPath;
@property (nonatomic, readonly) <NRNSXPCConnectionProtocol> *connection;
@property (nonatomic, readonly) bool invalidated;
@property (nonatomic) bool monitorClientForSuspension;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) id remoteObjectProxy;
@property (nonatomic, readonly) id target;

+ (id)clientExportedInterface;
+ (id)clientRemoteObjectInterface;
+ (id)entitlements;
+ (id)machServiceName;
+ (bool)requireAnEntitlement;
+ (id)serverExportedInterface;
+ (id)serverRemoteObjectInterface;

- (void).cxx_destruct;
- (void)_invalidate;
- (id)appPath;
- (id)connection;
- (bool)hasEntitlement:(id)arg1;
- (bool)hasEntitlements;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2 xpcTarget:(id)arg3 entitlementBitmask:(unsigned int)arg4;
- (bool)invalidated;
- (bool)monitorClientForSuspension;
- (int)pid;
- (id)remoteObjectProxy;
- (void)setMonitorClientForSuspension:(bool)arg1;
- (id)target;

@end
