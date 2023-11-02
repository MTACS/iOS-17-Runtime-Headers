
@interface MTRecommendationModulesRequest : MTBaseMAPIRequest <MTMAPIRequest> {
    void context;
    void kPayloadDataFetchLimit;
    void moduleIDs;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithModuleIDs:(id)arg1;
- (void)performWithCompletion:(id /* block */)arg1;

@end
