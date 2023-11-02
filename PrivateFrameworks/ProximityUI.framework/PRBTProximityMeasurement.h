
@interface PRBTProximityMeasurement : NSObject {
    NSNumber * _continuousProximityLevel;
    unsigned long long  _proximityLevel;
    unsigned long long  _proximityTrend;
    double  _rssi;
    double  _timestamp;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSNumber *continuousProximityLevel;
@property (nonatomic, readonly) unsigned long long proximityLevel;
@property (nonatomic, readonly) unsigned long long proximityTrend;
@property (nonatomic, readonly) double rssi;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)btProximityWithTime:(double)arg1 proximityLevel:(unsigned long long)arg2 rssi:(double)arg3 continuousProximityLevel:(id)arg4 uuid:(id)arg5 proximityTrend:(unsigned long long)arg6;

- (void).cxx_destruct;
- (id)continuousProximityLevel;
- (id)initWithTime:(double)arg1 proximityLevel:(unsigned long long)arg2 rssi:(double)arg3 continuousProximityLevel:(id)arg4 uuid:(id)arg5 proximityTrend:(unsigned long long)arg6;
- (unsigned long long)proximityLevel;
- (unsigned long long)proximityTrend;
- (double)rssi;
- (double)timestamp;
- (id)uuid;

@end
