
@interface PKAppleCardUtilities : NSObject <PKAccountServiceObserver, PKPaymentServiceDelegate> {
    PKAccount * _account;
    PKAccountService * _accountService;
    PKFamilyMemberCollection * _familyMemberCollection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    PKPaymentPass * _pass;
    PKPaymentService * _paymentService;
    NSArray * _sentInvitations;
    PKAccountUserCollection * _userCollection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeAccountUserWithAltDSID:(id)arg1;
- (id)_contactKeysToFetch;
- (void)_fetchDataIfNecessaryWithCompletion:(id /* block */)arg1;
- (id)_pendingSentInvitationWithAltDSID:(id)arg1;
- (void)accountChanged:(id)arg1;
- (void)accountRemoved:(id)arg1;
- (void)accountUsersChanged:(id)arg1 forAccountIdentifier:(id)arg2;
- (void)appleCardAccessLevelForAltDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)appleCardAccountStateWithCompletion:(id /* block */)arg1;
- (void)appleCardIsSharedWithWithAltDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)appleCardTransactionLimitForAltDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)didUpdateFamilyMembers:(id)arg1;
- (void)featureApplicationAdded:(id)arg1;
- (void)featureApplicationChanged:(id)arg1;
- (void)featureApplicationRemoved:(id)arg1;
- (void)hasAppleCardWithCompletion:(id /* block */)arg1;
- (void)hasSentPendingAppleCardInvitationToUserWithAltDSID:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)presentAppleCardSharingDetailsForAltDSID:(id)arg1 viewController:(id)arg2 completion:(id /* block */)arg3;
- (void)presentAppleCardSharingDetailsForAltDSID:(id)arg1 viewController:(id)arg2 hideUserDetailHeader:(bool)arg3 completion:(id /* block */)arg4;
- (void)presentAppleCardUserInvitationFlowWithViewController:(id)arg1 completion:(id /* block */)arg2;

@end
