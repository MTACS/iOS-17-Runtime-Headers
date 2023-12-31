
@interface NTKComplicationBundleHelper : NSObject

+ (id)_complicationFamilyToTemplateFileNameMapping:(id)arg1;
+ (id)_templateForFamily:(long long)arg1 bundle:(id)arg2;
+ (id)localizedComplicationDescriptionForFamily:(long long)arg1 bundle:(id)arg2 localization:(id)arg3;
+ (id)localizedComplicationTemplateForFamily:(long long)arg1 bundle:(id)arg2 localization:(id)arg3;
+ (id)localizedComplicationTemplateForTemplate:(id)arg1 bundle:(id)arg2 localization:(id)arg3;
+ (id)supportedComplicationFamiliesForBundle:(id)arg1;

@end
