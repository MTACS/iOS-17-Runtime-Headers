
@protocol SFAirDropViewControllerDelegate <NSObject>

@required

- (void)airDropViewController:(SFAirDropViewController *)arg1 didFinishTransferWithSuccess:(bool)arg2;
- (void)airDropViewController:(void *)arg1 requestSendingAppBundleIdentifierWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: SFAirDropViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)airDropViewController:(void *)arg1 requestSharedItemsWithDataRequest:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: SFAirDropViewController *, UISUIActivityExtensionItemDataRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UISUIActivityExtensionItemData *, void*
- (void)airDropViewControllerDidStartTransfer:(SFAirDropViewController *)arg1;
- (void)airDropViewServiceWillStartTransfer:(SFAirDropViewController *)arg1 toRecipient:(SFShareSheetRecipient *)arg2;

@optional

- (void)airDropViewControllerDidDismiss:(SFAirDropViewController *)arg1;

@end
