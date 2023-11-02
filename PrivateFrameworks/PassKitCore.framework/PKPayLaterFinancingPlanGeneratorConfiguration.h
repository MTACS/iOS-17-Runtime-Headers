
@interface PKPayLaterFinancingPlanGeneratorConfiguration : NSObject {
    NSDecimalNumber * _apr;
    bool  _autoPayment;
    NSString * _currency;
    long long  _daysSinceTransactionStart;
    unsigned long long  _fundingSource;
    bool  _ignoreFuturePayments;
    long long  _installmentCount;
    unsigned long long  _merchant;
    NSArray * _payments;
    unsigned long long  _productType;
    unsigned long long  _scheduleSummaryReason;
    NSDecimalNumber * _totalPrincipal;
}

@property (nonatomic, copy) NSDecimalNumber *apr;
@property (nonatomic) bool autoPayment;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic) long long daysSinceTransactionStart;
@property (nonatomic) unsigned long long fundingSource;
@property (nonatomic) bool ignoreFuturePayments;
@property (nonatomic) long long installmentCount;
@property (nonatomic) unsigned long long merchant;
@property (nonatomic, copy) NSArray *payments;
@property (nonatomic) unsigned long long productType;
@property (nonatomic) unsigned long long scheduleSummaryReason;
@property (nonatomic, copy) NSDecimalNumber *totalPrincipal;

+ (id)configurationForBNPLWithTotalPrincipal:(id)arg1 daysSinceTransactionStart:(long long)arg2 payments:(id)arg3;
+ (id)configurationWithProductType:(unsigned long long)arg1 apr:(id)arg2 totalPrincipal:(id)arg3 installmentCount:(long long)arg4 daysSinceTransactionStart:(long long)arg5 merchant:(unsigned long long)arg6 fundingSource:(unsigned long long)arg7 payments:(id)arg8;
+ (id)configurationWithProductType:(unsigned long long)arg1 apr:(id)arg2 totalPrincipal:(id)arg3 installmentCount:(long long)arg4 daysSinceTransactionStart:(long long)arg5 payments:(id)arg6;

- (void).cxx_destruct;
- (id)apr;
- (bool)autoPayment;
- (id)currency;
- (long long)daysSinceTransactionStart;
- (unsigned long long)fundingSource;
- (bool)ignoreFuturePayments;
- (long long)installmentCount;
- (unsigned long long)merchant;
- (id)payments;
- (unsigned long long)productType;
- (unsigned long long)scheduleSummaryReason;
- (void)setApr:(id)arg1;
- (void)setAutoPayment:(bool)arg1;
- (void)setCurrency:(id)arg1;
- (void)setDaysSinceTransactionStart:(long long)arg1;
- (void)setFundingSource:(unsigned long long)arg1;
- (void)setIgnoreFuturePayments:(bool)arg1;
- (void)setInstallmentCount:(long long)arg1;
- (void)setMerchant:(unsigned long long)arg1;
- (void)setPayments:(id)arg1;
- (void)setProductType:(unsigned long long)arg1;
- (void)setScheduleSummaryReason:(unsigned long long)arg1;
- (void)setTotalPrincipal:(id)arg1;
- (id)totalPrincipal;

@end
