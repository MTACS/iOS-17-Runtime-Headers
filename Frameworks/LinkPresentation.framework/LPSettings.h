
@interface LPSettings : NSObject

+ (bool)disableAnimations;
+ (bool)disableAutoPlay;
+ (bool)disableLegacyStoreLookups;
+ (void)initialize;
+ (bool)showDebugIndicators;
+ (bool)subsampleImagesToScreenSize;
+ (void)updateFromDefaults;

@end
