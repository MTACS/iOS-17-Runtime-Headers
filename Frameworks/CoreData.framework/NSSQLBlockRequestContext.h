
@interface NSSQLBlockRequestContext : NSSQLStoreRequestContext {
    id /* block */  _workBlock;
}

- (void)dealloc;
- (bool)executeRequestCore:(id*)arg1;
- (id)initWithBlock:(id /* block */)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (bool)isWritingRequest;

@end
