
@interface HKMobilityWalkingSteadinessAnalyticsNotificationInteractionEventDataSource : NSObject <HKMobilityWalkingSteadinessAnalyticsNotificationInteractionEventDataSourceProvider> {
    NSString * _actionIdentifier;
    NSString * _category;
    HKHealthStore * _healthStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_walkingSteadinessEventValueForCategory:(id)arg1;
- (id)ageWithError:(id*)arg1;
- (id)biologicalSexWithError:(id*)arg1;
- (id)initWithHealthStore:(id)arg1 category:(id)arg2 action:(id)arg3;
- (id)notificationClassificationWithError:(id*)arg1;
- (id)notificationInteractionTypeWithError:(id*)arg1;
- (id)notificationTypeWithError:(id*)arg1;

@end
