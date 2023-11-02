
@interface _UITextInputSessionDynamicAccumulator : _UITextInputSessionAccumulator {
    id /* block */  _dynamicAccumulatorIncreaseBlock;
    NSArray * _lastResults;
}

@property (nonatomic, copy) id /* block */ dynamicAccumulatorIncreaseBlock;
@property (nonatomic, readonly) NSArray *lastResults;

+ (id)accumulatorWithName:(id)arg1 depthRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 block:(id /* block */)arg3;

- (void).cxx_destruct;
- (id /* block */)dynamicAccumulatorIncreaseBlock;
- (void)enumerateAnalytics:(id /* block */)arg1;
- (void)increaseWithActions:(id)arg1;
- (id)lastResults;
- (void)setDynamicAccumulatorIncreaseBlock:(id /* block */)arg1;

@end
