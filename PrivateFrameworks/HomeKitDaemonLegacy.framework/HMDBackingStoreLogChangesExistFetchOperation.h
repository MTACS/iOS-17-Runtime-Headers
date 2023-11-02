
@interface HMDBackingStoreLogChangesExistFetchOperation : HMDBackingStoreOperation {
    long long  _compareValue;
    id /* block */  _fetchBlock;
    long long  _maskValue;
}

@property (nonatomic) long long compareValue;
@property (nonatomic, copy) id /* block */ fetchBlock;
@property (nonatomic) long long maskValue;

- (void).cxx_destruct;
- (long long)compareValue;
- (id /* block */)fetchBlock;
- (id)initWithNeedsPushTo:(unsigned long long)arg1 result:(id /* block */)arg2;
- (id)mainReturningError;
- (long long)maskValue;
- (void)setCompareValue:(long long)arg1;
- (void)setFetchBlock:(id /* block */)arg1;
- (void)setMaskValue:(long long)arg1;

@end
