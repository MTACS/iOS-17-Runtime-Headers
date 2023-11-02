
@interface AVTAvatarAttributeEditorModelBuilder : NSObject

+ (void)addTags:(id)arg1 toMutableTagSet:(id)arg2;
+ (id)buildDataSourceCategoriesFromCoreModel:(id)arg1 selectingFromAvatarConfiguration:(id)arg2 imageProvider:(id)arg3 colorLayerProvider:(id)arg4 stickerRenderer:(id)arg5 modelManager:(id)arg6 withSelectedCategory:(id)arg7 atIndex:(unsigned long long)arg8;
+ (unsigned long long)destinationForPresetCategory:(long long)arg1 isPaired:(bool)arg2;
+ (id)filterPresets:(id)arg1 forRowRepresentingTags:(id)arg2 currentTagSelection:(id)arg3 fixedTags:(id)arg4 availableTags:(id)arg5 sortingOption:(unsigned long long)arg6;
+ (id)filterPresets:(id)arg1 matchingTagValues:(id)arg2 sortedUsing:(unsigned long long)arg3;
+ (id)firstColorSectionInSections:(id)arg1;
+ (id)framingModeForRow:(id)arg1 selectedPreset:(id)arg2;
+ (void)insertPreset:(id)arg1 intoList:(id)arg2 forSortingOption:(unsigned long long)arg3;
+ (id)multicolorSectionProviderForCoreMulticolorPicker:(id)arg1 platform:(unsigned long long)arg2 configuration:(id)arg3 imageProvider:(id)arg4 colorLayerProvider:(id)arg5 editingColors:(id)arg6 colorDefaultsProvider:(id)arg7 modelManager:(id)arg8 previousSectionMap:(id)arg9 pairingPickers:(id)arg10;
+ (id)previewModeForCoreModelGroup:(id)arg1;
+ (int)scoreForTags:(id)arg1 forCombination:(id)arg2 currentSelection:(id)arg3;
+ (id)sectionColorItemsForColors:(id)arg1 selectedPreset:(id)arg2 configuration:(id)arg3 modelManager:(id)arg4 additionalUpdateKind:(struct { long long x1; long long x2; })arg5 imageProvider:(id)arg6 colorLayerProvider:(id)arg7 pairedCategory:(long long)arg8 editingColors:(id)arg9;
+ (unsigned long long)sectionDisplayModeForCoreModelDisplayMode:(unsigned long long)arg1;
+ (id)sectionForModelColorsRow:(id)arg1 configuration:(id)arg2 modelManager:(id)arg3 imageProvider:(id)arg4 colorLayerProvider:(id)arg5 pairedCategory:(long long)arg6 destination:(long long)arg7 editingColors:(id)arg8 displaysTitle:(bool)arg9;
+ (id)sectionForModelColorsRow:(id)arg1 selectedColorPreset:(id)arg2 configuration:(id)arg3 modelManager:(id)arg4 additionalAvatarUpdateKind:(struct { long long x1; long long x2; })arg5 imageProvider:(id)arg6 colorLayerProvider:(id)arg7 pairedCategory:(long long)arg8 destination:(long long)arg9 editingColors:(id)arg10 displaysTitle:(bool)arg11;
+ (id)sectionForModelRow:(id)arg1 fromModelPresets:(id)arg2 selectedModelPreset:(id)arg3 tagSelection:(id)arg4 fixedTags:(id)arg5 availableTags:(id)arg6 category:(long long)arg7 imageProvider:(id)arg8 stickerRenderer:(id)arg9 configuration:(id)arg10 previousSection:(id)arg11 pairedCategory:(long long)arg12;
+ (id)sectionOptionFromModelOptions:(id)arg1;
+ (id)sectionProvidersForCoreModelCategory:(id)arg1 platform:(unsigned long long)arg2 modelManager:(id)arg3 pairingPickers:(id)arg4 editingColors:(id)arg5 colorDefaultsProvider:(id)arg6 previousSectionMap:(id)arg7 imageProvider:(id)arg8 colorLayerProvider:(id)arg9 stickerRenderer:(id)arg10 configuration:(id)arg11 displayConditionEvaluator:(id /* block */)arg12;
+ (id)selectedModelPresetForSelectedPreset:(id)arg1 inPresetsList:(id)arg2;
+ (id)selectedPresetForCoreModelColorsPicker:(id)arg1 isEnabled:(bool)arg2 fallbackToColorsPicker:(id)arg3 colorDefaultsProvider:(id)arg4 modelManager:(id)arg5;
+ (void)setTags:(id)arg1 onMutableTagSet:(id)arg2;
+ (id)subtitleFromSubtitles:(id)arg1 forIndex:(long long)arg2 enabledIndex:(long long)arg3;
+ (id)tagCombinationsForTagNames:(id)arg1 availableTags:(id)arg2;
+ (id)tagSetByRemovingTagNames:(id)arg1 fromTagSet:(id)arg2;
+ (id)tagSetForTagNames:(id)arg1 inTagSet:(id)arg2;

@end
