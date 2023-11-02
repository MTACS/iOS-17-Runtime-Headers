
@interface CVNLPPerformanceResult : NSObject {
    NSString * _name;
    double  cpuInstructions;
    double  cpuTime;
    double  current;
    double  maxpeak;
    double  peakdelta;
    double  recentpeak;
    double  timeInterval;
}

@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)description;
- (id)dict;
- (id)initWithName:(id)arg1;
- (id)name;

@end
