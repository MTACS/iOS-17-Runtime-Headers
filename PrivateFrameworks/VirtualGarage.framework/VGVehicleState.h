
@interface VGVehicleState : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _activeConnector;
    NSNumber * _batteryPercentage;
    NSString * _chargingArguments;
    NSString * _consumptionArguments;
    NSMeasurement * _currentBatteryCapacity;
    NSMeasurement * _currentEVRange;
    NSDate * _dateOfUpdate;
    NSString * _identifier;
    bool  _isCharging;
    NSMeasurement * _maxBatteryCapacity;
    NSMeasurement * _maxEVRange;
    NSMeasurement * _minBatteryCapacity;
    long long  _origin;
}

@property (nonatomic, readonly) unsigned long long activeConnector;
@property (nonatomic, readonly) NSNumber *batteryPercentage;
@property (nonatomic, readonly) NSString *chargingArguments;
@property (nonatomic, readonly) NSString *consumptionArguments;
@property (nonatomic, readonly) NSMeasurement *currentBatteryCapacity;
@property (nonatomic, readonly) NSMeasurement *currentEVRange;
@property (nonatomic, readonly) NSDate *dateOfUpdate;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isCharging;
@property (nonatomic, readonly) NSMeasurement *maxBatteryCapacity;
@property (nonatomic, readonly) NSMeasurement *maxEVRange;
@property (nonatomic, readonly) NSMeasurement *minBatteryCapacity;
@property (nonatomic, readonly) long long origin;

+ (id)_vehicleStateFromStorage:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_storage;
- (unsigned long long)activeConnector;
- (id)batteryPercentage;
- (id)chargingArguments;
- (id)consumptionArguments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentBatteryCapacity;
- (id)currentEVRange;
- (id)dateOfUpdate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dateOfUpdate:(id)arg2 origin:(long long)arg3 batteryPercentage:(id)arg4 currentEVRange:(id)arg5 maxEVRange:(id)arg6 minBatteryCapacity:(id)arg7 currentBatteryCapacity:(id)arg8 maxBatteryCapacity:(id)arg9 consumptionArguments:(id)arg10 chargingArguments:(id)arg11 isCharging:(bool)arg12 activeConnector:(unsigned long long)arg13;
- (bool)isCharging;
- (bool)isEqual:(id)arg1;
- (bool)isSignificantlyDifferentFromVehicleState:(id)arg1;
- (id)maxBatteryCapacity;
- (id)maxEVRange;
- (id)minBatteryCapacity;
- (long long)origin;

@end
