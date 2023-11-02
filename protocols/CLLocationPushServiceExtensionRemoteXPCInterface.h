
@protocol CLLocationPushServiceExtensionRemoteXPCInterface

@required

- (void)didReceiveLocationPushPayload:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)serviceExtensionPerformCleanup;
- (void)serviceExtensionWillTerminate;

@end
