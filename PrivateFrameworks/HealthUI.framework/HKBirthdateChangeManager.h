
@interface HKBirthdateChangeManager : NSObject {
    HKHealthStore * _healthStore;
}

@property (nonatomic, retain) HKHealthStore *healthStore;

+ (id)_birthdayCalendar;
+ (void)showDisabledWarningWithAge:(long long)arg1 isHealthChecklistAvailable:(bool)arg2 presentingViewController:(id)arg3 withAlertActions:(id)arg4;
+ (void)showDisabledWarningWithAge:(long long)arg1 presentingViewController:(id)arg2;
+ (void)showDisabledWarningWithHealthChecklistWithAge:(long long)arg1 presentingViewController:(id)arg2 openHealthChecklistInContext:(bool)arg3;

- (void).cxx_destruct;
- (long long)_ageFromBirthDate:(id)arg1;
- (long long)_ageFromBirthDateComponents:(id)arg1;
- (id)_nowDate;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (id)setBirthdate:(id)arg1 withError:(id*)arg2;
- (void)setHealthStore:(id)arg1;

@end
