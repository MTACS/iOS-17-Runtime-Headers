
@interface PXPPTLoadingLatencyMeter : NSObject {
    struct { 
        double minValue; 
        double maxValue; 
        double totalValue; 
        unsigned long long count; 
    }  _highQualityResults;
    struct { 
        double minValue; 
        double maxValue; 
        double totalValue; 
        unsigned long long count; 
    }  _lowQualityResults;
    NSString * _measurementsUnit;
    struct { 
        double minValue; 
        double maxValue; 
        double totalValue; 
        unsigned long long count; 
    }  _mediumQualityResults;
    NSString * _outputType;
}

@property (nonatomic, readonly) NSDictionary *measurementsDictionaryRepresentation;
@property (nonatomic, retain) NSString *measurementsUnit;

+ (id)sharedInstance;
+ (void)startMeasurementsForOutputType:(id)arg1;
+ (void)stopMeasurements;

- (void).cxx_destruct;
- (id)_measurementsDictionaryForOutputQuality:(long long)arg1;
- (id)initWithOutputType:(id)arg1;
- (id)measurementsDictionaryRepresentation;
- (struct { double x1; double x2; double x3; unsigned long long x4; })measurementsForOutputQuality:(long long)arg1;
- (id)measurementsUnit;
- (void)reportLatency:(double)arg1 forOutputQuality:(long long)arg2;
- (void)setMeasurementsUnit:(id)arg1;

@end
