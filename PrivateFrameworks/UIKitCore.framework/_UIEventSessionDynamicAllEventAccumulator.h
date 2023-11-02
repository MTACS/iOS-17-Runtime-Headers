
@interface _UIEventSessionDynamicAllEventAccumulator : _UIEventSessionAccumulator {
    <_UIEventSessionDynamicAccumulatorDelegate> * _delegate;
}

@property (nonatomic) <_UIEventSessionDynamicAccumulatorDelegate> *delegate;

+ (id)accumulatorWithName:(id)arg1 depth:(unsigned long long)arg2 block:(id /* block */)arg3 delegate:(id)arg4 allowedActionSourceTypes:(id)arg5;

- (void).cxx_destruct;
- (id)delegate;
- (void)enumerateAnalytics:(id /* block */)arg1;
- (void)performIncreaseWithActions:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
