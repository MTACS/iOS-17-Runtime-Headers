
@interface HCUtilities : NSObject

+ (id)bluetoothManagerQueue;
+ (bool)currentProcessIsAXUIServer;
+ (bool)currentProcessIsCarousel;
+ (bool)currentProcessIsHealth;
+ (bool)currentProcessIsHeard;
+ (bool)currentProcessIsInCallService;
+ (bool)currentProcessIsPreferences;
+ (bool)currentProcessIsRTTExternsion;
+ (bool)currentProcessIsSpringBoard;
+ (bool)currentProcessIsSystemApp;
+ (bool)deviceHasHomeButton;
+ (bool)deviceIsBigPhone;
+ (bool)deviceIsMultiUser;
+ (bool)deviceIsPad;
+ (bool)deviceIsPhone;
+ (bool)deviceIsPod;
+ (bool)deviceIsSmallPhone;
+ (bool)deviceIsWatch;
+ (bool)isInternalInstall;
+ (bool)isProtectedDataAvailable;
+ (id)messagePayloadFromDictionary:(id)arg1 andIdentifier:(unsigned long long)arg2;
+ (double)roundToPercentageValue:(double)arg1;
+ (bool)supportsAlwaysListening;
+ (bool)supportsLEA2;
+ (long long)systemBootTime;
+ (bool)watchSupportsPairingHearingAids;

@end
