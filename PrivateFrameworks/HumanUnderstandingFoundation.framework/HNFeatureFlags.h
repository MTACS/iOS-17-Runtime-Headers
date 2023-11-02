
@interface HNFeatureFlags : NSObject

+ (bool)isContextualUnderstandingEnabled;
+ (bool)isContextualUnderstandingNotificationsEnabled;
+ (bool)isHumanUnderstandingDataCollectionEnabled;
+ (bool)isHumanUnderstandingEvidenceEnabled;

- (id)init;

@end
