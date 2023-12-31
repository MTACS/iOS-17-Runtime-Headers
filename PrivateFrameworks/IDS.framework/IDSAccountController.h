
@interface IDSAccountController : NSObject {
    _IDSAccountController * _internal;
}

@property (nonatomic, readonly) NSSet *accounts;

- (void).cxx_destruct;
- (void)_disableAccount:(id)arg1;
- (void)_enableAccount:(id)arg1;
- (id)_initWithService:(id)arg1;
- (id)_initWithService:(id)arg1 onIDSQueue:(bool)arg2;
- (id)_internal;
- (void)_removeAccount:(id)arg1;
- (id)accountWithLoginID:(id)arg1 service:(id)arg2;
- (id)accountWithUniqueID:(id)arg1;
- (id)accounts;
- (void)addAccount:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (void)disableAccount:(id)arg1;
- (void)enableAccount:(id)arg1;
- (id)enabledAccounts;
- (id)initWithService:(id)arg1;
- (void)removeAccount:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (id)serviceName;
- (void)setupAccountWithLoginID:(id)arg1 aliases:(id)arg2 password:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setupAccountWithLoginID:(id)arg1 password:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setupAccountWithSetupParameters:(id)arg1 aliases:(id)arg2 completionHandler:(id /* block */)arg3;

@end
