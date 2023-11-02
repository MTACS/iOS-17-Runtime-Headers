
@interface ATXFaceGalleryLayoutGenerator : NSObject {
    NSArray * _allHeroDescriptors;
    NSArray * _allNonHeroDescriptors;
    NSArray * _candidateFeaturedDescriptors;
    <ATXFaceGalleryLayoutGeneratorComplicationDescriptorProviding> * _complicationDescriptorProvider;
    ATXComplicationSuggestionParameters * _complicationParameters;
    <ATXFaceGalleryLayoutGeneratorComplicationProviding> * _complicationProvider;
    bool  _dayZero;
    NSLocale * _locale;
    NSDictionary * _nonHeroDescriptorsByExtensionBundleId;
    <ATXFaceSuggestionParameters> * _parameters;
}

@property (nonatomic, readonly, copy) NSArray *candidateFeaturedDescriptors;
@property (nonatomic, readonly, copy) NSArray *rankedFeaturedDescriptors;

+ (id)_descriptorsByDeduplicatingExtensionsInDescriptors:(id)arg1;

- (void).cxx_destruct;
- (id)_candidateFeaturedDescriptors;
- (bool)_complicationExistsOnSystem:(id)arg1;
- (bool)_descriptorIsEligibleForComplications:(id)arg1;
- (id)_generateProviderSectionForExtensionBundleIdentifiers:(id)arg1 widgetDescriptorsAdditionalData:(id)arg2;
- (id)_generatedFeaturedPhotosSectionGivenFeaturedSection:(id)arg1 widgetDescriptorsAdditionalData:(id)arg2;
- (id)_generatedFeaturedSectionWithWidgetDescriptorsAdditionalData:(id)arg1;
- (id)_generatedFocusSection;
- (id)_generatedHeroSectionWithWidgetDescriptorsAdditionalData:(id)arg1;
- (id)_generatedPhotoShuffleSectionWithWidgetDescriptorsAdditionalData:(id)arg1;
- (id)_inlineComplicationForDescriptor:(id)arg1;
- (bool)_isFocusUser;
- (id)_itemFromDescriptor:(id)arg1 shouldShowDisplayName:(bool)arg2 shouldShowComplications:(bool)arg3 systemSuggestedComplicationSet:(id)arg4 systemSuggestedLandscapeComplicationSet:(id)arg5;
- (id)_itemsFromDescriptors:(id)arg1 widgetDescriptorsAdditionalData:(id)arg2 shouldShowDisplayName:(bool)arg3 shouldShowComplications:(bool)arg4 limit:(id)arg5;
- (id)_landscapeSetsFromLandscapeSetsDict:(id)arg1;
- (id)_modularComplicationsForDescriptor:(id)arg1 systemSuggestionComplications:(id)arg2;
- (id)_modularLandscapeComplicationsForDescriptor:(id)arg1 systemSuggestionComplications:(id)arg2;
- (void)_processDescriptors:(id)arg1;
- (id)_provisionalLocalizedSubtitleTextWithSemanticType:(long long)arg1 extensionBundleIdentifiers:(id)arg2;
- (id)_shuffledSuggestableComplicationSetsWithWidgetDescriptorsAdditionalData:(id)arg1;
- (id)candidateFeaturedDescriptors;
- (id)generatedConfigurationWithWidgetDescriptorsAdditionalData:(id)arg1;
- (id)initWithDescriptors:(id)arg1 complicationProvider:(id)arg2 complicationDescriptorProvider:(id)arg3 parameters:(id)arg4 dayZero:(bool)arg5 locale:(id)arg6;
- (id)rankedFeaturedDescriptors;

@end
