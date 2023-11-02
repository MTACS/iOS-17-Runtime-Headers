
@protocol WidgetKit.WidgetExtensionSession

@required

- (void)attachPreviewAgentWithFrameworkPath:(void *)arg1 endpoint:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: NSString *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BSAuditToken *, NSError *, void*
- (void)getActivitiesWithRequests:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getAllCurrentDescriptorsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC9WidgetKit21DescriptorFetchResult *, NSError *, void*
- (void)getAppIntentsXPCListenerEndpointWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, NSData *, NSError *, void*
- (void)getCurrentDescriptorsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getDescriptorsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getPlaceholdersForRequests:(void *)arg1 inEnvironment:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, CHKWidgetEnvironment *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getPlaceholdersWithEnvironment:(void *)arg1 for:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CHKWidgetEnvironment *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getPlaceholdersWithRequests:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getTimelineFor:(void *)arg1 into:(void *)arg2 environment:(void *)arg3 isPreview:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: CHSWidget *, NSFileHandle *, CHKWidgetEnvironment *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getTimelinesWithRequests:(void *)arg1 isPreview:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)handleURLSessionEventsFor:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)invalidate;

@optional

- (int)pid;

@end
