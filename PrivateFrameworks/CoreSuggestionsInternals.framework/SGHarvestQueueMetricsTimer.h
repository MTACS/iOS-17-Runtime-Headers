
@interface SGHarvestQueueMetricsTimer : NSObject {
    double  _cpu;
    unsigned long long  _cpuEnd;
    unsigned long long  _cpuStart;
    double  _duration;
    unsigned long long  _durationStart;
    NSString * _name;
    bool  _significantWork;
    unsigned long long  _signpostId;
}

@property (nonatomic, readonly) double cpu;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool significantWork;

- (void).cxx_destruct;
- (void)applyAdjustmentIfSane:(id)arg1;
- (double)cpu;
- (id)description;
- (void)done:(bool)arg1;
- (double)duration;
- (id)initWithName:(id)arg1;
- (id)name;
- (bool)significantWork;

@end
