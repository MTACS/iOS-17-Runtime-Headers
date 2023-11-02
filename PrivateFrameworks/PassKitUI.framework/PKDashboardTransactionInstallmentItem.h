
@interface PKDashboardTransactionInstallmentItem : NSObject <PKDashboardItem> {
    PKAccount * _account;
    PKCreditInstallmentPlan * _installmentPlan;
    PKTransactionSourceCollection * _transactionSourceCollection;
}

@property (nonatomic, retain) PKAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKCreditInstallmentPlan *installmentPlan;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKTransactionSourceCollection *transactionSourceCollection;

+ (id)identifier;

- (void).cxx_destruct;
- (id)account;
- (id)installmentPlan;
- (void)setAccount:(id)arg1;
- (void)setInstallmentPlan:(id)arg1;
- (void)setTransactionSourceCollection:(id)arg1;
- (id)transactionSourceCollection;

@end
