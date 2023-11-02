
@interface SUUIJSApplication : IKJSApplication <SUUIJSApplication> {
    SUUIApplicationController * _applicationController;
}

@property (nonatomic, readonly) SUUIApplicationController *applicationController;
@property (readonly) bool isRunningTests;
@property (nonatomic, readonly) bool pageRenderMetricsEnabled;

- (void).cxx_destruct;
- (id)applicationController;
- (id)initWithAppContext:(id)arg1 applicationController:(id)arg2;
- (bool)isRunningTests;
- (void)launchComplete:(id)arg1;
- (void)launchFailed;
- (bool)pageRenderMetricsEnabled;
- (void)sendDocumentMessage:(id)arg1 :(id)arg2 :(id)arg3;

@end
