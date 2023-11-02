
@interface HKHRAFibBurdenNotificationMode : NSObject <NSSecureCoding> {
    NSNumber * _currentPercentage;
    NSNumber * _currentValueClamped;
    NSDateInterval * _currentValueDateInterval;
    NSUUID * _currentValueUUID;
    NSNumber * _previousPercentage;
    NSNumber * _previousTimeZoneDiffersFromCurrent;
    NSNumber * _previousValueClamped;
    bool  _shouldForwardToWatch;
    long long  _type;
}

@property (nonatomic, readonly) NSNumber *currentPercentage;
@property (nonatomic, readonly) NSNumber *currentValueClamped;
@property (nonatomic, readonly) NSDateInterval *currentValueDateInterval;
@property (nonatomic, readonly) NSUUID *currentValueUUID;
@property (nonatomic, readonly) NSNumber *previousPercentage;
@property (nonatomic, readonly) NSNumber *previousTimeZoneDiffersFromCurrent;
@property (nonatomic, readonly) NSNumber *previousValueClamped;
@property (nonatomic, readonly) bool shouldForwardToWatch;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)currentPercentage;
- (id)currentValueClamped;
- (id)currentValueDateInterval;
- (id)currentValueUUID;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 shouldForwardToWatch:(bool)arg2 currentPercentage:(id)arg3 currentValueClamped:(id)arg4 currentValueDateInterval:(id)arg5 currentValueUUID:(id)arg6 previousPercentage:(id)arg7 previousValueClamped:(id)arg8 previousTimeZoneDiffersFromCurrent:(id)arg9;
- (bool)isEqual:(id)arg1;
- (id)previousPercentage;
- (id)previousTimeZoneDiffersFromCurrent;
- (id)previousValueClamped;
- (bool)shouldForwardToWatch;
- (long long)type;

@end
