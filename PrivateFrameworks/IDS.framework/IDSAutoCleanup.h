
@interface IDSAutoCleanup : NSObject {
    int  _accessCount;
    id /* block */  _cleanupBlock;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)incrementAccessCount;
- (id)initWithBlock:(id /* block */)arg1;

@end
