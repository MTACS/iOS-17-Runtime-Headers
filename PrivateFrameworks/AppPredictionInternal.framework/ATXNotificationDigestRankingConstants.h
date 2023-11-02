
@interface ATXNotificationDigestRankingConstants : NSObject {
    NSDictionary * _parameters;
}

@property (nonatomic, readonly) double dailyDecayFactor;
@property (nonatomic, readonly) double giveMarqueeToNonAppearingAppProbability;
@property (nonatomic, readonly) double logisticCenterXVal;
@property (nonatomic, readonly) double logisticGrowthRate;
@property (nonatomic, readonly) double minMarqueeAppearancesPerApp;
@property (nonatomic, readonly) unsigned long long numMarqueeSpots;
@property (nonatomic, readonly) double weightForBasicNotificationsSent;
@property (nonatomic, readonly) double weightForMarqueeAppearance;
@property (nonatomic, readonly) double weightForMarqueeEngagement;
@property (nonatomic, readonly) double weightForNonMarqueeAppearance;
@property (nonatomic, readonly) double weightForNonMarqueeEngagement;
@property (nonatomic, readonly) double weightForTimeSensitiveNotificationsSent;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (double)dailyDecayFactor;
- (double)giveMarqueeToNonAppearingAppProbability;
- (id)init;
- (double)logisticCenterXVal;
- (double)logisticGrowthRate;
- (double)minMarqueeAppearancesPerApp;
- (unsigned long long)numMarqueeSpots;
- (double)weightForBasicNotificationsSent;
- (double)weightForMarqueeAppearance;
- (double)weightForMarqueeEngagement;
- (double)weightForNonMarqueeAppearance;
- (double)weightForNonMarqueeEngagement;
- (double)weightForTimeSensitiveNotificationsSent;

@end
