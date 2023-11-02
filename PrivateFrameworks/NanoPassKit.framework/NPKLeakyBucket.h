
@interface NPKLeakyBucket : NSObject {
    NSString * _description;
    NSTimer * _eventTimer;
    NSMutableArray * _events;
    double  _eventsTimeInterval;
    NSDate * _lastLeakedEventDate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _maxBucketSize;
}

@property (nonatomic, readonly) double eventsTimeInterval;
@property (nonatomic, readonly) unsigned long long maxBucketSize;

+ (id)throttleWithEventsTimeInterval:(double)arg1 description:(id)arg2;

- (void).cxx_destruct;
- (void)_insideLock_scheduleNextEventLeakFromReferenceDate:(id)arg1;
- (bool)addEvent:(id /* block */)arg1;
- (void)dealloc;
- (double)eventsTimeInterval;
- (void)flush;
- (id)initWithEventsTimeInterval:(double)arg1 maxBucketSize:(unsigned long long)arg2 description:(id)arg3;
- (unsigned long long)maxBucketSize;

@end
