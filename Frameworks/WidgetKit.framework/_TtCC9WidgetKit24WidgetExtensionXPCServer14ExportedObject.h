
@interface _TtCC9WidgetKit24WidgetExtensionXPCServer14ExportedObject : NSObject <WidgetKit.HostToExtensionXPCInterface> {
    void _queue;
    void previewAgent;
    void urlHandlers;
    void xpcConnection;
}

- (void).cxx_destruct;
- (void)attachPreviewAgentWithFrameworkPath:(id)arg1 endpoint:(id)arg2 handler:(id /* block */)arg3;
- (void)getActivitiesWithRequests:(id)arg1 completion:(id /* block */)arg2;
- (void)getAllCurrentDescriptorsWithCompletion:(id /* block */)arg1;
- (void)getAppIntentsXPCListenerEndpointWithCompletion:(id /* block */)arg1;
- (void)getCurrentDescriptorsWithCompletion:(id /* block */)arg1;
- (void)getPlaceholdersWithRequests:(id)arg1 completion:(id /* block */)arg2;
- (void)getTimelinesWithRequests:(id)arg1 isPreview:(bool)arg2 completion:(id /* block */)arg3;
- (void)handleURLSessionEventsFor:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)invalidate;
- (void)performCleanup;

@end
