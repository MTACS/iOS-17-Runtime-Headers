
@interface TAFilterLeavingLOISettings : NSObject {
    NSSet * _enabledLoiTypes;
    unsigned long long  _leavingHomeImmediacyType;
    unsigned long long  _leavingWorkImmediacyType;
    double  _thresholdOfSignificantDistance;
    double  _thresholdOfSignificantDuration;
    TAFilterVisitsSettings * _visitsSettings;
}

@property (nonatomic, readonly) NSSet *enabledLoiTypes;
@property (nonatomic, readonly) unsigned long long leavingHomeImmediacyType;
@property (nonatomic, readonly) unsigned long long leavingWorkImmediacyType;
@property (nonatomic, readonly) double thresholdOfSignificantDistance;
@property (nonatomic, readonly) double thresholdOfSignificantDuration;
@property (nonatomic, readonly) TAFilterVisitsSettings *visitsSettings;

+ (id)defaultLeavingLOIEnabledLoiTypes;

- (void).cxx_destruct;
- (id)enabledLoiTypes;
- (id)enabledLoiTypesToString;
- (id)initWithDefaults;
- (id)initWithThresholdOfSignificantDuration:(double)arg1 thresholdOfSignificantDistance:(double)arg2 filterVisitsSettings:(id)arg3 enabledLoiTypes:(id)arg4 leavingHomeImmediacyType:(unsigned long long)arg5 leavingWorkImmediacyType:(unsigned long long)arg6;
- (id)initWithThresholdOfSignificantDurationOrDefault:(id)arg1 thresholdOfSignificantDistanceOrDefault:(id)arg2 filterVisitsSettingsOrDefault:(id)arg3 enabledLoiTypesOrDefault:(id)arg4 leavingHomeImmediacyTypeOrDefault:(id)arg5 leavingWorkImmediacyTypeOrDefault:(id)arg6;
- (unsigned long long)leavingHomeImmediacyType;
- (unsigned long long)leavingWorkImmediacyType;
- (double)thresholdOfSignificantDistance;
- (double)thresholdOfSignificantDuration;
- (id)visitsSettings;

@end
