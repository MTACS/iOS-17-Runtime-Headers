
@interface HDMobilityWalkingSteadinessAnalyticsNotificationEventDataSource : NSObject <HKMobilityWalkingSteadinessAnalyticsNotificationEventDataSourceProvider> {
    NSString * _category;
    NSDate * _date;
    HDProfile * _profile;
    long long  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)ageWithError:(id*)arg1;
- (id)areHealthNotificationsAuthorizedWithError:(id*)arg1;
- (id)biologicalSexWithError:(id*)arg1;
- (id)daysSinceLastNotificationWithError:(id*)arg1;
- (id)initWithProfile:(id)arg1 category:(id)arg2 value:(long long)arg3 date:(id)arg4;
- (id)notificationClassificationWithError:(id*)arg1;
- (id)notificationTypeWithError:(id*)arg1;

@end
