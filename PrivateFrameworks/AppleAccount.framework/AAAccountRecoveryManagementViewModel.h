
@interface AAAccountRecoveryManagementViewModel : NSObject

@property (nonatomic, readonly, copy) NSString *appleDataRecoveryLabel;
@property (nonatomic, readonly, copy) NSString *details;
@property (nonatomic, readonly, copy) NSString *detailsForIneligibleAccount;
@property (nonatomic, readonly, copy) NSURL *footerLearnMoreURL;
@property (nonatomic, readonly, copy) NSString *learnMore;
@property (nonatomic, readonly, copy) NSURL *learnMoreURL;
@property (nonatomic, readonly, copy) NSString *myRecoveryContactsAdd;
@property (nonatomic, readonly, copy) NSString *myRecoveryContactsFooter;
@property (nonatomic, readonly, copy) NSString *myRecoveryContactsFooterForIneligibleAccount;
@property (nonatomic, readonly, copy) NSString *myRecoveryContactsGroupTitle;
@property (nonatomic, readonly, copy) NSString *printableSummaryFooter;
@property (nonatomic, readonly, copy) NSString *printableSummaryLabel;
@property (nonatomic, readonly, copy) NSString *recoveryContactForGroupTitle;
@property (nonatomic, readonly, copy) NSString *recoveryKeyDetails;
@property (nonatomic, readonly, copy) NSString *recoveryKeyLabel;
@property (nonatomic, readonly, copy) NSURL *recoveryKeyLearnMoreURL;
@property (nonatomic, readonly, copy) NSString *title;

- (id)appleDataRecoveryLabel;
- (id)details;
- (id)detailsForIneligibleAccount;
- (id)footerLearnMoreURL;
- (id)learnMore;
- (id)learnMoreURL;
- (id)myRecoveryContactsAdd;
- (id)myRecoveryContactsFooter;
- (id)myRecoveryContactsFooterForIneligibleAccount;
- (id)myRecoveryContactsGroupTitle;
- (id)printableSummaryFooter;
- (id)printableSummaryLabel;
- (id)recoveryContactForGroupTitle;
- (id)recoveryKeyDetails;
- (id)recoveryKeyLabel;
- (id)recoveryKeyLearnMoreURL;
- (id)recoveryKeyStatusText:(bool)arg1;
- (id)title;

@end
