
@interface IMPerfProfiler : NSObject {
    NSMutableArray * _sinks;
}

+ (id)instance;

- (void).cxx_destruct;
- (void)addSink:(id)arg1 withBehavior:(id)arg2;
- (id)init;
- (void)logMeasurement:(struct IMPerfMeasurement_t { struct IMFileLocation_t { char *x_1_1_1; char *x_1_1_2; char *x_1_1_3; char *x_1_1_4; int x_1_1_5; } x1; unsigned long long x2; unsigned long long x3; struct __CFString {} *x4; double x5; double x6; double x7; }*)arg1;

@end
