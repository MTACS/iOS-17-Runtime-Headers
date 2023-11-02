
@protocol HKMobilityWalkingSteadinessAnalyticsNotificationEventDataSourceProvider <NSObject>

@required

- (NSNumber *)ageWithError:(id*)arg1;
- (NSNumber *)areHealthNotificationsAuthorizedWithError:(id*)arg1;
- (NSNumber *)biologicalSexWithError:(id*)arg1;
- (NSNumber *)daysSinceLastNotificationWithError:(id*)arg1;
- (NSString *)notificationClassificationWithError:(id*)arg1;
- (NSString *)notificationTypeWithError:(id*)arg1;

@end
