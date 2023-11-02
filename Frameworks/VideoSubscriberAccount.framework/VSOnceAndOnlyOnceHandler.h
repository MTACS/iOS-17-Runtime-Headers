
@interface VSOnceAndOnlyOnceHandler : NSObject {
    id /* block */  _block;
    int  _counter;
}

@property (nonatomic, copy) id /* block */ block;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)dealloc;
- (void)invoke;
- (void)setBlock:(id /* block */)arg1;

@end
