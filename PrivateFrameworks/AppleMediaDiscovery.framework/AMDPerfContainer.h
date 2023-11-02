
@interface AMDPerfContainer : NSObject {
    bool  _isEnabled;
    BOOL  _level;
    NSMutableDictionary * _memoryUsage;
    NSMutableDictionary * _samples;
    double  _timeConversionFactor;
    NSMutableDictionary * _timeUsage;
}

@property (nonatomic) bool isEnabled;
@property (nonatomic) BOOL level;
@property (nonatomic, retain) NSMutableDictionary *memoryUsage;
@property (nonatomic, retain) NSMutableDictionary *samples;
@property (nonatomic) double timeConversionFactor;
@property (nonatomic, retain) NSMutableDictionary *timeUsage;

+ (float)getMemoryUsage:(id)arg1 logType:(id)arg2 timeDelta:(double)arg3;

- (void).cxx_destruct;
- (double)getTime;
- (id)initWithSwitch:(bool)arg1 atLevel:(BOOL)arg2;
- (bool)isEnabled;
- (BOOL)level;
- (id)memoryUsage;
- (id)samples;
- (void)setIsEnabled:(bool)arg1;
- (void)setLevel:(BOOL)arg1;
- (void)setMemoryUsage:(id)arg1;
- (void)setSamples:(id)arg1;
- (void)setTimeConversionFactor:(double)arg1;
- (void)setTimeUsage:(id)arg1;
- (double)timeConversionFactor;
- (id)timeUsage;

@end
