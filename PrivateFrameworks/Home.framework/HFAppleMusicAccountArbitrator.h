
@interface HFAppleMusicAccountArbitrator : NSObject {
    NSSet * _accessories;
    ACAccount * _account;
    NAFuture * _activeArbitrationFuture;
    id /* block */  _contextGenerator;
    bool  _forceLogout;
    long long  _loginType;
}

@property (nonatomic, readonly, copy) NSSet *accessories;
@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, retain) NAFuture *activeArbitrationFuture;
@property (nonatomic, readonly, copy) id /* block */ contextGenerator;
@property (nonatomic) bool forceLogout;
@property (nonatomic) long long loginType;

- (void).cxx_destruct;
- (long long)_resolvedLoginType:(id*)arg1;
- (id)accessories;
- (id)account;
- (id)activeArbitrationFuture;
- (id /* block */)contextGenerator;
- (bool)forceLogout;
- (id)init;
- (id)initWithAccessories:(id)arg1 account:(id)arg2 contextGenerator:(id /* block */)arg3;
- (long long)loginType;
- (id)pendingArbitrationExecutionFuture;
- (void)setActiveArbitrationFuture:(id)arg1;
- (void)setForceLogout:(bool)arg1;
- (void)setLoginType:(long long)arg1;

@end
