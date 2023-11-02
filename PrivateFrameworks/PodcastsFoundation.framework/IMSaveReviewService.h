
@interface IMSaveReviewService : IMBaseStoreService {
    NSData * _bodyData;
    NSURL * _endpointURL;
}

@property (nonatomic, retain) NSData *bodyData;
@property (nonatomic, retain) NSURL *endpointURL;

- (void).cxx_destruct;
- (id)bodyData;
- (id)endpointURL;
- (id)generatedEndpointURLForBaseURL:(id)arg1;
- (id)initWithEndpointURL:(id)arg1 bodyData:(id)arg2;
- (void)performDataRequestWithCompletion:(id /* block */)arg1;
- (void)setBodyData:(id)arg1;
- (void)setEndpointURL:(id)arg1;
- (id)urlRequest;

@end
