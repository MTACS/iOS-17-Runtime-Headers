
@interface IDSRateLimiter : NSObject {
    NSMutableDictionary * _cacheMap;
    long long  _limit;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    double  _timeLimit;
}

@property (nonatomic, retain) NSMutableDictionary *cacheMap;
@property (nonatomic) long long limit;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic) double timeLimit;

- (void).cxx_destruct;
- (id)_unlockedDescription;
- (id)cacheMap;
- (void)cleanupExpiredItems;
- (void)clearAllItems;
- (void)clearItem:(id)arg1;
- (id)description;
- (id)initWithLimit:(long long)arg1 timeLimit:(double)arg2;
- (long long)limit;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)noteItem:(id)arg1;
- (void)setCacheMap:(id)arg1;
- (void)setLimit:(long long)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setTimeLimit:(double)arg1;
- (double)timeLimit;
- (double)timeToUnderLimit:(id)arg1;
- (bool)underLimitForItem:(id)arg1;

@end
