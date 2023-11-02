
@interface NPResolver : NWResolver {
    id /* block */  _resolveCompletionHandler;
    NSObject<OS_dispatch_source> * _resolveTimer;
}

@property (copy) id /* block */ resolveCompletionHandler;
@property (retain) NSObject<OS_dispatch_source> *resolveTimer;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id /* block */)resolveCompletionHandler;
- (id)resolveTimer;
- (void)resolveWithCompletionHandler:(id /* block */)arg1;
- (void)setResolveCompletionHandler:(id /* block */)arg1;
- (void)setResolveTimer:(id)arg1;

@end
