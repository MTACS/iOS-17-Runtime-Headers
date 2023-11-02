
@interface _HKSHLocalizedSleepSchedule : NSObject {
    NSAttributedString * _localizedBedTime;
    NSAttributedString * _localizedWakeTime;
}

@property (nonatomic, readonly) NSAttributedString *localizedBedTime;
@property (nonatomic, readonly) NSAttributedString *localizedWakeTime;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithSleepSchedule:(id)arg1 calendar:(id)arg2 dayStart:(id)arg3 timeFont:(id)arg4 amPmFont:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)localizedBedTime;
- (id)localizedWakeTime;

@end
