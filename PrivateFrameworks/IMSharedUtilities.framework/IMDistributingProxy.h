
@interface IMDistributingProxy : NSProxy {
    bool  _asynchronous;
    id /* block */  _filterBlock;
    NSObject<OS_dispatch_queue> * _targetQueue;
    NSArray * _targets;
}

@property (getter=isAsynchronous, nonatomic, readonly) bool asynchronous;
@property (nonatomic, readonly, copy) id /* block */ filterBlock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *targetQueue;
@property (nonatomic, readonly, copy) NSArray *targets;

- (void).cxx_destruct;
- (id /* block */)filterBlock;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTargets:(id)arg1;
- (id)initWithTargets:(id)arg1 targetQueue:(id)arg2 asynchronous:(bool)arg3 filterBlock:(id /* block */)arg4;
- (bool)isAsynchronous;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)targetQueue;
- (id)targets;

@end
