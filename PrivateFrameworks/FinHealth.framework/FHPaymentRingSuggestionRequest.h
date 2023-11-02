
@interface FHPaymentRingSuggestionRequest : NSObject {
    FHStatementDetails * _currentStatement;
    NSDecimalNumber * _currentStatementPaymentsSum;
    NSDictionary * _merchantCategoryTransactionSums;
    NSArray * _paymentDetails;
    FHStatementDetails * _previousStatement;
    NSDecimalNumber * _previousStatementPaymentsSum;
    NSDecimalNumber * _statementPurchasesSum;
}

@property (nonatomic, retain) FHStatementDetails *currentStatement;
@property (nonatomic, retain) NSDecimalNumber *currentStatementPaymentsSum;
@property (nonatomic, retain) NSDictionary *merchantCategoryTransactionSums;
@property (nonatomic, retain) NSArray *paymentDetails;
@property (nonatomic, retain) FHStatementDetails *previousStatement;
@property (nonatomic, retain) NSDecimalNumber *previousStatementPaymentsSum;
@property (nonatomic, retain) NSDecimalNumber *statementPurchasesSum;

- (void).cxx_destruct;
- (id)currentStatement;
- (id)currentStatementPaymentsSum;
- (id)description;
- (unsigned long long)hash;
- (id)initWithcurrentStatement:(id)arg1 previousStatement:(id)arg2 previousStatementPaymentsSum:(id)arg3 currentStatementPaymentsSum:(id)arg4 statementPurchasesSum:(id)arg5 merchantCategoryTransactionSums:(id)arg6 paymentDetails:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)merchantCategoryTransactionSums;
- (id)paymentDetails;
- (id)previousStatement;
- (id)previousStatementPaymentsSum;
- (void)setCurrentStatement:(id)arg1;
- (void)setCurrentStatementPaymentsSum:(id)arg1;
- (void)setMerchantCategoryTransactionSums:(id)arg1;
- (void)setPaymentDetails:(id)arg1;
- (void)setPreviousStatement:(id)arg1;
- (void)setPreviousStatementPaymentsSum:(id)arg1;
- (void)setStatementPurchasesSum:(id)arg1;
- (id)statementPurchasesSum;

@end
