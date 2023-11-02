
@interface PKSettingsDeepLinkController : NSObject {
    <PKSettingsDeepLinkControllerDataSource> * _dataSource;
    <PKSettingsDeepLinkControllerDelegate> * _delegate;
}

- (void).cxx_destruct;
- (id)_percentEncodeReferrerIdentifier:(id)arg1;
- (void)_presentPayLaterPassOrFinancingPlanWithIdenifier:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3;
- (void)_presentTransactionDetailsForTransactionWithIdentifier:(id)arg1;
- (void)_presentTransactionDetailsForTransactionWithServiceIdentifier:(id)arg1 transactionSourceIdentifier:(id)arg2;
- (void)handleDeepLinkResourceDictionary:(id)arg1;
- (id)init;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;

@end
