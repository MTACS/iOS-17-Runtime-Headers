
@interface PKDashboardTransactionReceiptItem : NSObject <PKDashboardItem> {
    PKAccount * _account;
    PKAccountUserCollection * _accountUserCollection;
    PKFamilyMemberCollection * _familyCollection;
    NSSet * _physicalCards;
    PKTransactionReceipt * _receipt;
    PKPaymentTransaction * _transaction;
    PKTransactionSourceCollection * _transactionSourceCollection;
}

@property (nonatomic, retain) PKAccount *account;
@property (nonatomic, retain) PKAccountUserCollection *accountUserCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKFamilyMemberCollection *familyCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSSet *physicalCards;
@property (nonatomic, retain) PKTransactionReceipt *receipt;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKPaymentTransaction *transaction;
@property (nonatomic, retain) PKTransactionSourceCollection *transactionSourceCollection;

+ (id)identifier;

- (void).cxx_destruct;
- (id)account;
- (id)accountUserCollection;
- (id)familyCollection;
- (id)physicalCards;
- (id)receipt;
- (void)setAccount:(id)arg1;
- (void)setAccountUserCollection:(id)arg1;
- (void)setFamilyCollection:(id)arg1;
- (void)setPhysicalCards:(id)arg1;
- (void)setReceipt:(id)arg1;
- (void)setTransaction:(id)arg1;
- (void)setTransactionSourceCollection:(id)arg1;
- (id)transaction;
- (id)transactionSourceCollection;

@end
