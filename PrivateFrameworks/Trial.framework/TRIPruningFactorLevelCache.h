
@interface TRIPruningFactorLevelCache : NSObject <TRIFactorLevelCaching> {
    _PASLock * _lock;
    double  _pruningDelaySeconds;
    _PASSimpleCoalescingTimer * _pruningTimer;
}

- (void).cxx_destruct;
- (void)_populateCacheForRequiredKey:(id)arg1 guardedData:(id)arg2;
- (void)enumerateFactorLevelsUsingBlock:(id /* block */)arg1;
- (id)factorLevelCurrentlyCachedForFactorName:(id)arg1;
- (id)init;
- (id)initWithPruningDelaySeconds:(double)arg1 loadFactorLevels:(id /* block */)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)pruneSynchronously;

@end
