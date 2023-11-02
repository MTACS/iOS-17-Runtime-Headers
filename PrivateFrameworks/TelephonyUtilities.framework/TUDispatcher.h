
@interface TUDispatcher : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)dispatcherWithIdentifier:(id)arg1;
+ (id)dispatcherWithQueue:(id)arg1;

- (void).cxx_destruct;
- (void)boostQualityOfService;
- (void)dispatchAsynchronousBlock:(id /* block */)arg1;
- (id)dispatchQueue;
- (void)dispatchSynchronousBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id /* block */)qosUserInteractiveDispatchBlockForBlock:(id /* block */)arg1;

@end
