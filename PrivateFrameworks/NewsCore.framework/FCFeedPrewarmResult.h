
@interface FCFeedPrewarmResult : NSObject {
    NSArray * _failedRequests;
    NSArray * _successfulRequests;
}

@property (nonatomic, readonly) NSArray *failedRequests;
@property (nonatomic, readonly) NSArray *successfulRequests;

- (void).cxx_destruct;
- (id)failedRequests;
- (id)initWithSuccessfulRequests:(id)arg1 failedRequests:(id)arg2;
- (id)successfulRequests;

@end
