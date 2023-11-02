
@interface FCFeedPrewarmer : NSObject {
    <FCContentContext> * _contentContext;
    FCThreadSafeMutableDictionary * _prewarmOperations;
}

@property (nonatomic, readonly) <FCContentContext> *contentContext;
@property (nonatomic, readonly) FCThreadSafeMutableDictionary *prewarmOperations;

- (void).cxx_destruct;
- (id)contentContext;
- (void)finishPrewarmingRequestForKey:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithContentContext:(id)arg1;
- (id)prewarmOperations;
- (void)startPrewarmingRequest:(id)arg1;

@end
