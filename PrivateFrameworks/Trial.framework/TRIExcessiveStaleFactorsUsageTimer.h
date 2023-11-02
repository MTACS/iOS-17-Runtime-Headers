
@interface TRIExcessiveStaleFactorsUsageTimer : NSObject {
    _PASLock * _lock;
}

- (void).cxx_destruct;
- (id)initWithNamespaceName:(id)arg1 delayTimeInSeconds:(double)arg2 block:(id /* block */)arg3;
- (void)invalidate;

@end
