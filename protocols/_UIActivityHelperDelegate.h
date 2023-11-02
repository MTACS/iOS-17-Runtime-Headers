
@protocol _UIActivityHelperDelegate <NSObject>

@required

- (bool)activityHelper:(_UIActivityHelper *)arg1 matchingWithContext:(_UIActivityMatchingContext *)arg2 shouldIncludeSystemActivityType:(NSString *)arg3 sessionID:(NSString *)arg4;

@optional

- (NSArray *)activityHelper:(_UIActivityHelper *)arg1 activitiesForActivityType:(NSString *)arg2 matchingContext:(_UIActivityMatchingContext *)arg3 sessionID:(NSString *)arg4;
- (_PSPredictionContext *)activityHelper:(_UIActivityHelper *)arg1 predictionContextForSessionID:(NSString *)arg2;

@end
