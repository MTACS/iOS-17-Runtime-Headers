
@interface PKDashboardPaymentTransactionItem : NSObject <PKDashboardItem> {
    PKAccount * _account;
    PKAccountUserCollection * _accountUserCollection;
    PKFamilyMemberCollection * _familyCollection;
    bool  _isFeaturedTransaction;
    PKPaymentPass * _pass;
    NSSet * _physicalCards;
    PKTransactionSource * _secondaryTransactionSource;
    PKPaymentTransaction * _transaction;
    PKTransactionSourceCollection * _transactionSourceCollection;
}

@property (nonatomic, retain) PKAccount *account;
@property (nonatomic, retain) PKAccountUserCollection *accountUserCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKFamilyMemberCollection *familyCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFeaturedTransaction;
@property (nonatomic, copy) NSSet *physicalCards;
@property (nonatomic, retain) PKTransactionSource *secondaryTransactionSource;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKPaymentTransaction *transaction;
@property (nonatomic, readonly) PKTransactionSourceCollection *transactionSourceCollection;

+ (id)identifier;

- (void).cxx_destruct;
- (id)account;
- (id)accountUserCollection;
- (id)familyCollection;
- (unsigned long long)hash;
- (id)initWithTransactionSourceCollection:(id)arg1 familyCollection:(id)arg2 transaction:(id)arg3 account:(id)arg4 accountUserCollection:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isFeaturedTransaction;
- (id)physicalCards;
- (id)secondaryTransactionSource;
- (void)setAccount:(id)arg1;
- (void)setAccountUserCollection:(id)arg1;
- (void)setFamilyCollection:(id)arg1;
- (void)setIsFeaturedTransaction:(bool)arg1;
- (void)setPhysicalCards:(id)arg1;
- (void)setSecondaryTransactionSource:(id)arg1;
- (id)transaction;
- (id)transactionSourceCollection;

@end
