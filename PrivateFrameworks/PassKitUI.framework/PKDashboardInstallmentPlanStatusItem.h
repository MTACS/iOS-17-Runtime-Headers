
@interface PKDashboardInstallmentPlanStatusItem : NSObject <PKDashboardItem> {
    PKAccount * _account;
    PKAccountUserCollection * _accountUserCollection;
    PKFamilyMemberCollection * _familyMemberCollection;
    PKCreditInstallmentPlan * _installmentPlan;
    PKTransactionSourceCollection * _transactionSourceCollection;
}

@property (nonatomic, retain) PKAccount *account;
@property (nonatomic, retain) PKAccountUserCollection *accountUserCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKFamilyMemberCollection *familyMemberCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKCreditInstallmentPlan *installmentPlan;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKTransactionSourceCollection *transactionSourceCollection;

+ (id)identifier;

- (void).cxx_destruct;
- (id)account;
- (id)accountUserCollection;
- (id)familyMemberCollection;
- (id)installmentPlan;
- (void)setAccount:(id)arg1;
- (void)setAccountUserCollection:(id)arg1;
- (void)setFamilyMemberCollection:(id)arg1;
- (void)setInstallmentPlan:(id)arg1;
- (void)setTransactionSourceCollection:(id)arg1;
- (id)transactionSourceCollection;

@end
