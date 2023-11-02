
@interface PFLCKNetworkHandler : NSObject <PFLNetworkHandler>

- (void)downloadConfigurationWithCompletion:(id /* block */)arg1;
- (void)downloadModelForTask:(id)arg1 completion:(id /* block */)arg2;
- (void)uploadResultsForIdentifier:(id)arg1 deviceResults:(id)arg2 completion:(id /* block */)arg3;

@end
