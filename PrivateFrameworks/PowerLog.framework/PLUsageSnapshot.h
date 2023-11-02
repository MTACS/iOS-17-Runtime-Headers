
@interface PLUsageSnapshot : NSObject {
    double  _cpuUsage;
    NSDate * _timestamp;
}

@property double cpuUsage;
@property (retain) NSDate *timestamp;

- (void).cxx_destruct;
- (double)cpuUsage;
- (id)description;
- (void)setCpuUsage:(double)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;

@end
