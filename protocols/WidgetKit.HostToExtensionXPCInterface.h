
@protocol WidgetKit.HostToExtensionXPCInterface

@required

- (void)attachPreviewAgentWithFrameworkPath:(void *)arg1 endpoint:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: NSString *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BSAuditToken *, void*
- (void)getActivitiesWithRequests:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getAllCurrentDescriptorsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC9WidgetKit21DescriptorFetchResult *, void*
- (void)getAppIntentsXPCListenerEndpointWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, NSData *, NSError *, void*
- (void)getCurrentDescriptorsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getPlaceholdersWithRequests:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getTimelinesWithRequests:(void *)arg1 isPreview:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)handleURLSessionEventsFor:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)invalidate;
- (void)performCleanup;

@end
