
@interface ATXGlobalAppModeAffinityPrior : NSObject {
    NSString * _bundleId;
    unsigned long long  _mode;
    double  _prior;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) double prior;

- (void).cxx_destruct;
- (id)bundleId;
- (id)initWithMode:(unsigned long long)arg1 prior:(double)arg2 bundleId:(id)arg3;
- (unsigned long long)mode;
- (double)prior;
- (void)setBundleId:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setPrior:(double)arg1;

@end
