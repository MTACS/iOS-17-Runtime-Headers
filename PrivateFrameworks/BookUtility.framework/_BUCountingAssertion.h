
@interface _BUCountingAssertion : NSObject <BUAssertion> {
    id /* block */  _block;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 block:(id /* block */)arg2;
- (void)invalidate;

@end
