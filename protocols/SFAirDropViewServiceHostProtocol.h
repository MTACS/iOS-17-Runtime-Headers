
@protocol SFAirDropViewServiceHostProtocol <NSObject>

@required

- (void)airDropViewServiceDidFinishTransferWithSuccess:(bool)arg1;
- (void)airDropViewServiceDidRequestDismissal;
- (void)airDropViewServiceDidStartTransfer;
- (void)airDropViewServiceRequestingSendingAppBundleIdentifierWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)airDropViewServiceRequestingSharedItemsWithDataRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: UISUIActivityExtensionItemDataRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UISUIActivityExtensionItemData *, void*
- (void)airDropViewServiceWillStartTransferToRecipient:(SFShareSheetRecipient *)arg1;

@end
