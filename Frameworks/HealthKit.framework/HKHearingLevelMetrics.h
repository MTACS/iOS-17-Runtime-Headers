
@interface HKHearingLevelMetrics : NSObject {
    HKQuantity * _averageSensitivity;
    HKQuantity * _maximumSensitivity;
    HKQuantity * _minimumSensitivity;
}

@property (nonatomic, readonly, copy) HKQuantity *averageSensitivity;
@property (nonatomic, readonly) unsigned long long hearingLevelClassification;
@property (nonatomic, readonly, copy) HKQuantity *maximumSensitivity;
@property (nonatomic, readonly, copy) HKQuantity *minimumSensitivity;

- (void).cxx_destruct;
- (id)averageSensitivity;
- (id)description;
- (unsigned long long)hash;
- (unsigned long long)hearingLevelClassification;
- (id)initWithAverageSensitivity:(id)arg1 minimumSensitivity:(id)arg2 maximumSensitivity:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)maximumSensitivity;
- (id)minimumSensitivity;

@end
