
@interface HMDTimePeriodNotificationConditionHandler : HMFObject <HMDNotificationConditionHandler, HMFLogging> {
    HMDHome * _home;
    <HMDTimePeriodNotificationConditionSunsetSunriseProvider> * _sunriseSunsetProvider;
    <HMDTimePeriodNotificationConditionTimeProvider> * _timeProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (readonly) <HMDTimePeriodNotificationConditionSunsetSunriseProvider> *sunriseSunsetProvider;
@property (readonly) Class superclass;
@property (readonly) <HMDTimePeriodNotificationConditionTimeProvider> *timeProvider;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_dateComponentsForTimePeriodElement:(id)arg1 home:(id)arg2;
- (id)_dateTodayMatchingComponents:(id)arg1;
- (bool)canHandleCondition:(id)arg1;
- (bool)conditionPasses:(id)arg1 registrationUser:(id)arg2;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 timeProvider:(id)arg2 sunriseSunsetProvider:(id)arg3;
- (id)sunriseSunsetProvider;
- (id)timeProvider;

@end
