
@interface PKSubcredentialProvisioningViewModel : NSObject <PKSubcredentialProvisioningViewModelProtocol> {
    PKSubcredentialProvisioningConfiguration * _config;
    PKSubcredentialProvisioningController * _provisioningController;
}

@property (nonatomic, retain) PKSubcredentialProvisioningConfiguration *config;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKSubcredentialProvisioningController *provisioningController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelProvisioningWithCompletion:(id /* block */)arg1;
- (id)config;
- (id)initWithDelegate:(id)arg1;
- (id)provisioningController;
- (void)rescindSimilarInvitationsToSharingRequest:(id)arg1 withWebService:(id)arg2 completion:(id /* block */)arg3;
- (void)setConfig:(id)arg1;
- (void)setNewAuthRandomIfNecessaryWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)setProvisioningController:(id)arg1;
- (void)startProvisioning;

@end
