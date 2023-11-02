
@interface HUMediaAccountUtilities : NSObject

+ (id)defaultCurrentVolumeForMediaProfiles:(id)arg1;
+ (id)determineMediaPickerAvailabilityForHomePodProfiles:(id)arg1 inHome:(id)arg2;
+ (id)isAppleMusicSubscriptionAvailable;
+ (bool)isMusicAppInstalled;
+ (id)musicAppURL;
+ (id)reasonForMediaPickerNotAvailable:(long long)arg1;

@end
