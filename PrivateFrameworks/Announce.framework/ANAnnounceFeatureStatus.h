
@interface ANAnnounceFeatureStatus : NSObject

+ (bool)isAnnounceEnabled;
+ (bool)isEnabled;
+ (bool)isEnabledForPersonalDevices;
+ (bool)isSiriEndpointsATVEnabled;
+ (bool)shouldStopPlaybackOnSiriActivation;

@end
