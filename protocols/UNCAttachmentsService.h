
@protocol UNCAttachmentsService <NSObject>

@required

- (UNNotificationRequest *)resolveAttachmentsForRequest:(UNNotificationRequest *)arg1 bundleIdentifier:(NSString *)arg2 fromLocalClientConnection:(NSXPCConnection *)arg3 error:(id*)arg4;
- (UNNotificationRequest *)resolveAttachmentsSkippingErrorsForRequest:(UNNotificationRequest *)arg1 bundleIdentifier:(NSString *)arg2 fromBundleProxyForServiceExtension:(LSBundleProxy *)arg3;

@end
