
@interface AAInheritanceController : NSObject <AAFXPCSessionDelegate, AAInheritanceDaemonProtocol> {
    AAFXPCSession * _remoteService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AAFXPCSession *remoteService;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureRemoteInterface:(id)arg1;
- (void)dealloc;
- (void)fetchAllHealthInfoWithCompletion:(id /* block */)arg1;
- (void)fetchBenefactorsWithCompletion:(id /* block */)arg1;
- (void)fetchBeneficiariesWithCompletion:(id /* block */)arg1;
- (void)fetchInvitationWithBeneficiaryID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchInvitationsWithCompletion:(id /* block */)arg1;
- (void)fetchManifestOptionsForContact:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSuggestedBeneficiariesWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)isRecipient:(id)arg1 capableOf:(id)arg2 completion:(id /* block */)arg3;
- (void)presentInheritanceInvitationUIWithBeneficiaryID:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteService;
- (void)removeAccessCodeWithRecordIdentifier:(id)arg1 contactInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)removeBenefactor:(id)arg1 completion:(id /* block */)arg2;
- (void)removeBeneficiary:(id)arg1 manifest:(id)arg2 completion:(id /* block */)arg3;
- (void)removeInvitation:(id)arg1 completion:(id /* block */)arg2;
- (void)respondToInvitation:(id)arg1 accepted:(bool)arg2 completion:(id /* block */)arg3;
- (void)sendInvitationToContact:(id)arg1 completion:(id /* block */)arg2;
- (void)setRemoteService:(id)arg1;
- (void)setupBeneficiaryAliasWithAccessKey:(id)arg1 password:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 authToken:(id)arg5 completion:(id /* block */)arg6;
- (void)setupBeneficiaryManifest:(id)arg1 contactInfo:(id)arg2 setupAuthToken:(id)arg3 completion:(id /* block */)arg4;
- (void)updateAccessCodeWithRecordIdentifier:(id)arg1 contactInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)updateBeneficiaryManifest:(id)arg1 contactInfo:(id)arg2 completion:(id /* block */)arg3;

@end
