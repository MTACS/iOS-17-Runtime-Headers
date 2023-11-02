
@interface MXAppLaunchMetric : MXMetric {
    MXHistogram * _histogrammedApplicationResumeTime;
    MXHistogram * _histogrammedExtendedLaunch;
    MXHistogram * _histogrammedOptimizedTimeToFirstDraw;
    MXHistogram * _histogrammedTimeToFirstDraw;
}

@property (readonly) MXHistogram *histogrammedApplicationResumeTime;
@property (readonly) MXHistogram *histogrammedExtendedLaunch;
@property (readonly) MXHistogram *histogrammedOptimizedTimeToFirstDraw;
@property (readonly) MXHistogram *histogrammedTimeToFirstDraw;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)histogrammedApplicationResumeTime;
- (id)histogrammedExtendedLaunch;
- (id)histogrammedOptimizedTimeToFirstDraw;
- (id)histogrammedTimeToFirstDraw;
- (id)initWithCoder:(id)arg1;
- (id)initWithLaunchTimeData:(id)arg1 withResumeTimeData:(id)arg2;
- (id)initWithLaunchTimeData:(id)arg1 withResumeTimeData:(id)arg2 withActivationTimeData:(id)arg3;
- (id)initWithLaunchTimeData:(id)arg1 withResumeTimeData:(id)arg2 withActivationTimeData:(id)arg3 withExtendedLaunchTimeData:(id)arg4;
- (id)toDictionary;

@end
