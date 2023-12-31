
@interface NFPendingPromise : NSObject {
    NFPromise * _promise;
    id /* block */  _reject;
    id /* block */  _resolve;
}

@property (nonatomic, retain) NFPromise *promise;
@property (nonatomic, copy) id /* block */ reject;
@property (nonatomic, copy) id /* block */ resolve;

- (void).cxx_destruct;
- (id)init;
- (id)promise;
- (id /* block */)reject;
- (id /* block */)resolve;
- (void)setPromise:(id)arg1;
- (void)setReject:(id /* block */)arg1;
- (void)setResolve:(id /* block */)arg1;

@end
