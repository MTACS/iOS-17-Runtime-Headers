
@interface ChronoKit.RemoteWidgetExtensionSession : _TtCs12_SwiftObject <WidgetKit.WidgetExtensionSession> {
    void $__lazy_storage_$_loggingIdentifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  dataProtectionLevel;
    void extensionIdentity;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identifier;
    void protectedDescriptors;
}

- (void)attachPreviewAgentWithFrameworkPath:(id)arg1 endpoint:(id)arg2 handler:(id /* block */)arg3;
- (void)getActivitiesWithRequests:(id)arg1 completion:(id /* block */)arg2;
- (void)getAllCurrentDescriptorsWithCompletion:(id /* block */)arg1;
- (void)getAppIntentsXPCListenerEndpointWithCompletion:(id /* block */)arg1;
- (void)getCurrentDescriptorsWithCompletion:(id /* block */)arg1;
- (void)getDescriptorsWithCompletion:(id /* block */)arg1;
- (void)getPlaceholdersForRequests:(id)arg1 inEnvironment:(id)arg2 completion:(id /* block */)arg3;
- (void)getPlaceholdersWithEnvironment:(id)arg1 for:(id)arg2 completion:(id /* block */)arg3;
- (void)getPlaceholdersWithRequests:(id)arg1 completion:(id /* block */)arg2;
- (void)getTimelineFor:(id)arg1 into:(id)arg2 environment:(id)arg3 isPreview:(bool)arg4 completion:(id /* block */)arg5;
- (void)getTimelinesWithRequests:(id)arg1 isPreview:(bool)arg2 completion:(id /* block */)arg3;
- (void)handleURLSessionEventsFor:(id)arg1 completion:(id /* block */)arg2;
- (void)invalidate;

@end
