
@interface LNFeatureFlags : NSObject

+ (id)allFeatures;
+ (bool)isActionTranscriptEnabled;
+ (bool)isAppShortcutsOmittingAppNameEnabled;
+ (bool)isConditionallyEnabledIntentsEnabled;
+ (bool)isLowPowerDeviceEnabled;
+ (bool)isRuntimeMetadataSupported;
+ (bool)isStaticMetadataIngestionEnabled;
+ (bool)isViewActionAnnotationEnabled;
+ (bool)isVocabularyDonationEnabled;
+ (void)setIsAppShortcutsOmittingAppNameEnabled:(bool)arg1;
+ (void)setIsVocabularyDonationOverrideEnabled:(bool)arg1;

@end
