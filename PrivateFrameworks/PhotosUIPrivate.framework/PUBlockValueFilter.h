
@interface PUBlockValueFilter : PUValueFilter {
    id /* block */  _operationBlock;
}

@property (nonatomic, copy) id /* block */ operationBlock;

- (void).cxx_destruct;
- (id /* block */)operationBlock;
- (void)setOperationBlock:(id /* block */)arg1;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end
