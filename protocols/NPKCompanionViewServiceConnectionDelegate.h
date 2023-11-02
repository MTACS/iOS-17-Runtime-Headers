
@protocol NPKCompanionViewServiceConnectionDelegate <NSObject>

@required

- (void)companionViewServiceConnection:(NPKCompanionViewServiceConnection *)arg1 handleCompanionItemSelectionDidCancelForRequestIdentifier:(NSString *)arg2;
- (void)companionViewServiceConnection:(NPKCompanionViewServiceConnection *)arg1 handleCompanionItemSelectionDidFinishWithRenewalAmount:(PKCurrencyAmount *)arg2 serviceProviderData:(NSDictionary *)arg3 forRequestWithIdentifier:(NSString *)arg4;
- (void)companionViewServiceConnection:(NPKCompanionViewServiceConnection *)arg1 handleCompanionValueEntryDidCancelForRequestIdentifier:(NSString *)arg2;
- (void)companionViewServiceConnection:(NPKCompanionViewServiceConnection *)arg1 handleCompanionValueEntryDidFinishWithCurrencyAmount:(PKCurrencyAmount *)arg2 forRequestWithIdentifier:(NSString *)arg3;

@end
