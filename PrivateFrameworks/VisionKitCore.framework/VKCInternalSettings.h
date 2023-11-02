
@interface VKCInternalSettings : NSObject

+ (bool)addRandomArtificalAnalysisDelay;
+ (id)addRandomArtificalAnalysisDelaySettingsValue;
+ (bool)addSubjectCropRectToPasteboard;
+ (id)addSubjectCropRectToPasteboardSettingsValue;
+ (bool)alwaysShowTextSelectionBorders;
+ (id)alwaysShowTextSelectionBordersSettingsValue;
+ (double)blurBlurRadius;
+ (id)blurBlurRadiusSettingsValue;
+ (double)blurMaxThickness;
+ (id)blurMaxThicknessSettingsValue;
+ (double)blurMinOpacity;
+ (id)blurMinOpacitySettingsValue;
+ (bool)boolForKey:(id)arg1 withDefaultValue:(bool)arg2;
+ (bool)debugMenuEnabled;
+ (id)debugMenuEnabledSettingsValue;
+ (id)defaults;
+ (id)defaultsKeyForKey:(id)arg1;
+ (double)extraWindowPointTouchOffset;
+ (id)extraWindowPointTouchOffsetSettingsValue;
+ (double)floatForKey:(id)arg1 withDefaultValue:(double)arg2;
+ (bool)isCGImageForMadEnabled;
+ (id)isCGImageForMadEnabledSettingsValue;
+ (bool)isOpticalFlowForTextEnabled;
+ (id)isOpticalFlowForTextEnabledSettingsValue;
+ (bool)isPerformingAutomatedTest;
+ (id)isPerformingAutomatedTestSettingsValue;
+ (bool)overrideDeviceAvailability;
+ (id)overrideDeviceAvailabilitySettingsValue;
+ (double)randomDelayEndValue;
+ (id)randomDelayEndValueSettingsValue;
+ (double)randomDelayStartValue;
+ (id)randomDelayStartValueSettingsValue;
+ (double)scaleMultiplier;
+ (id)scaleMultiplierSettingsValue;
+ (id)settingsValueForKey:(id)arg1;
+ (double)sharpBlurRadius;
+ (id)sharpBlurRadiusSettingsValue;
+ (double)sharpMaxThickness;
+ (id)sharpMaxThicknessSettingsValue;
+ (double)sharpMinOpacity;
+ (id)sharpMinOpacitySettingsValue;
+ (double)subjectAutomaticAnalysisDelay;
+ (id)subjectAutomaticAnalysisDelaySettingsValue;
+ (double)subjectDragCancellationDelay;
+ (id)subjectDragCancellationDelaySettingsValue;
+ (double)subjectDragLiftDelay;
+ (id)subjectDragLiftDelaySettingsValue;
+ (double)visibleTextAreaButtonThreshold;
+ (id)visibleTextAreaButtonThresholdSettingsValue;

@end
