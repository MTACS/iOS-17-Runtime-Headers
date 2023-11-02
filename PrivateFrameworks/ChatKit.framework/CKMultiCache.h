
@interface CKMultiCache : IMMultiDict {
    bool  _cacheEligibleForPrewarm;
    unsigned long long  _limit;
}

@property (nonatomic) bool cacheEligibleForPrewarm;
@property (nonatomic) unsigned long long limit;

- (bool)cacheEligibleForPrewarm;
- (void)dealloc;
- (id)init;
- (unsigned long long)limit;
- (void)markCacheAsPrewarmed;
- (void)pushObject:(id)arg1 forKey:(id)arg2;
- (void)removeAllObjects;
- (void)setCacheEligibleForPrewarm:(bool)arg1;
- (void)setLimit:(unsigned long long)arg1;

@end
