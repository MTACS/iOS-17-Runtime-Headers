
@interface PreviewsInjection.UVPreviewNonUIAgent : PreviewsInjection.UVPreviewAgent <UVAgentPreviewNonUIServiceProtocol> {
    void serviceConnection;
}

- (void).cxx_destruct;
- (id)init;
- (void)performUpdate:(id)arg1 replyHandler:(id /* block */)arg2;

@end
