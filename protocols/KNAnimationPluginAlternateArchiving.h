
@protocol KNAnimationPluginAlternateArchiving <NSObject>

@required

+ (NSString *)localizedAnimationStringForUpgradeWarning:(long long)arg1;
+ (bool)shouldWarnOnUpgradeWithOldAnimationName:(NSString *)arg1 version:(unsigned long long)arg2;

@end
