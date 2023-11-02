
@interface AKInheritanceController : NSObject <AAFXPCSessionDelegate, AKInheritanceInterface> {
    AAFXPCSession * _remoteService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AAFXPCSession *remoteService;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupBeneficiaryAliasWithInheritanceContext:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchManifestOptionsWithInheritanceContext:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithXPCSession:(id)arg1;
- (id)remoteService;
- (void)removeBeneficiaryWithInheritanceContext:(id)arg1 completion:(id /* block */)arg2;
- (void)setRemoteService:(id)arg1;
- (void)setupBeneficiaryWithInheritanceContext:(id)arg1 completion:(id /* block */)arg2;
- (void)updateBeneficiaryWithInheritanceContext:(id)arg1 completion:(id /* block */)arg2;

@end
