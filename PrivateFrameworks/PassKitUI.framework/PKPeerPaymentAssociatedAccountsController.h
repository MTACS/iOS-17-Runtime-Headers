
@interface PKPeerPaymentAssociatedAccountsController : NSObject <PKPeerPaymentAssociatedAccountSetupDelegate> {
    PKPeerPaymentAccount * _account;
    PKContactAvatarManager * _avatarManager;
    long long  _context;
    bool  _didBeginReporter;
    PKPeerPaymentAssociatedAccountControllerDoneTapHelper * _doneTapHelper;
    PKFamilyMemberCollection * _familyCollection;
    UINavigationController * _navigationController;
    <PKPassLibraryDataProvider> * _passLibraryDataProvider;
    PKPaymentService * _paymentService;
    PKPeerPaymentService * _peerPaymentService;
    PKPeerPaymentAssociatedAccountPresentationContext * _presentationContext;
    NSString * _viewerFamilyMemberTypeAnalyticsKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_begingReportingIfNecessary;
- (void)_endReportingSessionIfNecessary;
- (void)_peerPaymentAccountChanged:(id)arg1;
- (void)addPeerPaymentAssociatedAccountDidSkipSetupForFamilyMember:(id)arg1;
- (void)addPeerPaymentAssociatedAccountSetupCompletedWithSucess:(bool)arg1 updatedAccount:(id)arg2 forFamilyMember:(id)arg3;
- (id)initWithFamilyCollection:(id)arg1 avatarManager:(id)arg2 passLibraryDataProvider:(id)arg3 context:(long long)arg4;
- (id)initWithFamilyMembers:(id)arg1;
- (void)presentAssociatedAccountsFlowWithPresentationContext:(id)arg1 fromNavigationController:(id)arg2;

@end
