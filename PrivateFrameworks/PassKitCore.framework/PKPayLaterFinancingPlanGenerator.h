
@interface PKPayLaterFinancingPlanGenerator : NSObject

+ (id)_appleCashPaymentSource;
+ (id)_appleCashPlanSource;
+ (id)_bankOfAmerciaDebitPaymentSource;
+ (id)_bankOfAmerciaDebitPlanSource;
+ (id)_bankOfTheWestACHPaymentSource;
+ (id)_bankOfTheWestACHPlanSource;
+ (id)_bestBuyMerchant;
+ (id)_boilerPlateAccount;
+ (void)_calculateCurrentBalanceForFinancingPlans:(id)arg1 currentBalance:(id*)arg2 bnplCurrentBalance:(id*)arg3 loanCurrentBalance:(id*)arg4 amountPaid:(id*)arg5 bnplAmountPaid:(id*)arg6 loanAmountPaid:(id*)arg7 totalFinanced:(id*)arg8 bnplTotalFinanced:(id*)arg9 loanTotalFinanced:(id*)arg10;
+ (id)_chaseDebitPaymentSource;
+ (id)_chaseDebitPlanSource;
+ (id)_createInstallmentsWithDueDates:(id)arg1 installmentAmountWithInterest:(id)arg2 currency:(id)arg3 planIdentifier:(id)arg4;
+ (id)_currentBalanceForPlanWithTotalAmount:(id)arg1 installments:(id)arg2;
+ (id)_disputesForPayments:(id)arg1 paymentIdentifiersForDispute:(id)arg2 planIdentifier:(id)arg3;
+ (id)_installmentAmountWithInterestForAPR:(id)arg1 totalPrincipal:(id)arg2 installmentCount:(long long)arg3;
+ (id)_installmentDueDatesForInstallmentCount:(long long)arg1 productType:(unsigned long long)arg2 transactionDate:(id)arg3;
+ (id)_installmentsWithPayments:(id)arg1 planIdentifier:(id)arg2 productType:(unsigned long long)arg3 installmentDueDates:(id)arg4 installmentAmountWithInterest:(id)arg5 currency:(id)arg6 disputes:(id)arg7;
+ (id)_interestPaidToDateForInstallments:(id)arg1 installmentInterest:(id)arg2;
+ (id)_macysMerchant;
+ (id)_maximumNumber:(id)arg1 number2:(id)arg2;
+ (id)_minimumNumber:(id)arg1 number2:(id)arg2;
+ (id)_nextDateWithProductType:(unsigned long long)arg1 referenceDate:(id)arg2;
+ (id)_nextDueAmountForFinancingPlans:(id)arg1;
+ (id)_nikeMerchant;
+ (id)_paymentFundingSourceFromPlanFundingSource:(id)arg1;
+ (id)_paymentsForConfigs:(id)arg1 installmentDueDates:(id)arg2 planIdentifier:(id)arg3 transactionDate:(id)arg4 installmentAmountWithInterest:(id)arg5 installmentAmountWithoutInterest:(id)arg6 installmentInterest:(id)arg7 totalAmountWithInterest:(id)arg8 totalAmountWithoutInterest:(id)arg9 totalInterest:(id)arg10 currency:(id)arg11 ignoreFutureDates:(bool)arg12 paymentIdentifiersForDispute:(id*)arg13;
+ (id)_principalPaidToDateForInstallments:(id)arg1 installmentAmountWithoutInterest:(id)arg2;
+ (void)_processCreditRevokedWithPayment:(id)arg1 installments:(id)arg2 payments:(id)arg3 disputes:(id)arg4 currency:(id)arg5;
+ (void)_processRefundRevokedWithPayment:(id)arg1 installments:(id)arg2 payments:(id)arg3 currency:(id)arg4;
+ (id)_saksMerchant;
+ (id)_termsDetailsForPlanIdentifier:(id)arg1;
+ (id)_testMerchant;
+ (id)_wellsFargoACHPaymentSource;
+ (id)_wellsFargoACHPlanSource;
+ (void)deleteMockAccountWithCompletion:(id /* block */)arg1;
+ (id)financingPlanWithConfiguration:(id)arg1;
+ (id)generatePayLaterAccountForFinancingPlans:(id)arg1;
+ (void)insertAndUpdateAccountWithAdditionalFinancingPlans:(id)arg1 completion:(id /* block */)arg2;
+ (void)insertAndUpdateAccountWithNewPlanType:(unsigned long long)arg1 installmentCount:(long long)arg2 principalAmount:(id)arg3 apr:(id)arg4 daysSinceTransactionStart:(long long)arg5 merchant:(unsigned long long)arg6 completion:(id /* block */)arg7;
+ (id)maximumAPRForProductType:(unsigned long long)arg1;
+ (long long)maximumInstallmentCountForProductType:(unsigned long long)arg1;
+ (id)maximumPrincipalAmountForProductType:(unsigned long long)arg1;
+ (id)minimumAPRForProductType:(unsigned long long)arg1;
+ (long long)minimumInstallmentCountForProductType:(unsigned long long)arg1;
+ (id)minimumPrincipalAmountForProductType:(unsigned long long)arg1;
+ (id)payLaterFinancingPlanFundingSourceForType:(unsigned long long)arg1;
+ (id)payLaterMerchantForType:(unsigned long long)arg1;
+ (id)payLaterPaymentFundingSourceForType:(unsigned long long)arg1;

@end
