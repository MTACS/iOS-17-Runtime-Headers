
@interface PKPaymentTransactionDetailAmountLineItemGenerator : NSObject

- (id)_feeLineItemsForFees:(id)arg1;
- (id)_foreignExchangeLineItemsForExchangeInfo:(id)arg1;
- (id)_lineItemsForPeerPaymentTransaction:(id)arg1 transactionSourceCollection:(id)arg2;
- (id)_lineItemsForPurchaseTransaction:(id)arg1 transactionSourceCollection:(id)arg2 associatedReceipt:(id)arg3;
- (id)_lineItemsForWithdrawalTransaction:(id)arg1 transactionSourceCollection:(id)arg2;
- (id)_primaryFundingSourceLineItemForTransaction:(id)arg1 transactionSourceCollection:(id)arg2;
- (id)_rewardsLineItemsForRewards:(id)arg1 currencyCode:(id)arg2;
- (id)_secondaryFundingSourceLineItemForTransaction:(id)arg1;
- (id)_subtotalLineItemForTransaction:(id)arg1;
- (id)_totalPaidLineItemForTransaction:(id)arg1 isUnqualified:(bool)arg2;
- (id)_totalReceivedLineItemForTransaction:(id)arg1;
- (id)_totalRequestedLineItemForTransaction:(id)arg1;
- (id)_totalSentLineItemForTransaction:(id)arg1;
- (id)_totalTransferredItemForTransaction:(id)arg1;
- (id)lineItemsForInstallmentPlan:(id)arg1;
- (id)lineItemsForTransaction:(id)arg1 transactionSourceCollection:(id)arg2 associatedTransaction:(id)arg3 associatedReceipt:(id)arg4;

@end
