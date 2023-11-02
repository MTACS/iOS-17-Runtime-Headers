
@interface _COMediaSystemLeaderObserver : NSObject {
    id /* block */  _block;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
}

@property (nonatomic, readonly, copy) id /* block */ block;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)dispatchQueue;
- (id)initWithDispatchQueue:(id)arg1 block:(id /* block */)arg2;

@end
