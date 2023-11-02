
@interface CHSWidgetRefreshStrategyFactory : NSObject

+ (id)defaultStrategy;
+ (id)rateLimitedWithPolicyIdentifier:(id)arg1;

@end
