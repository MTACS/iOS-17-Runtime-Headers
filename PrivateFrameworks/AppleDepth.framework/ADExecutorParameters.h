
@interface ADExecutorParameters : NSObject {
    NSString * _intermediatesOutputPath;
    ADLogManager * _logger;
    bool  _powerMeasureMode;
    long long  _stepsToSkip;
    ADTimeProfiler * _timeProfiler;
}

@property (nonatomic, copy) NSString *intermediatesOutputPath;
@property (nonatomic, retain) ADLogManager *logger;
@property (nonatomic) bool powerMeasureMode;
@property (nonatomic) long long stepsToSkip;
@property (nonatomic, retain) ADTimeProfiler *timeProfiler;

- (void).cxx_destruct;
- (id)init;
- (id)initForDevice:(id)arg1;
- (id)intermediatesOutputPath;
- (id)logger;
- (bool)powerMeasureMode;
- (void)setIntermediatesOutputPath:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setPowerMeasureMode:(bool)arg1;
- (void)setStepsToSkip:(long long)arg1;
- (void)setTimeProfiler:(id)arg1;
- (long long)stepsToSkip;
- (id)timeProfiler;

@end
