
@interface DTSysmonCPUUsageEntry : NSObject {
    double  _niceLoad;
    double  _systemLoad;
    double  _totalLoad;
    double  _userLoad;
}

@property (nonatomic) double niceLoad;
@property (nonatomic) double systemLoad;
@property (nonatomic) double totalLoad;
@property (nonatomic) double userLoad;

- (id)initWithTotal:(double)arg1 user:(double)arg2 system:(double)arg3 nice:(double)arg4;
- (double)niceLoad;
- (void)setNiceLoad:(double)arg1;
- (void)setSystemLoad:(double)arg1;
- (void)setTotalLoad:(double)arg1;
- (void)setUserLoad:(double)arg1;
- (double)systemLoad;
- (double)totalLoad;
- (double)userLoad;

@end
