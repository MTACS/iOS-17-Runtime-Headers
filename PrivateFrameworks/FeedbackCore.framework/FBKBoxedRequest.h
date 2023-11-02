
@interface FBKBoxedRequest : NSObject {
    id /* block */  _errorBlock;
    NSURLRequest * _request;
    id /* block */  _successBlock;
}

@property (nonatomic, copy) id /* block */ errorBlock;
@property (nonatomic, retain) NSURLRequest *request;
@property (nonatomic, copy) id /* block */ successBlock;

- (void).cxx_destruct;
- (id /* block */)errorBlock;
- (id)initWithRequest:(id)arg1 successBlock:(id /* block */)arg2 errorBlock:(id /* block */)arg3;
- (id)request;
- (void)setErrorBlock:(id /* block */)arg1;
- (void)setRequest:(id)arg1;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)successBlock;

@end
