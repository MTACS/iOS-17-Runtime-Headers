
@interface TVRUIFeatures : NSObject

+ (id)_globalPrefForKey:(id)arg1;
+ (bool)_isInternalInstall;
+ (bool)_valueForInternalInstallWithBlock:(id /* block */)arg1;
+ (bool)cleandogEnabled;
+ (bool)corianderEnabled;
+ (bool)findMyEnabled;
+ (bool)ghostdogEnabled;
+ (bool)isCorianderDebugUIEnabled;
+ (bool)isHintsDebugUIEnabled;
+ (bool)isTapToRadarEnabled;
+ (bool)isWakeToRemoteOnLockScreenDisabled;
+ (bool)persistHintsUIEnabled;
+ (bool)rapportEnabled;
+ (bool)swapBackPlayPauseButtonsEnabled;
+ (bool)updogEnabled;

@end
