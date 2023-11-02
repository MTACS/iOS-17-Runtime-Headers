
@protocol MEComposeSessionHandler <NSObject>

@required

- (void)mailComposeSessionDidBegin:(MEComposeSession *)arg1;
- (void)mailComposeSessionDidEnd:(MEComposeSession *)arg1;
- (MEExtensionViewController *)viewControllerForSession:(MEComposeSession *)arg1;

@optional

- (NSDictionary *)additionalHeadersForSession:(MEComposeSession *)arg1;
- (void)session:(void *)arg1 annotateAddressesWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: MEComposeSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)session:(void *)arg1 canSendMessageWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: MEComposeSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
