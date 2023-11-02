
@interface VUIFamilyInviteManager : NSObject <AIDAAccountManagerDelegate> {
    AIDAAccountManager * _accountManager;
    ACAccountStore * _store;
}

@property (nonatomic, readonly) AIDAAccountManager *accountManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ACAccountStore *store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountManager;
- (id)accountsForAccountManager:(id)arg1;
- (id)init;
- (void)presentFamilySetupScreenIfEligible:(id)arg1 checkEligibility:(bool)arg2;
- (void)presentFamilySetupScreenWithBuyParams:(id)arg1;
- (id)store;

@end
