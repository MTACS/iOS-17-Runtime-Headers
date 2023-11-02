
@protocol NPKCompanionViewServiceConnectionClientProtocol <PDXPCServiceExportedInterface>

@required

- (void)handleCompanionItemSelectionRequestCancelledForRequestIdentifier:(NSString *)arg1;
- (void)handleCompanionItemSelectionRequestFinishedWithRenewalAmount:(PKCurrencyAmount *)arg1 serviceProviderData:(NSDictionary *)arg2 forRequestIdentifier:(NSString *)arg3;
- (void)handleCompanionValueEntryCancelledForRequestIdentifier:(NSString *)arg1;
- (void)handleCompanionValueEntryFinishedWithCurrencyAmount:(PKCurrencyAmount *)arg1 forRequestIdentifier:(NSString *)arg2;

@end
