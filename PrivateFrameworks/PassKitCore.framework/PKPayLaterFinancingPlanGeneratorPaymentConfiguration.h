
@interface PKPayLaterFinancingPlanGeneratorPaymentConfiguration : NSObject {
    NSDecimalNumber * _amount;
    long long  _daysPriorToRelativeInstallmentNumber;
    bool  _forDispute;
    unsigned long long  _fundingSource;
    long long  _installmentAmountMultiple;
    bool  _payOffRestOfLoanBalance;
    unsigned long long  _paymentType;
    long long  _relativeToInstallmentNumber;
}

@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic) long long daysPriorToRelativeInstallmentNumber;
@property (nonatomic) bool forDispute;
@property (nonatomic) unsigned long long fundingSource;
@property (nonatomic) long long installmentAmountMultiple;
@property (nonatomic) bool payOffRestOfLoanBalance;
@property (nonatomic) unsigned long long paymentType;
@property (nonatomic) long long relativeToInstallmentNumber;

+ (id)paymentConfigurationForDeclinedPaymentForInstallmentNumber:(long long)arg1;
+ (id)paymentConfigurationForDeclinedPaymentForInstallmentNumber:(long long)arg1 daysPriorToRelativeInstallmentNumber:(long long)arg2;
+ (id)paymentConfigurationForDefaultInstallmentNumber:(long long)arg1;
+ (id)paymentConfigurationForDefaultInstallmentNumber:(long long)arg1 daysPriorToRelativeInstallmentNumber:(long long)arg2;
+ (id)paymentConfigurationForDefaultInstallmentNumber:(long long)arg1 daysPriorToRelativeInstallmentNumber:(long long)arg2 installmentAmountMultiple:(long long)arg3;
+ (id)paymentConfigurationForRemainingFinancingPlanBalancRelativeToInstallmentNumber:(long long)arg1 daysPriorToRelativeInstallmentNumber:(long long)arg2;
+ (id)paymentConfigurationWithAmount:(id)arg1 relativeToInstallmentNumber:(long long)arg2 daysPriorToRelativeInstallmentNumber:(long long)arg3;
+ (id)paymentConfigurationWithPaymentType:(unsigned long long)arg1 amount:(id)arg2 relativeToInstallmentNumber:(long long)arg3 daysPriorToRelativeInstallmentNumber:(long long)arg4;
+ (id)paymentConfigurationWithPaymentType:(unsigned long long)arg1 amount:(id)arg2 relativeToInstallmentNumber:(long long)arg3 daysPriorToRelativeInstallmentNumber:(long long)arg4 fundingSource:(unsigned long long)arg5;
+ (id)paymentConfigurationWithPaymentType:(unsigned long long)arg1 relativeToInstallmentNumber:(long long)arg2 daysPriorToRelativeInstallmentNumber:(long long)arg3 installmentAmountMultiple:(long long)arg4;

- (void).cxx_destruct;
- (id)amount;
- (long long)daysPriorToRelativeInstallmentNumber;
- (bool)forDispute;
- (unsigned long long)fundingSource;
- (long long)installmentAmountMultiple;
- (bool)payOffRestOfLoanBalance;
- (unsigned long long)paymentType;
- (long long)relativeToInstallmentNumber;
- (void)setAmount:(id)arg1;
- (void)setDaysPriorToRelativeInstallmentNumber:(long long)arg1;
- (void)setForDispute:(bool)arg1;
- (void)setFundingSource:(unsigned long long)arg1;
- (void)setInstallmentAmountMultiple:(long long)arg1;
- (void)setPayOffRestOfLoanBalance:(bool)arg1;
- (void)setPaymentType:(unsigned long long)arg1;
- (void)setRelativeToInstallmentNumber:(long long)arg1;

@end
