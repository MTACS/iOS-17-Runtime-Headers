
@interface HKRateLimiter : NSObject {
    NSMutableArray * _history;
    unsigned long long  _limit;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    double  _timeInterval;
}

@property (readonly) unsigned long long limit;
@property (readonly) double timeInterval;

- (void).cxx_destruct;
- (id)initWithLimit:(unsigned long long)arg1 timeInterval:(double)arg2;
- (unsigned long long)limit;
- (bool)perform:(id /* block */)arg1 cost:(unsigned long long)arg2;
- (double)timeInterval;

@end
