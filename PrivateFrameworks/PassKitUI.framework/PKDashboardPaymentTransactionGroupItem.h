
@interface PKDashboardPaymentTransactionGroupItem : NSObject <PKDashboardItem> {
    PKAccount * _account;
    PKAccountUserCollection * _accountUserCollection;
    PKFamilyMemberCollection * _familyCollection;
    PKPaymentTransactionGroup * _group;
    NSSet * _physicalCards;
    NSArray * _tokens;
    PKTransactionSourceCollection * _transactionSourceCollection;
}

@property (nonatomic, retain) PKAccount *account;
@property (nonatomic, retain) PKAccountUserCollection *accountUserCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKFamilyMemberCollection *familyCollection;
@property (nonatomic, retain) PKPaymentTransactionGroup *group;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSSet *physicalCards;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *tokens;
@property (nonatomic, retain) PKTransactionSourceCollection *transactionSourceCollection;

+ (id)identifier;

- (void).cxx_destruct;
- (id)account;
- (id)accountUserCollection;
- (id)familyCollection;
- (id)group;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)physicalCards;
- (void)setAccount:(id)arg1;
- (void)setAccountUserCollection:(id)arg1;
- (void)setFamilyCollection:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setPhysicalCards:(id)arg1;
- (void)setTokens:(id)arg1;
- (void)setTransactionSourceCollection:(id)arg1;
- (id)tokens;
- (id)transactionSourceCollection;

@end
