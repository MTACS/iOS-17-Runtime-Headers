
@interface AXUIServiceEntitlementChecker : NSObject {
    NSMutableArray * _clientConnections;
    NSMutableArray * _entitlementsCaches;
    Class  _serviceClass;
}

@property (nonatomic, retain) NSMutableArray *clientConnections;
@property (nonatomic, retain) NSMutableArray *entitlementsCaches;
@property (nonatomic) Class serviceClass;

- (void).cxx_destruct;
- (bool)_clientProcessWithAuditToken:(struct { unsigned int x1[8]; }*)arg1 hasEntitlement:(id)arg2;
- (unsigned long long)_indexOfClientConnection:(id)arg1;
- (id)_possibleRequiredEntitlementForMessageWithIdentifier:(unsigned long long)arg1;
- (id)_singleRequiredEntitlementForMessageWithIdentifier:(unsigned long long)arg1;
- (void)clientConnectionWillBeTerminated:(id)arg1;
- (id)clientConnections;
- (void)dealloc;
- (id)entitlementsCaches;
- (id)initWithServiceClass:(Class)arg1;
- (bool)serviceCanProcessMessageWithIdentifier:(unsigned long long)arg1 fromClientWithConnection:(id)arg2 possibleRequiredEntitlements:(id*)arg3;
- (Class)serviceClass;
- (void)setClientConnections:(id)arg1;
- (void)setEntitlementsCaches:(id)arg1;
- (void)setServiceClass:(Class)arg1;

@end
