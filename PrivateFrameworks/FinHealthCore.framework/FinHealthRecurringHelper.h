
@interface FinHealthRecurringHelper : NSObject

+ (id)histogramKeysForCardPurchaseTransaction:(id)arg1 transactionAmount:(id)arg2 transactionType:(long long)arg3 amountFromDatabase:(long long)arg4;
+ (id)histogramKeysForPeerPaymentTransaction:(id)arg1 transactionAmount:(id)arg2 transactionPeerPaymentSubtype:(long long)arg3 amountFromDatabase:(long long)arg4;
+ (id)histogramKeysForTopUpTransaction:(id)arg1 amountFromDatabase:(long long)arg2;
+ (id)histogramKeysForTransaction:(id)arg1;
+ (id)rootMeanSquareError:(id)arg1;
+ (id)rootMeanSquareError:(id)arg1 decimalKey:(id)arg2 startIndex:(unsigned long long)arg3 arrayLength:(unsigned long long)arg4 decimalDenominator:(id)arg5;
+ (id)rootMeanSquareError:(id)arg1 startIndex:(unsigned long long)arg2 arrayLength:(unsigned long long)arg3;
+ (void)rootMeanSquareErrorForSlidingWindowWithCompletion:(id)arg1 slidingWindowWidth:(unsigned long long)arg2 decimalThreshold:(id)arg3 decimalDenominator:(id)arg4 decimalKeyEntry:(id)arg5 completion:(id /* block */)arg6;

@end
