
@interface DRSTaskingClientConnectionState : NSObject {
    NSMutableDictionary * _cachedEntitlements;
    bool  _hasAdminEntitlement;
    int  _pid;
}

@property (nonatomic, readonly) NSMutableDictionary *cachedEntitlements;
@property (nonatomic, readonly) bool hasAdminEntitlement;
@property (nonatomic, readonly) int pid;

- (void).cxx_destruct;
- (id)cachedEntitlements;
- (void)dealloc;
- (bool)hasAdminEntitlement;
- (bool)hasTeamIDEntitlement:(id)arg1 connection:(id)arg2;
- (id)initWithConnection:(id)arg1 service:(id)arg2;
- (int)pid;

@end
