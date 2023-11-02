
@interface DAAnalyticsReporter : NSObject

+ (void)endDailyAnalyticsReporter;
+ (void)reportActiveExchangeOAuthAccountsCount;
+ (void)startDailyAnalyticsReporter;

@end
