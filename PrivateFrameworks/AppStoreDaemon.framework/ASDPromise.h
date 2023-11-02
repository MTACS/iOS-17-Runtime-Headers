
@interface ASDPromise : NSObject {
    NSMutableArray * _observers;
    ASDPromiseResult * _result;
    long long  _state;
    NSRecursiveLock * _stateLock;
}

@property (getter=isResolved, readonly) bool resolved;
@property (readonly) ASDPromiseResult *result;

+ (id)onScheduler:(id)arg1 usingBlock:(id /* block */)arg2;
+ (id)promiseWithError:(id)arg1;
+ (id)promiseWithValue:(id)arg1;

- (void).cxx_destruct;
- (void)alwaysPerform:(id /* block */)arg1 onScheduler:(id)arg2;
- (void)catchError:(id /* block */)arg1 onScheduler:(id)arg2;
- (id /* block */)completionHandlerAdapter;
- (id)flatMapUsingTransformer:(id /* block */)arg1 onScheduler:(id)arg2;
- (id)init;
- (id)initOnScheduler:(id)arg1 withExecutor:(id /* block */)arg2;
- (id)initWithError:(id)arg1;
- (id)initWithValue:(id)arg1;
- (bool)isResolved;
- (id)joinWithPromise:(id)arg1;
- (id)mapUsingTransformer:(id /* block */)arg1 onScheduler:(id)arg2;
- (void)rejectWithError:(id)arg1;
- (void)resolveWithValue:(id)arg1;
- (id)result;
- (void)thenPerform:(id /* block */)arg1 orCatchError:(id /* block */)arg2 onScheduler:(id)arg3;

@end
