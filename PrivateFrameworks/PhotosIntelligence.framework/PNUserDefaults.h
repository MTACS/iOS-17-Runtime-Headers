
@interface PNUserDefaults : NSObject

+ (void)_registerDefaults;
+ (void)initialize;
+ (bool)locationCurationAvoidPeople;
+ (long long)promoterStatusMergeCandidateLimit;
+ (long long)promoterStatusVerifiedPersonLimit;

@end
