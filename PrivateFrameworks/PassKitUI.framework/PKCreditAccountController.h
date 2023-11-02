
@interface PKCreditAccountController : PKAccountFlowController

+ (bool)_shouldDisplayBalanceAndTransactionsForTransactionSourceCollection:(id)arg1;
+ (bool)_shouldDisplayBalanceForAccount:(id)arg1;
+ (bool)_shouldDisplayTransactionsForAccount:(id)arg1;
+ (unsigned long long)paymentEducationStateForAccount:(id)arg1 mostRecentTransactions:(id)arg2 pendingPayments:(id)arg3 upcomingScheduledPayments:(id)arg4;
+ (id)relevantScheduledPaymentFromScheduledPayments:(id)arg1 account:(id)arg2;
+ (void)resolutionToReceiveCashbackForAccount:(id)arg1 accountUser:(id)arg2 withPeerPaymentAccount:(id)arg3 completion:(id /* block */)arg4;
+ (bool)shouldDisplayAccountInformationForTransactionSourceCollection:(id)arg1 withAccount:(id)arg2;
+ (bool)shouldDisplayScheduledPaymentsWithAccount:(id)arg1 andPass:(id)arg2;
+ (bool)shouldDisplayTransactionsForTransactionSourceCollection:(id)arg1 withAccount:(id)arg2;
+ (bool)shouldShowCardNumbersWithAccount:(id)arg1 andPass:(id)arg2;

@end
