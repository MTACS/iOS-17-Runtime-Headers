
@interface PKDashboardCreditAccountItem : NSObject <PKDashboardItem> {
    PKAccount * _account;
    PKAccountUserCollection * _accountUserCollection;
    PKContactAvatarManager * _avatarManager;
    PKFamilyMemberCollection * _familyCollection;
    NSArray * _months;
    NSArray * _mostRecentTransactions;
    NSArray * _pendingPayments;
    NSSet * _physicalCards;
    PKSpendingSummary * _summary;
    PKSpendingSummaryFetcher * _summaryFetcher;
    PKTransactionSourceCollection * _transactionSourceCollection;
    unsigned long long  _type;
    NSArray * _upcomingScheduledPayments;
    NSArray * _weeks;
    NSArray * _years;
}

@property (nonatomic, readonly) PKAccount *account;
@property (nonatomic, readonly) PKAccountUserCollection *accountUserCollection;
@property (nonatomic, retain) PKContactAvatarManager *avatarManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKFamilyMemberCollection *familyCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *months;
@property (nonatomic, retain) NSArray *mostRecentTransactions;
@property (nonatomic, retain) NSArray *pendingPayments;
@property (nonatomic, readonly) NSSet *physicalCards;
@property (nonatomic, retain) PKSpendingSummary *summary;
@property (nonatomic, retain) PKSpendingSummaryFetcher *summaryFetcher;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKTransactionSourceCollection *transactionSourceCollection;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, retain) NSArray *upcomingScheduledPayments;
@property (nonatomic, retain) NSArray *weeks;
@property (nonatomic, retain) NSArray *years;

+ (id)identifier;

- (void).cxx_destruct;
- (id)account;
- (id)accountUserCollection;
- (id)avatarManager;
- (id)familyCollection;
- (id)initWithAccount:(id)arg1 accountUserCollection:(id)arg2 physicalCards:(id)arg3 transactionSourceCollection:(id)arg4 familyCollection:(id)arg5 avatarManager:(id)arg6 type:(unsigned long long)arg7;
- (id)months;
- (id)mostRecentTransactions;
- (id)pendingPayments;
- (id)physicalCards;
- (void)setAvatarManager:(id)arg1;
- (void)setFamilyCollection:(id)arg1;
- (void)setMonths:(id)arg1;
- (void)setMostRecentTransactions:(id)arg1;
- (void)setPendingPayments:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setSummaryFetcher:(id)arg1;
- (void)setTransactionSourceCollection:(id)arg1;
- (void)setUpcomingScheduledPayments:(id)arg1;
- (void)setWeeks:(id)arg1;
- (void)setYears:(id)arg1;
- (id)summary;
- (id)summaryFetcher;
- (id)transactionSourceCollection;
- (unsigned long long)type;
- (id)upcomingScheduledPayments;
- (id)weeks;
- (id)years;

@end
