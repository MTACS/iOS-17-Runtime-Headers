
@protocol PFTimeService <NSObject>

@required

- (unsigned long long)clock_gettime_nsec_np:(int)arg1;
- (void)sleepForTimeInterval:(double)arg1;
- (double)timeIntervalSinceReferenceDate;

@end
