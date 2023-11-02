
@interface PKDashboardBalanceSummaryItem : NSObject <PKDashboardItem> {
    PKAccount * _account;
    PKAccountUserCollection * _accountUserCollection;
    PKFamilyMemberCollection * _familyCollection;
    NSDate * _mergeDate;
    PKCreditAccountMergeSummaryAccountDetails * _mergeSummaryAccountDetails;
    NSSet * _physicalCards;
    PKCurrencyAmount * _rewardsCurrencyAmount;
    PKCreditAccountStatement * _statement;
    NSArray * _statements;
    PKCreditAccountSummary * _summary;
    PKPaymentTransactionGroup * _transactionGroup;
    PKTransactionSourceCollection * _transactionSourceCollection;
    unsigned long long  _type;
    PKPaymentWebService * _webService;
}

@property (nonatomic, retain) PKAccount *account;
@property (nonatomic, retain) PKAccountUserCollection *accountUserCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKFamilyMemberCollection *familyCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *mergeDate;
@property (nonatomic, retain) PKCreditAccountMergeSummaryAccountDetails *mergeSummaryAccountDetails;
@property (nonatomic, retain) NSSet *physicalCards;
@property (nonatomic, retain) PKCurrencyAmount *rewardsCurrencyAmount;
@property (nonatomic, retain) PKCreditAccountStatement *statement;
@property (nonatomic, retain) NSArray *statements;
@property (nonatomic, retain) PKCreditAccountSummary *summary;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKPaymentTransactionGroup *transactionGroup;
@property (nonatomic, retain) PKTransactionSourceCollection *transactionSourceCollection;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) PKPaymentWebService *webService;

+ (id)identifier;

- (void).cxx_destruct;
- (id)account;
- (id)accountUserCollection;
- (id)familyCollection;
- (id)mergeDate;
- (id)mergeSummaryAccountDetails;
- (id)physicalCards;
- (id)rewardsCurrencyAmount;
- (void)setAccount:(id)arg1;
- (void)setAccountUserCollection:(id)arg1;
- (void)setFamilyCollection:(id)arg1;
- (void)setMergeDate:(id)arg1;
- (void)setMergeSummaryAccountDetails:(id)arg1;
- (void)setPhysicalCards:(id)arg1;
- (void)setRewardsCurrencyAmount:(id)arg1;
- (void)setStatement:(id)arg1;
- (void)setStatements:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setTransactionGroup:(id)arg1;
- (void)setTransactionSourceCollection:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setWebService:(id)arg1;
- (id)statement;
- (id)statements;
- (id)summary;
- (id)transactionGroup;
- (id)transactionSourceCollection;
- (unsigned long long)type;
- (id)webService;

@end
