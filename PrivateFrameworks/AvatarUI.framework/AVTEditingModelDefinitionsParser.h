
@interface AVTEditingModelDefinitionsParser : NSObject {
    AVTEditingModelColors * _colorCache;
    NSDictionary * _colorPickersDefinitions;
    NSError * _error;
    AVTUILogger * _logger;
    NSDictionary * _multicolorPickersDefinitions;
    NSDictionary * _neutralMemojiPresetsIdentifierPerCategory;
    unsigned long long  _platform;
    NSString * _platformDictionaryKey;
    NSData * _plistData;
    NSDictionary * _presetPickersDefinitions;
}

@property (nonatomic, retain) AVTEditingModelColors *colorCache;
@property (nonatomic, retain) NSDictionary *colorPickersDefinitions;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) AVTUILogger *logger;
@property (nonatomic, retain) NSDictionary *multicolorPickersDefinitions;
@property (nonatomic, retain) NSDictionary *neutralMemojiPresetsIdentifierPerCategory;
@property (nonatomic, readonly) unsigned long long platform;
@property (nonatomic, readonly) NSString *platformDictionaryKey;
@property (nonatomic, readonly) NSData *plistData;
@property (nonatomic, retain) NSDictionary *presetPickersDefinitions;

+ (id)dataFromAvatarKit;
+ (id)dataFromBundle;
+ (unsigned long long)defaultSortingOptionForPlatform:(unsigned long long)arg1;
+ (id)errorWithDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)localizedString:(id)arg1;
+ (id)platformDictionaryKeyForPlatform:(unsigned long long)arg1;
+ (id)sortedModelRows:(id)arg1 forPlatform:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)applyPlatformOverrideForDictionary:(id)arg1;
- (id)colorCache;
- (id)colorPickersDefinitions;
- (id)coreModelCategoryFromCategoryDictionary:(id)arg1;
- (id)coreModelCategoryFromCategoryDictionary:(id)arg1 parsedPickerKeys:(id)arg2;
- (id)coreModelColorsForColorDefinitions:(id)arg1 paletteSettingKind:(struct { long long x1; long long x2; })arg2;
- (id)coreModelColorsForPaletteSettingKind:(struct { long long x1; long long x2; })arg1;
- (id)coreModelColorsRowForColorPickerDictionary:(id)arg1 settingDestination:(long long)arg2 inCategory:(long long)arg3 defaultOptions:(id)arg4;
- (id)coreModelGroupFromGroupDictionary:(id)arg1;
- (id)coreModelMulticolorPickerForDictionary:(id)arg1 groupPickerCategory:(long long)arg2 defaultOptions:(id)arg3 parsedPickerKeys:(id)arg4 error:(id*)arg5;
- (id)coreModelPresetsForCategory:(long long)arg1;
- (id)coreModelRowFromRowDictionary:(id)arg1 availableTags:(id)arg2 usedTags:(id)arg3 defaultOptions:(id)arg4;
- (id)coreModelRowOptionsFromOptionsDictionary:(id)arg1;
- (id)decodePropertyListObjects:(id)arg1;
- (id)error;
- (id)gatherAllTagsFromPresets:(id)arg1;
- (id)initForPlatform:(unsigned long long)arg1 withLogger:(id)arg2;
- (id)initWithPlistData:(id)arg1 forPlatform:(unsigned long long)arg2 logger:(id)arg3;
- (void)initalizeColorCacheIfNeeded;
- (id)localizedSubtitlesForSubtitles:(id)arg1 subpickerCount:(long long)arg2;
- (id)logger;
- (id)multicolorAuxiliaryPickerForDictionary:(id)arg1 error:(id*)arg2;
- (id)multicolorPickersDefinitions;
- (id)neutralMemojiPresetIdentifierForCategory:(long long)arg1;
- (id)neutralMemojiPresetsIdentifierPerCategory;
- (id)pairingFromDictionary:(id)arg1;
- (id)parseCoreModelFromGroupsDefinitions:(id)arg1 colorDefaultsDefinitions:(id)arg2;
- (void)parseWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)platform;
- (id)platformDictionaryKey;
- (id)plistData;
- (id)presetPickersDefinitions;
- (void)setColorCache:(id)arg1;
- (void)setColorPickersDefinitions:(id)arg1;
- (void)setError:(id)arg1;
- (void)setMulticolorPickersDefinitions:(id)arg1;
- (void)setNeutralMemojiPresetsIdentifierPerCategory:(id)arg1;
- (void)setPresetPickersDefinitions:(id)arg1;
- (id)symbolNamesFromGroupDictionary:(id)arg1;
- (bool)validateForCategoryWithEnumValue:(id)arg1 pickers:(id)arg2;
- (bool)validateForColorPicker:(id)arg1 colorPaletteCategory:(id)arg2 error:(id*)arg3;
- (bool)validateForMulticolorPicker:(id)arg1 subpickers:(id)arg2 error:(id*)arg3;

@end
