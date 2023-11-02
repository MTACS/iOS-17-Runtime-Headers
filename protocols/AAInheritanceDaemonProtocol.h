
@protocol AAInheritanceDaemonProtocol

@required

- (void)fetchAllHealthInfoWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchBenefactorsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchBeneficiariesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchInvitationWithBeneficiaryID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AAInheritanceInvitation *, NSError *, void*
- (void)fetchInvitationsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchManifestOptionsForContact:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: <AAInheritanceContact> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKBeneficiaryManifest *, NSError *, void*
- (void)fetchSuggestedBeneficiariesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)isRecipient:(void *)arg1 capableOf:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, AAMessagingCapability *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)presentInheritanceInvitationUIWithBeneficiaryID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeAccessCodeForContactInfo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <AAInheritanceContact> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeBenefactor:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AABenefactorInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeBeneficiary:(void *)arg1 manifest:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: AABeneficiary *, AKBeneficiaryManifest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeInvitation:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AAInheritanceInvitation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)respondToInvitation:(void *)arg1 accepted:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendInvitationToContact:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <AAInheritanceContactInfo> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setupBeneficiaryAliasWithAccessKey:(void *)arg1 password:(void *)arg2 firstName:(void *)arg3 lastName:(void *)arg4 authToken:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 13: NSString *, NSString *, NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)setupBeneficiaryManifest:(void *)arg1 contactInfo:(void *)arg2 setupAuthToken:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: AKBeneficiaryManifest *, <AAInheritanceContact> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AABeneficiary *, NSError *, void*
- (void)updateAccessCodeForContactInfo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <AAInheritanceContact> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateBeneficiaryManifest:(void *)arg1 contactInfo:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: AKBeneficiaryManifest *, <AAInheritanceContact> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
