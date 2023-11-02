
@interface LNDeallocationHandler : NSObject {
    id /* block */  _deallocationHandler;
    id  _object;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithObject:(id)arg1 deallocationHandler:(id /* block */)arg2;

@end
