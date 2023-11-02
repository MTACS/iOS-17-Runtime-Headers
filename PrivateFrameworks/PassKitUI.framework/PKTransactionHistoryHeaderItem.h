
@interface PKTransactionHistoryHeaderItem : NSObject <PKDashboardItem> {
    long long  _category;
    CNContact * _contact;
    unsigned long long  _featureIdentifier;
    unsigned long long  _historyCount;
    PKCreditInstallmentPlanProduct * _installmentProduct;
    PKMerchant * _merchant;
    NSString * _peerPaymentCounterpartHandle;
    bool  _showDetailedPropertyLocation;
    NSString * _title;
    PKPaymentTransaction * _transaction;
    PKPaymentTransactionGroup * _transactionGroup;
    long long  _transactionType;
    unsigned long long  _type;
}

@property (nonatomic) long long category;
@property (nonatomic, retain) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long featureIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long historyCount;
@property (nonatomic, retain) PKCreditInstallmentPlanProduct *installmentProduct;
@property (nonatomic, retain) PKMerchant *merchant;
@property (nonatomic, copy) NSString *peerPaymentCounterpartHandle;
@property (nonatomic) bool showDetailedPropertyLocation;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) PKPaymentTransaction *transaction;
@property (nonatomic, retain) PKPaymentTransactionGroup *transactionGroup;
@property (nonatomic) long long transactionType;
@property (nonatomic, readonly) unsigned long long type;

+ (id)identifier;

- (void).cxx_destruct;
- (long long)category;
- (id)contact;
- (unsigned long long)featureIdentifier;
- (unsigned long long)historyCount;
- (id)initWithType:(unsigned long long)arg1;
- (id)installmentProduct;
- (id)merchant;
- (id)peerPaymentCounterpartHandle;
- (void)setCategory:(long long)arg1;
- (void)setContact:(id)arg1;
- (void)setFeatureIdentifier:(unsigned long long)arg1;
- (void)setHistoryCount:(unsigned long long)arg1;
- (void)setInstallmentProduct:(id)arg1;
- (void)setMerchant:(id)arg1;
- (void)setPeerPaymentCounterpartHandle:(id)arg1;
- (void)setShowDetailedPropertyLocation:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTransaction:(id)arg1;
- (void)setTransactionGroup:(id)arg1;
- (void)setTransactionType:(long long)arg1;
- (bool)showDetailedPropertyLocation;
- (id)title;
- (id)transaction;
- (id)transactionGroup;
- (long long)transactionType;
- (unsigned long long)type;

@end
