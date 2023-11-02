
@interface PMLInMemoryCachedStore : PMLTrainingStore {
    PMLTrainingStoredSessionBatch * _cachedSessions;
}

+ (id)cachedStoreFromRealStore:(id)arg1 sessionDescriptor:(id)arg2 sessionsLimit:(unsigned long long)arg3;

- (void).cxx_destruct;
- (void)_openDbIfUnlocked;
- (void)_registerUnlockHandler;
- (id)initWithSessionBatch:(id)arg1;
- (void)loadSessionsForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(bool)arg4 positiveLabel:(unsigned long long)arg5 skew:(double)arg6 block:(id /* block */)arg7;

@end
