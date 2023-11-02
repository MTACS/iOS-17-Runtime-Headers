
@interface QLAsynchronousBlockOperation : QLAsynchronousOperation {
    id /* block */  _block;
}

@property (nonatomic, copy) id /* block */ block;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)initWithBlock:(id /* block */)arg1;
- (void)main;
- (void)setBlock:(id /* block */)arg1;

@end
