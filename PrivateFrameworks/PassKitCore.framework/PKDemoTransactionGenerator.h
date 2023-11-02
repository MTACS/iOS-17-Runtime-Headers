
@interface PKDemoTransactionGenerator : NSObject

+ (id)_recordSpecificKeysForConfiguration:(id)arg1;
+ (id)allMerchants;
+ (id)allPeople;
+ (void)demoTransactionsAndEventsForItemIdentifier:(id)arg1 configuration:(id)arg2 transactions:(id*)arg3 events:(id*)arg4;
+ (void)demoTransactionsAndEventsWithConfiguration:(id)arg1 transactions:(id*)arg2 events:(id*)arg3;
+ (void)generateDemoFilesForPasses:(id)arg1 accountUsers:(id)arg2 peerPaymentPassSerialNumber:(id)arg3;
+ (void)generateDemoFilesWithCompletion:(id /* block */)arg1;
+ (void)insertTransactionAndEventsWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
+ (id)itemIdentifierForAccountUser:(id)arg1;
+ (id)itemIdentifierForPass:(id)arg1;
+ (long long)randomDemoMerchant;

@end
