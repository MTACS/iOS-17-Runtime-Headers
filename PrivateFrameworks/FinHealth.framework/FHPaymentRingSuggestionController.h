
@interface FHPaymentRingSuggestionController : NSObject {
    bool  _currentStatementIsLastMonthsStatement;
    bool  _isOnPaymentPlan;
    bool  _isOnPlanCompletion;
    NSArray * _previousSelectedSuggestion;
    FHSearchSuggestionController * _searchController;
}

- (void).cxx_destruct;
- (id)_abs:(id)arg1;
- (bool)_allMandatoryValuesAreSameAmount:(id)arg1;
- (id)_calculateThresholdForLastPaymentCategory:(unsigned long long)arg1 statementBalance:(id)arg2 lastPaymentCategoryAmount:(id)arg3 previousStatementPaymentsSum:(id)arg4 statementPurchasesSum:(id)arg5;
- (bool)_categoryIsCurrentBalanceType:(unsigned long long)arg1;
- (bool)_categoryIsPaymentPlan:(unsigned long long)arg1;
- (bool)_fhEqualObjects:(id)arg1 obj2:(id)arg2;
- (id)_filterSuggestions:(id)arg1 belowThreshold:(id)arg2;
- (void)_minimumMerchcantCategoriesAboveMinimumAmount:(id)arg1 minMerchantCategory1:(long long*)arg2 minMerchantCategory2:(long long*)arg3 minMerchantCategorySum1:(id*)arg4 minMerchantCategorySum2:(id*)arg5 merchantCategoryTransactionSums:(id)arg6;
- (id)_suggestedAmountsForPayOffDateForStatementBalance:(id)arg1 statementPurchasesSum:(id)arg2 creditUtilization:(id)arg3 lastPaymentCategory:(unsigned long long)arg4;
- (id)_zerothOrFirstMonthPaymentRingSuggestionsForList:(id)arg1;
- (id)generatePaymentRingSuggestion:(id)arg1;
- (id)generatePaymentRingSuggestionsFromConvertedObjects:(id)arg1 previousStatementPaymentsSum:(id)arg2 currentStatementPaymentsSum:(id)arg3 statementPurchasesSum:(id)arg4 merchantCategoryTransactionSums:(id)arg5 billPaymentSelectedSuggestedAmountData:(id)arg6 isMonthZero:(bool)arg7 isMonthOne:(bool)arg8;
- (id)init;
- (void)recordPaymentRingAction:(id)arg1;

@end
