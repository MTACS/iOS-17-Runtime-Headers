
@interface WBSAutomaticTabClosingUtilities : NSObject

+ (unsigned long long)automaticTabClosingInterval;
+ (void)clearMostDistantLastViewedTime;
+ (void)resetAutomaticTabClosingIntervalPreference;
+ (void)setAutomaticTabClosingInterval:(unsigned long long)arg1;
+ (void)setMostDistantLastViewedTime:(double)arg1;
+ (bool)shouldCloseTabsAutomaticallyWhenEnteringForeground;
+ (bool)userHasPreferenceForAutomaticTabClosingInterval;

@end
