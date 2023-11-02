
@interface FAAppleCardUtilities : NSObject <AppleCardUtilitiesProtocol> {
    PKAppleCardUtilities * _appleCardUtilites;
}

@property (nonatomic, retain) PKAppleCardUtilities *appleCardUtilites;

- (void).cxx_destruct;
- (void)appleCardAccessLevelForAltDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)appleCardAccountStateWithCompletion:(id /* block */)arg1;
- (void)appleCardIsSharedWithWithAltDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)appleCardTransactionLimitForAltDSID:(id)arg1 completion:(id /* block */)arg2;
- (id)appleCardUtilites;
- (long long)getAccountState:(long long)arg1;
- (unsigned long long)getAcessLevel:(unsigned long long)arg1;
- (void)hasAppleCardWithCompletion:(id /* block */)arg1;
- (void)hasSentPendingAppleCardInvitationToUserWithAltDSID:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)presentAppleCardSharingDetailsForAltDSID:(id)arg1 viewController:(id)arg2 completion:(id /* block */)arg3;
- (void)presentAppleCardUserInvitationFlowWithViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)setAppleCardUtilites:(id)arg1;

@end
