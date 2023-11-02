
@protocol HKMobilityWalkingSteadinessAnalyticsDailyEventDataSourceProvider <NSObject>

@required

- (NSString *)activePairedWatchTypeWithError:(id*)arg1;
- (NSNumber *)ageWithError:(id*)arg1;
- (NSNumber *)areHealthNotificationsAuthorizedWithError:(id*)arg1;
- (NSNumber *)biologicalSexWithError:(id*)arg1;
- (NSString *)currentWalkingSteadinessClassificationWithError:(id*)arg1;
- (NSNumber *)daysSinceLastInitialNotificationWithError:(id*)arg1;
- (NSNumber *)daysSinceLastRepeatNotificationWithError:(id*)arg1;
- (NSNumber *)hasHeightWithError:(id*)arg1;
- (NSNumber *)hasLaunchedHealthAppInLastMonth:(id*)arg1;
- (NSNumber *)hasLaunchedHealthAppInLastWeek:(id*)arg1;
- (NSNumber *)hasWalkingSteadinessMeasurementsWithError:(id*)arg1;
- (NSNumber *)numberOfDaysSinceLastWalkingSteadinessMeasurementWithError:(id*)arg1;
- (NSNumber *)numberOfInitialNotificationsInPastYearWithError:(id*)arg1;
- (NSNumber *)numberOfLowNotificationsInPastYearWithError:(id*)arg1;
- (NSNumber *)numberOfRepeatLowNotificationsInPastYearWithError:(id*)arg1;
- (NSNumber *)numberOfRepeatVeryLowNotificationsInPastYearWithError:(id*)arg1;
- (NSNumber *)numberOfVeryLowNotificationsInPastYearWithError:(id*)arg1;
- (NSString *)previousWalkingSteadinessClassificationWithError:(id*)arg1;
- (NSNumber *)walkingSteadinessNotificationsEnabledWithError:(id*)arg1;

@end
