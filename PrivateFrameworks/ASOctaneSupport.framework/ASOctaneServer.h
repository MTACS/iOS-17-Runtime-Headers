
@interface ASOctaneServer : NSObject {
    NSXPCConnection * _connectionToService;
}

+ (id)shared;

- (void).cxx_destruct;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_synchronousRemoteObjectProxy:(id*)arg1;
- (long long)activePort;
- (void)appRemovedWithBundleID:(id)arg1;
- (void)buyProductWithConfiguration:(id)arg1 withReply:(id /* block */)arg2;
- (id)buyProductWithID:(id)arg1 bundleID:(id)arg2;
- (id)cancelTransactionWithIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2;
- (id)changeAutoRenewStatus:(bool)arg1 transactionID:(unsigned long long)arg2 bundleID:(id)arg3;
- (id)clearOverridesForBundleID:(id)arg1;
- (id)completeAskToBuyRequestWithResponse:(bool)arg1 transactionID:(unsigned long long)arg2 forBundleID:(id)arg3;
- (id)completePriceConsentRequestWithResponse:(bool)arg1 transactionIdentifier:(unsigned long long)arg2 forBundleID:(id)arg3;
- (id)deleteAllTransactionsForBundleID:(id)arg1;
- (id)deleteTransactionWithIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2;
- (id)expireOrRenewSubscriptionWithIdentifier:(id)arg1 expire:(bool)arg2 forBundleID:(id)arg3;
- (id)generateSKANPostbackSignature:(id)arg1;
- (long long)getIntegerValueForIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2;
- (id)getStorefrontForBundleID:(id)arg1;
- (id)getStringValueForIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2;
- (id)getTransactionDataForBundleID:(id)arg1;
- (id)init;
- (id)messageForBundleID:(id)arg1;
- (id)messageOfTypeForBundleID:(id)arg1 messageReason:(id)arg2;
- (id)refundTransactionWithIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2;
- (id)registerForEventOfType:(long long)arg1 withFilterData:(id)arg2;
- (id)resolveIssueForTransactionWithIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2;
- (id)setIntegerValue:(long long)arg1 forIdentifier:(unsigned long long)arg2 forBundleID:(id)arg3;
- (void)setStoreKitError:(long long)arg1 forCategory:(long long)arg2 bundleID:(id)arg3;
- (id)setStorefront:(id)arg1 forBundleID:(id)arg2;
- (id)setStringValue:(id)arg1 forIdentifier:(unsigned long long)arg2 forBundleID:(id)arg3;
- (id)startPriceIncreaseForTransactionID:(unsigned long long)arg1 bundleID:(id)arg2 needsConsent:(bool)arg3;
- (long long)storeKitErrorForCategory:(long long)arg1 bundleID:(id)arg2;
- (void)unregisterForEventWithIdentifier:(id)arg1;
- (void)useConfigurationDirectory:(id)arg1 forBundleID:(id)arg2;
- (id)validateSKAdNetworkSignature:(id)arg1 withPublicKey:(id)arg2 source:(long long)arg3 andParameters:(id)arg4 forBundleID:(id)arg5;

@end
