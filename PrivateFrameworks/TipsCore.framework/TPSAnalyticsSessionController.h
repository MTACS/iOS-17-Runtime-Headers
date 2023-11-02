
@interface TPSAnalyticsSessionController : NSObject

+ (void)_incrementSessionViewNumberForKey:(id)arg1;
+ (void)_logSessionData;
+ (void)_resetSession;
+ (void)endSession;
+ (void)incrementCollectionsViewedCount;
+ (void)incrementTipsViewedCount;
+ (void)trackSession;

@end
