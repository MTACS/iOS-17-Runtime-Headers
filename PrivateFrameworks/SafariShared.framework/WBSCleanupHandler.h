
@interface WBSCleanupHandler : NSObject {
    id /* block */  _block;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)arg1;
- (void)invalidate;

@end
