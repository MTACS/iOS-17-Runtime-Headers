
@interface TAFilterSingleVisitSettings : NSObject {
    unsigned long long  _arrivingWorkImmediacyType;
    NSSet * _enabledLoiTypes;
    double  _thresholdOfSignificantDistance;
    double  _thresholdOfSignificantDuration;
    TAFilterVisitsSettings * _visitsSettings;
}

@property (nonatomic, readonly) unsigned long long arrivingWorkImmediacyType;
@property (nonatomic, readonly) NSSet *enabledLoiTypes;
@property (nonatomic, readonly) double thresholdOfSignificantDistance;
@property (nonatomic, readonly) double thresholdOfSignificantDuration;
@property (nonatomic, readonly) TAFilterVisitsSettings *visitsSettings;

+ (id)defaultSingleVisitEnabledLoiTypes;

- (void).cxx_destruct;
- (unsigned long long)arrivingWorkImmediacyType;
- (id)enabledLoiTypes;
- (id)enabledLoiTypesToString;
- (id)initWithDefaults;
- (id)initWithThresholdOfSignificantDuration:(double)arg1 thresholdOfSignificantDistance:(double)arg2 filterVisitsSettings:(id)arg3 enabledLoiTypes:(id)arg4 arrivingWorkImmediacyType:(unsigned long long)arg5;
- (id)initWithThresholdOfSignificantDurationOrDefault:(id)arg1 thresholdOfSignificantDistanceOrDefault:(id)arg2 filterVisitsSettingsOrDefault:(id)arg3 enabledLoiTypesOrDefault:(id)arg4 arrivingWorkImmediacyTypeOrDefault:(id)arg5;
- (double)thresholdOfSignificantDistance;
- (double)thresholdOfSignificantDuration;
- (id)visitsSettings;

@end
