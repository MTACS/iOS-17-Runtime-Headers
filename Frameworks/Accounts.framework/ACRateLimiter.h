
@interface ACRateLimiter : NSObject {
    NSObject<OS_dispatch_queue> * _instanceQueue;
    bool  _isVacuumInProgress;
    NSMutableDictionary * _keyToSimpleRateLimiter;
    unsigned long long  _maximum;
    NSDate * _nextVacuumDate;
    double  _timeInterval;
    NSObject<OS_dispatch_queue> * _vacuumQueue;
    double  _vacuumTimeInterval;
}

@property (readonly) NSObject<OS_dispatch_queue> *instanceQueue;
@property bool isVacuumInProgress;
@property (retain) NSMutableDictionary *keyToSimpleRateLimiter;
@property (readonly) unsigned long long maximum;
@property (retain) NSDate *nextVacuumDate;
@property (readonly) double timeInterval;
@property (readonly) NSObject<OS_dispatch_queue> *vacuumQueue;
@property (readonly) double vacuumTimeInterval;

- (void).cxx_destruct;
- (void)_vacuumQueue_vacuum;
- (bool)_vacuumQueue_vacuumKey:(id)arg1;
- (id)initWithMaximum:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (id)instanceQueue;
- (bool)isVacuumInProgress;
- (id)keyToSimpleRateLimiter;
- (unsigned long long)maximum;
- (id)nextVacuumDate;
- (bool)reservePerformActionForKey:(id)arg1;
- (void)setIsVacuumInProgress:(bool)arg1;
- (void)setKeyToSimpleRateLimiter:(id)arg1;
- (void)setNextVacuumDate:(id)arg1;
- (id)simpleRateLimiterForKey:(id)arg1;
- (double)timeInterval;
- (void)vacuumIfNeeded;
- (id)vacuumQueue;
- (double)vacuumTimeInterval;

@end
