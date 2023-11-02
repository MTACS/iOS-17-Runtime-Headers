
@interface MTBaseFeedRequest : MTBaseMAPIRequest <MTMAPIRequest> {
    void showMetadata;
    void storeID;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithStoreID:(long long)arg1;
- (void)performWithCompletion:(id /* block */)arg1;

@end
