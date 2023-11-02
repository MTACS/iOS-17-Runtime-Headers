
@interface ICMusicSubscriptionRecommendationsRequest : ICRequestOperation {
    bool  _isLibraryID;
    long long  _maxResultCount;
    ICStoreRequestContext * _requestContext;
    NSArray * _resultsList;
    long long  _seedItemID;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithRequestContext:(id)arg1 seedItemID:(long long)arg2 isLibraryID:(bool)arg3 maxResultCount:(long long)arg4;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;

@end
