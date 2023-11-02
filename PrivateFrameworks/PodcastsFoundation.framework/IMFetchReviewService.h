
@interface IMFetchReviewService : IMBaseStoreService {
    NSString * _adamID;
}

@property (nonatomic, retain) NSString *adamID;

- (void).cxx_destruct;
- (id)adamID;
- (id)initWithAdamID:(id)arg1;
- (void)performDataRequestWithCompletion:(id /* block */)arg1;
- (void)setAdamID:(id)arg1;
- (id)urlRequest;

@end
