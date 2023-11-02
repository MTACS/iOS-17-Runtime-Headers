
@interface MADServiceVideoTask : NSObject {
    MADVideoRequest * _request;
}

@property (nonatomic, readonly) MADVideoRequest *request;

+ (id)taskForRequest:(id)arg1;

- (void).cxx_destruct;
- (void)configureVideoProcessor:(id)arg1;
- (id)finalize;
- (id)initWithRequest:(id)arg1;
- (id)request;

@end
