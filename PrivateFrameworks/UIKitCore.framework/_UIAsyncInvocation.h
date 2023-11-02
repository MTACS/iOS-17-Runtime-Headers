
@interface _UIAsyncInvocation : NSObject {
    id /* block */  _invocationBlock;
    _Atomic bool  _invocationBlockHasBeenCalled;
    _Atomic long long  _invokeCallCount;
    _Atomic void * _observer;
}

+ (id)emptyInvocation;
+ (id)invocationWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)invoke;

@end
