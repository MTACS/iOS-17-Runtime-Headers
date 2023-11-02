
@interface CHIntegrationTest : NSObject {
    NSObject<CHIntegrationTestProtocol> * _xpcClient;
}

- (void).cxx_destruct;
- (id)init;
- (void)populateSampleAppLaunchEmbeddingWithCompletion:(id /* block */)arg1;

@end
