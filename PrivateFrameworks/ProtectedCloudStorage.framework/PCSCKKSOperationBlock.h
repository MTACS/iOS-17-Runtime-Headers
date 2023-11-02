
@interface PCSCKKSOperationBlock : PCSCKKSOperation {
    id /* block */  _block;
}

@property (copy) id /* block */ block;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (void)start;

@end
