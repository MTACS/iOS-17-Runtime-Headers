
@interface _CPLTimingStatistic : NSObject {
    unsigned long long  _batchCount;
    unsigned long long  _cancelCount;
    double  _duration;
    unsigned long long  _errorCount;
    unsigned long long  _recordCount;
}

- (id)description;
- (void)updateWithDuration:(double)arg1 recordCount:(unsigned long long)arg2 error:(bool)arg3 cancelled:(bool)arg4;

@end
