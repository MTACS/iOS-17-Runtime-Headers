
@interface HDCoalescedTaskPoolQuota : NSObject <NSCopying> {
    long long  _availableQuotaAfterLastTrigger;
    double  _lastTrigger;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _maximumQuota;
    double  _minimumInterval;
    double  _quotaRefillInterval;
}

@property (nonatomic, readonly) long long availableQuota;
@property (nonatomic, readonly) double lastTrigger;
@property (nonatomic, readonly) long long maximumQuota;
@property (nonatomic, readonly) double minimumInterval;
@property (nonatomic, readonly) double quotaRefillInterval;
@property (nonatomic, readonly) double timeUntilNextAvailableTrigger;

- (long long)availableQuota;
- (void)consumeQuota;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAvailableQuota:(long long)arg1 maximumQuota:(long long)arg2 refillInterval:(double)arg3 minimumInterval:(double)arg4 lastTrigger:(double)arg5;
- (double)lastTrigger;
- (long long)maximumQuota;
- (double)minimumInterval;
- (double)quotaRefillInterval;
- (double)timeUntilNextAvailableTrigger;

@end
