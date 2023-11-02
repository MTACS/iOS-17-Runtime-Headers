
@interface __NSObserver : NSObject {
    id /* block */  _block;
    unsigned long long  _token;
    NSNotificationCenter * nc;
}

@property (copy) id /* block */ block;
@property unsigned long long token;

- (id /* block */)block;
- (void)dealloc;
- (void)setBlock:(id /* block */)arg1;
- (void)setToken:(unsigned long long)arg1;
- (unsigned long long)token;

@end
