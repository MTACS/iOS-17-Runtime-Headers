
@interface NewsPersonalization.AppUserEmbeddingManager : NSObject <NPUserEmbeddingGeneratorType> {
    void sessionDataProvider;
    void userEmbeddingConfigurationService;
    void userEmbeddingManager;
}

- (void).cxx_destruct;
- (void)generateUserEmbeddingIfNeededWithCompletion:(id /* block */)arg1;
- (id)init;

@end
