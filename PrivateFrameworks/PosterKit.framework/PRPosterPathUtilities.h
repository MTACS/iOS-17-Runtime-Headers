
@interface PRPosterPathUtilities : NSObject

+ (id)ambientConfigurationURLForContentsURL:(id)arg1;
+ (id)ambientConfigurationURLForPath:(id)arg1;
+ (id)ambientWidgetLayoutURLForInstanceURL:(id)arg1;
+ (id)ambientWidgetLayoutURLForPath:(id)arg1;
+ (id)colorVariationsConfigurationURLForInstanceURL:(id)arg1;
+ (id)colorVariationsConfigurationURLForPath:(id)arg1;
+ (id)complicationsLayoutURLForInstanceURL:(id)arg1;
+ (id)complicationsLayoutURLForPath:(id)arg1;
+ (id)configurableOptionsURLForContentsURL:(id)arg1;
+ (id)configurableOptionsURLForPath:(id)arg1;
+ (id)depthEffectConfigurationURLForPath:(id)arg1;
+ (id)depthEffectConfigurationURLForPathInstanceURL:(id)arg1;
+ (id)descriptorGalleryOptionsURLForContentsURL:(id)arg1;
+ (id)descriptorGalleryOptionsURLForPath:(id)arg1;
+ (id)expectedConfigurationFilesForPath:(id)arg1;
+ (id)focusConfigurationURLForIdentifierURL:(id)arg1;
+ (id)focusConfigurationURLForPath:(id)arg1;
+ (id)homeScreenConfigurationURLForPath:(id)arg1;
+ (id)homeScreenConfigurationURLForSupplementURL:(id)arg1;
+ (id)loadAmbientConfigurationForPath:(id)arg1 error:(out id*)arg2;
+ (id)loadAmbientWidgetLayoutForPath:(id)arg1 error:(out id*)arg2;
+ (id)loadColorVariationsConfigurationForPath:(id)arg1 error:(out id*)arg2;
+ (id)loadComplicationLayoutForPath:(id)arg1 error:(out id*)arg2;
+ (id)loadConfigurableOptionsForPath:(id)arg1 error:(out id*)arg2;
+ (id)loadConfiguredPropertiesForPath:(id)arg1 error:(out id*)arg2;
+ (id)loadFocusConfigurationForPath:(id)arg1 error:(out id*)arg2;
+ (id)loadHomeScreenConfigurationForPath:(id)arg1 error:(out id*)arg2;
+ (id)loadOtherMetadataForPath:(id)arg1 error:(out id*)arg2;
+ (id)loadPosterDescriptorGalleryOptionsForPath:(id)arg1 error:(out id*)arg2;
+ (id)loadPosterDescriptorIdentifierForPathAtURL:(id)arg1 type:(long long)arg2 posterUUID:(id)arg3;
+ (id)loadProactiveGalleryOptions:(id)arg1 error:(out id*)arg2;
+ (id)loadRenderingConfigurationForPath:(id)arg1 error:(out id*)arg2;
+ (id)loadSuggestionMetadataForPath:(id)arg1 error:(out id*)arg2;
+ (id)loadTitleStyleConfigurationForPath:(id)arg1 error:(out id*)arg2;
+ (id)loadUserInfoForPath:(id)arg1 error:(out id*)arg2;
+ (id)loadUserInfoForURL:(id)arg1 error:(out id*)arg2;
+ (id)loadUserObjectForURL:(id)arg1 expectedClass:(Class)arg2 strict:(bool)arg3 error:(out id*)arg4;
+ (id)oldHomeScreenConfigurationURLForIdentifierURL:(id)arg1;
+ (id)oldHomeScreenConfigurationURLForPath:(id)arg1;
+ (id)otherMetadataURLForContentsURL:(id)arg1;
+ (id)otherMetadataURLForPath:(id)arg1;
+ (id)proactiveGalleryOptionsURLForContentsURL:(id)arg1;
+ (id)proactiveGalleryOptionsURLForPath:(id)arg1;
+ (bool)removeAmbientConfigurationForPath:(id)arg1 error:(out id*)arg2;
+ (bool)removeAmbientWidgetLayout:(id)arg1 error:(out id*)arg2;
+ (bool)removeColorVariationsConfigurationForPath:(id)arg1 error:(out id*)arg2;
+ (bool)removeComplicationLayoutForPath:(id)arg1 error:(out id*)arg2;
+ (bool)removeConfigurableOptionsForPath:(id)arg1 error:(out id*)arg2;
+ (bool)removeFocusConfigurationForPath:(id)arg1 error:(out id*)arg2;
+ (bool)removeOtherMetadataForPath:(id)arg1 error:(out id*)arg2;
+ (bool)removePosterDescriptorGalleryOptions:(id)arg1 error:(out id*)arg2;
+ (bool)removeProactiveGalleryOptions:(id)arg1 error:(out id*)arg2;
+ (bool)removeRenderingConfigurationForPath:(id)arg1 error:(out id*)arg2;
+ (bool)removeSuggestionMetadataForPath:(id)arg1 error:(out id*)arg2;
+ (bool)removeTitleStyleConfigurationForPath:(id)arg1 error:(out id*)arg2;
+ (bool)removeUserInfo:(id)arg1 error:(out id*)arg2;
+ (id)renderingConfigurationURLForPath:(id)arg1;
+ (id)renderingConfigurationURLForPathInstanceURL:(id)arg1;
+ (bool)storeAmbientConfigurationForPath:(id)arg1 ambientConfiguration:(id)arg2 error:(out id*)arg3;
+ (bool)storeAmbientWidgetLayoutToPath:(id)arg1 posterAmbientWidgetLayout:(id)arg2 error:(out id*)arg3;
+ (bool)storeColorVariationsConfigurationForPath:(id)arg1 colorVariationsConfiguration:(id)arg2 error:(out id*)arg3;
+ (bool)storeComplicationLayoutForPath:(id)arg1 complicationLayout:(id)arg2 error:(out id*)arg3;
+ (bool)storeConfigurableOptionsForPath:(id)arg1 configurableOptions:(id)arg2 error:(out id*)arg3;
+ (bool)storeConfiguredPropertiesForPath:(id)arg1 configuredProperties:(id)arg2 error:(out id*)arg3;
+ (bool)storeFocusConfigurationForPath:(id)arg1 focusConfiguration:(id)arg2 error:(out id*)arg3;
+ (bool)storeHomeScreenConfigurationForPath:(id)arg1 homeScreenConfiguration:(id)arg2 error:(out id*)arg3;
+ (bool)storeOtherMetadataForPath:(id)arg1 otherMetadata:(id)arg2 error:(out id*)arg3;
+ (bool)storePosterDescriptorGalleryOptions:(id)arg1 posterDescriptorGalleryOptions:(id)arg2 error:(out id*)arg3;
+ (bool)storeProactiveGalleryOptionsToPath:(id)arg1 proactiveGalleryOptions:(id)arg2 error:(out id*)arg3;
+ (bool)storeRenderingConfiguration:(id)arg1 forPath:(id)arg2 error:(out id*)arg3;
+ (bool)storeSuggestionMetadataForPath:(id)arg1 suggestionMetadata:(id)arg2 error:(out id*)arg3;
+ (bool)storeTitleStyleConfigurationForPath:(id)arg1 titleStyleConfiguration:(id)arg2 error:(out id*)arg3;
+ (bool)storeUserInfoToPath:(id)arg1 userInfo:(id)arg2 error:(out id*)arg3;
+ (bool)storeUserObject:(id)arg1 path:(id)arg2 atURL:(id)arg3 clearCache:(bool)arg4 error:(out id*)arg5;
+ (id)suggestionMetadataURLForIdentifierURL:(id)arg1;
+ (id)suggestionMetadataURLForPath:(id)arg1;
+ (id)titleStyleConfigurationURLForPath:(id)arg1;
+ (id)titleStyleConfigurationURLForPathInstanceURL:(id)arg1;
+ (id)userInfoURLForPath:(id)arg1;
+ (id)userInfoURLForPosterContentsURL:(id)arg1;

@end