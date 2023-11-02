
@interface ACSimpleRateLimiter : NSObject {
    NSLock * _instanceLock;
    unsigned long long  _maximum;
    NSMutableArray * _sortedActionDates;
    double  _timeInterval;
}

@property (retain) NSLock *instanceLock;
@property (readonly) unsigned long long maximum;
@property (readonly) NSDate *rateLimitingStartDate;
@property (retain) NSMutableArray *sortedActionDates;
@property (readonly) double timeInterval;

- (void).cxx_destruct;
- (id)initWithMaximum:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (id)instanceLock;
- (bool)isEmptyAfterFlushing;
- (void)locked_addDate:(id)arg1;
- (unsigned long long)locked_indexOfFirstAfter:(id)arg1;
- (void)locked_removeDatesBefore:(id)arg1;
- (unsigned long long)maximum;
- (id)rateLimitingStartDate;
- (bool)reservePerformActionNow;
- (void)setInstanceLock:(id)arg1;
- (void)setSortedActionDates:(id)arg1;
- (id)sortedActionDates;
- (double)timeInterval;

@end
