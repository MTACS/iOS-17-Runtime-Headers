
@interface HMFPromise : NSObject {
    id /* block */  _completion;
    HMFAsyncFuture * _future;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _resolved;
}

@property (readonly, copy) id /* block */ errorOnlyResolverBlock;
@property (readonly, copy) id /* block */ resolverBlock;
@property (readonly, copy) id /* block */ voidResolverBlock;

- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)errorOnlyResolverBlock;
- (bool)fulfillWithNoValue;
- (bool)fulfillWithValue:(id)arg1;
- (bool)rejectWithError:(id)arg1;
- (bool)resolveWithFuture:(id)arg1;
- (id /* block */)resolverBlock;
- (id /* block */)voidResolverBlock;

@end
