
@interface HKAudioExposureUtilities : NSObject

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_classificationValueWithLEQ:(double)arg1 duration:(double)arg2 days:(long long)arg3;
+ (double)_rounded:(double)arg1;
+ (unsigned long long)classifyLEQ:(id)arg1 forDuration:(double)arg2 overDays:(long long)arg3;
+ (id)computeLEQFromAudioExposureValues:(id)arg1;
+ (id)localizedDisplayNameForClassification:(unsigned long long)arg1;
+ (id)localizedDisplayNameForClassification:(unsigned long long)arg1 isEmbedded:(bool)arg2;
+ (double)maximumDurationInSecondsForLEQ:(double)arg1 days:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/HealthHearing.framework/HealthHearing

+ (id)_sevenDayDoseWithExposureAverageQuantity:(id)arg1 duration:(id)arg2 error:(id*)arg3;
+ (id)hk_sevenDayDoseWithExposureLevel:(double)arg1 exposureDuration:(double)arg2 error:(id*)arg3;

@end
