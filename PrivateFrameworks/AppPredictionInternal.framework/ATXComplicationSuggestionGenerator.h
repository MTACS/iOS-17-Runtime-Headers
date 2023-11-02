
@interface ATXComplicationSuggestionGenerator : NSObject <ATXFaceGalleryLayoutGeneratorComplicationProviding> {
    ATXComplicationSuggestionScorer * _complicationScorer;
    ATXComplicationSuggestionCache * _complicationSuggestionCache;
    ATXWidgetDescriptorCache * _descriptorCache;
    ATXComplicationSuggestionParameters * _parameters;
    ATXPosterConfigurationCache * _posterConfigurationCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ATXComplicationSet *inlineSet;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_circularComplicationFromComplications:(id)arg1;
- (bool)_complicationIsAlreadyAdded:(id)arg1 alreadyAddedComplications:(id)arg2;
- (id)_complicationsFromFallbackSet:(id)arg1 alreadyAddedDescriptors:(id)arg2;
- (id)_getComplicationsOfFamily:(long long)arg1 descriptors:(id)arg2 alreadyAddedDescriptors:(id)arg3 presetComplications:(id)arg4 limit:(unsigned long long)arg5;
- (id)_inlineSetDescriptors_ShouldRefresh:(bool)arg1;
- (id)_landscapeModularFallbackSets;
- (id)_landscapeModularSetDescriptors_ShouldRefresh:(bool)arg1 widgetDescriptorsAdditionalData:(id)arg2;
- (bool)_layoutIsValidGivenComplications:(id)arg1 allowedComplicationPersonalities:(id)arg2;
- (long long)_layoutTypeForSet:(id)arg1;
- (id)_modularDescriptors_ShouldRefresh:(bool)arg1 widgetDescriptorsAdditionalData:(id)arg2;
- (id)_modularFallbackSets;
- (id)_modularLayoutTypesGivenRecentsLayoutType:(long long)arg1;
- (id)_presetLandscapeComplicationsFromPortraitSet:(id)arg1;
- (id)_recentInlineComplications;
- (id)_recentLandscapeComplicationsWithPresetDictionary:(id)arg1;
- (id)_recentsComplications_unusedComplications:(id)arg1;
- (id)_recentsSet_unusedComplications:(id)arg1;
- (id)_rectangularComplicationFromComplications:(id)arg1;
- (id)_scoredInlineComplicationDescriptors;
- (id)_scoredModularComplicationDescriptorsWithWidgetDescriptorsAdditionalData:(id)arg1;
- (id)_setWithDesiredLayout:(long long)arg1 complicationDescriptors:(id)arg2 unusedRecentsComplications:(id)arg3 alreadyAddedComplications:(id)arg4;
- (id)descriptionForScoredSet:(id)arg1;
- (id)init;
- (id)inlineSet;
- (id)inputDescriptionForComplicationSuggestionSignal:(id)arg1;
- (id)landscapeModularSetsDictsWithWidgetDescriptorsAdditionalData:(id)arg1 portraitSets:(id)arg2;
- (id)landscapeModularSetsWithWidgetDescriptorsAdditionalData:(id)arg1;
- (id)landscapeModularSetsWithWidgetDescriptorsAdditionalData:(id)arg1 presetPortraitComplications:(id)arg2;
- (id)modelDescription;
- (id)modularSetsWithDesiredLayouts:(id)arg1 unusedRecentComplications:(id)arg2 alreadyAddedComplications:(id)arg3 widgetDescriptorsAdditionalData:(id)arg4;
- (id)modularSetsWithWidgetDescriptorsAdditionalData:(id)arg1;
- (void)refreshComplicationCache;
- (id)scoredComplicationsDescription;

@end
