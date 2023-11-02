
@interface PLModelingUtilities : NSObject

+ (bool)alsCurveHigherThanDefault;
+ (bool)carrierBuild;
+ (double)defaultBatteryEnergyCapacity;
+ (double)duetDiscretionaryBudget;
+ (double)getDefaultL0bThresholdForDeviceType;
+ (bool)hasAOD;
+ (bool)internalBuild;
+ (bool)isARMMac;
+ (bool)isAppleTV;
+ (bool)isHeySiriAlwaysOn;
+ (bool)isHomePod;
+ (bool)isLowPowerModeSupported;
+ (bool)isMac;
+ (bool)isNarrowScreen;
+ (bool)isPercentageSupported;
+ (bool)isTVOS;
+ (bool)isWatch;
+ (bool)isiPad;
+ (bool)isiPhone;
+ (bool)isiPod;
+ (double)networkingEnergyWithBytes:(int)arg1 withDuration:(double)arg2;
+ (bool)shouldShowBatteryGraphs;
+ (id)valueForMobileGestaltCapability:(id)arg1;

@end
