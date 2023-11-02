
@interface WFAXSDSettings : NSObject

+ (id)allBMApplianceTypes;
+ (id)bmTypeForAXSDSoundDetectionType:(id)arg1;
+ (bool)isApplianceSoundDetectionType:(id)arg1;
+ (id)localizedNameForSoundDetectionType:(id)arg1;
+ (id)mapLocalizedSupportedSoundDetectionTypesUsingBlock:(id /* block */)arg1;
+ (bool)soundDetectionEnabled;

@end
