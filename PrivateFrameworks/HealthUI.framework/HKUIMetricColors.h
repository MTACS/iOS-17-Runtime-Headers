
@interface HKUIMetricColors : NSObject {
    UIColor * _contextViewPrimaryTextColor;
    UIColor * _contextViewSecondaryTextColor;
    UIColor * _keyColor;
}

@property (nonatomic, retain) UIColor *contextViewPrimaryTextColor;
@property (nonatomic, retain) UIColor *contextViewSecondaryTextColor;
@property (nonatomic, retain) UIColor *keyColor;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)activityColors;
+ (id)allergiesClinicalColors;
+ (id)bodyMeasurementColors;
+ (id)carePlansClinicalColors;
+ (id)categoryColorsWithColor:(id)arg1;
+ (id)clinicalNotesClinicalColors;
+ (id)conditionsClinicalColors;
+ (id)defaultClinicalColors;
+ (id)defaultContextViewColorsUsingColor:(id)arg1;
+ (id)devicesClinicalColors;
+ (id)disabledContextViewColor;
+ (id)hearingHealthColors;
+ (id)immunizationsClinicalColors;
+ (id)insuranceClinicalColors;
+ (id)labResultsClinicalColors;
+ (id)medicationTrackingColors;
+ (id)medicationsClinicalColors;
+ (id)mindfulnessColors;
+ (id)mobilityColors;
+ (id)nutritionColors;
+ (id)otherColors;
+ (id)proceduresClinicalColors;
+ (id)reproductiveHealthColors;
+ (id)respiratoryColors;
+ (id)sleepColors;
+ (id)sleepColorsForSleepAnalysis:(long long)arg1;
+ (id)socialHistoryClinicalColors;
+ (id)symptomsColors;
+ (id)unknownCategoryClinicalColors;
+ (id)vitalsClinicalColors;
+ (id)vitalsColors;
+ (id)workoutContextViewColors;

- (void).cxx_destruct;
- (id)contextViewPrimaryTextColor;
- (id)contextViewSecondaryTextColor;
- (id)keyColor;
- (void)setContextViewPrimaryTextColor:(id)arg1;
- (void)setContextViewSecondaryTextColor:(id)arg1;
- (void)setKeyColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

+ (id)chartFilterDefaultForMultiple;
+ (id)chartFilterDefaultForSingle;

@end
