
@interface CHIntegrationTestClient : NSObject <CHIntegrationTestProtocol> {
    CHXPCClientHelper * _clientHelper;
}

- (void).cxx_destruct;
- (id)init;
- (void)populateSampleAppLaunchEmbeddingWithCompletion:(id /* block */)arg1;

@end
