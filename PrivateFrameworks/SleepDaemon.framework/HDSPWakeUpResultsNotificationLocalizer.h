
@interface HDSPWakeUpResultsNotificationLocalizer : NSObject {
    HKHealthStore * _healthStore;
    HDSPWakeUpResultsNotification * _notification;
}

@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HDSPWakeUpResultsNotification *notification;

- (void).cxx_destruct;
- (id)_embeddedNameLocalizedStringKey;
- (id)_embeddedNameSubstitutionStringKey;
- (id)_localizedBodyForOneDayNotificationWithError:(id*)arg1;
- (id)_localizedBodyForOneWeekDayNotificationWithError:(id*)arg1;
- (id)_localizedBodyForTwoWeekNotificationWithError:(id*)arg1;
- (id)_localizedStringKeyBase;
- (id)_regularLocalizedStringKey;
- (id)_regularSubstitutionStringKey;
- (unsigned long long)category;
- (double)dailySleepDurationGoal;
- (id)healthStore;
- (id)initWithNotification:(id)arg1 healthStore:(id)arg2;
- (id)localizedBody;
- (id)localizedTitle;
- (id)notification;
- (long long)notificationVariant;
- (id)userFirstName;
- (long long)weeklyGoalAchieved;

@end
