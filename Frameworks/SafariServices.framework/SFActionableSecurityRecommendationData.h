
@interface SFActionableSecurityRecommendationData : NSObject {
    SFAccountCellData * _accountCellData;
    <SFActionableSecurityRecommendationDataDelegate> * _delegate;
    bool  _didUpgradeToSignInWithApple;
    bool  _didUpgradeToStrongPassword;
    unsigned long long  _eligibleAccountModificationActions;
    NSExtension * _extension;
    bool  _isUpgradeToSignInWithAppleAvailable;
    WBSPasswordWarning * _warning;
}

@property (nonatomic, readonly) SFAccountCellData *accountCellData;
@property (nonatomic) <SFActionableSecurityRecommendationDataDelegate> *delegate;
@property (nonatomic) bool didUpgradeToSignInWithApple;
@property (nonatomic) bool didUpgradeToStrongPassword;
@property (nonatomic, readonly) unsigned long long eligibleAccountModificationActions;
@property (nonatomic, readonly) NSExtension *extension;
@property (nonatomic, readonly) bool isUpgradeToSignInWithAppleAvailable;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) WBSPasswordWarning *warning;

- (void).cxx_destruct;
- (void)_fetchEligibleAccountModificationActionsForSavedAccount:(id)arg1;
- (id)accountCellData;
- (id)cellForTableView:(id)arg1 forCellType:(id)arg2;
- (id)delegate;
- (bool)didUpgradeToSignInWithApple;
- (bool)didUpgradeToStrongPassword;
- (unsigned long long)eligibleAccountModificationActions;
- (id)extension;
- (id)initWithAccountCellData:(id)arg1 warning:(id)arg2 delegate:(id)arg3;
- (bool)isUpgradeToSignInWithAppleAvailable;
- (id)items;
- (void)setDelegate:(id)arg1;
- (void)setDidUpgradeToSignInWithApple:(bool)arg1;
- (void)setDidUpgradeToStrongPassword:(bool)arg1;
- (id)warning;

@end
