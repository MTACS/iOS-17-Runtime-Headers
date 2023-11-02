
@interface _GCDisposable : NSObject {
    id /* block */  _handler;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCleanupHandler:(id /* block */)arg1;

@end
