
@interface PKDemoTransactionGeneratorConfiguration : NSObject {
    NSString * _accountIdentifier;
    long long  _accountType;
    NSString * _altDSID;
    long long  _demoMerchant;
    long long  _demoPerson;
    unsigned long long  _redemptionType;
    long long  _transactionCount;
    NSString * _transactionSourceIdentifier;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) long long accountType;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic) long long demoMerchant;
@property (nonatomic) long long demoPerson;
@property (nonatomic) unsigned long long redemptionType;
@property (nonatomic) long long transactionCount;
@property (nonatomic, copy) NSString *transactionSourceIdentifier;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (long long)accountType;
- (id)altDSID;
- (long long)demoMerchant;
- (long long)demoPerson;
- (id)init;
- (unsigned long long)redemptionType;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountType:(long long)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setDemoMerchant:(long long)arg1;
- (void)setDemoPerson:(long long)arg1;
- (void)setRedemptionType:(unsigned long long)arg1;
- (void)setTransactionCount:(long long)arg1;
- (void)setTransactionSourceIdentifier:(id)arg1;
- (long long)transactionCount;
- (id)transactionSourceIdentifier;

@end
