
@interface HMBFutureOperation : HMFOperation {
    id /* block */  _block;
    NAFuture * _future;
}

@property (readonly, copy) id /* block */ block;
@property (readonly) NAFuture *future;

+ (id)logCategory;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)cancelWithError:(id)arg1;
- (id)future;
- (id)initWithBlock:(id /* block */)arg1;
- (void)main;

@end
