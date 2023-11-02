
@interface PosterKitUtilities : NSObject

+ (id)archiver;
+ (id)archiverWithFileManager:(id)arg1;
+ (id)configurationIdentityWithProvider:(id)arg1 identifier:(id)arg2 posterUUID:(id)arg3 version:(unsigned long long)arg4 supplement:(unsigned long long)arg5;
+ (id)configurationWithPath:(id)arg1;
+ (id)configuredPropertiesWithTitleStyleConfiguration:(id)arg1 renderingConfiguration:(id)arg2;
+ (id)loadConfiguredPropertiesFromPosterConfiguration:(id)arg1 error:(out id*)arg2;
+ (id)posterColorWithColor:(id)arg1 preferredStyle:(unsigned long long)arg2 localizedName:(id)arg3;
+ (id)renderingConfigurationWithDepthEffectDisabled:(bool)arg1 parallaxEnabled:(bool)arg2;
+ (id)serverPathFromPath:(id)arg1;
+ (id)serverPathWithProviderURL:(id)arg1 identity:(id)arg2;
+ (bool)storeConfiguredPropertiesForPath:(id)arg1 configuredProperties:(id)arg2 error:(out id*)arg3;
+ (id)systemTimeFontConfigurationFromTimeFontConfiguration:(id)arg1;
+ (id)systemTimeFontConfigurationWithTimeFontIdentifier:(id)arg1 weight:(double)arg2 systemItem:(bool)arg3;
+ (id)titleStyleConfigurationWithTimeFontConfiguration:(id)arg1 preferredTitleAlignment:(unsigned long long)arg2 preferredTitleLayout:(unsigned long long)arg3 titleColor:(id)arg4 timeNumberingSystem:(id)arg5 userConfigured:(bool)arg6 contentsLuminance:(double)arg7 alternateDateEnabled:(bool)arg8 groupName:(id)arg9;

@end
