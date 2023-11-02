
@interface PreviewsOSSupport.ServiceHubPreviewService : NSObject <UVServiceHubService> {
    void invalidationHandle;
    void shellConnection;
}

- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)cancel;
- (id)init;
- (void)observeCancelation:(id /* block */)arg1;

@end
