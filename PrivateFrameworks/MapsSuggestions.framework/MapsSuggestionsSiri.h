
@interface MapsSuggestionsSiri : NSObject

+ (bool)isAllowedOnHomeScreen;
+ (id)isAllowedOnHomeScreenCondition;
+ (bool)isAllowedOnLockScreen;
+ (id)isAllowedOnLockScreenCondition;
+ (bool)isEnabled;
+ (id)isEnabledCondition;

@end
