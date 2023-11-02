
@interface HKAudiogramSensitivityPoint : NSObject <NSSecureCoding> {
    HKQuantity * _frequency;
    HKQuantity * _leftEarSensitivity;
    HKQuantity * _rightEarSensitivity;
}

@property (readonly, copy) HKQuantity *frequency;
@property (readonly, copy) HKQuantity *leftEarSensitivity;
@property (readonly, copy) HKQuantity *rightEarSensitivity;

+ (id)_incompatibleUnit:(id)arg1 incompatibleWith:(id)arg2;
+ (id)_rangeViolationMin:(id)arg1 max:(id)arg2 value:(id)arg3;
+ (bool)_validateUnitForFrequency:(id)arg1;
+ (bool)_validateUnitForSensitivity:(id)arg1;
+ (id)sensitivityPointWithFrequency:(id)arg1 leftEarSensitivity:(id)arg2 rightEarSensitivity:(id)arg3 error:(id*)arg4;
+ (bool)supportsSecureCoding;
+ (bool)validFrequency:(id)arg1 error:(id*)arg2;
+ (bool)validSensitivity:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)frequency;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrequency:(id)arg1 leftEarSensitivity:(id)arg2 rightEarSensitivity:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSensitivityPoint:(id)arg1;
- (id)leftEarSensitivity;
- (id)rightEarSensitivity;

@end
