
@interface PKRewardsSummaryFetcher : NSObject {
    PKAccount * _account;
    PKTransactionSourceCollection * _transactionSourceCollection;
}

- (void).cxx_destruct;
- (id)_relevantTransactionSourceIdentifiers;
- (id)initWithTransactionSourceCollection:(id)arg1 account:(id)arg2;
- (bool)isPaymentPassRelevant:(id)arg1;
- (bool)isTransactionSourceIdentifierRelevant:(id)arg1;
- (void)rewardsTierSummariesWithCompletion:(id /* block */)arg1;

@end
