
@interface AVTAvatarConfiguration : NSObject <AVTCacheableResource, NSCopying> {
    NSMutableDictionary * _colorPresetsStorage;
    NSMutableDictionary * _presetsStorage;
}

@property (nonatomic, readonly) NSMutableDictionary *colorPresetsStorage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *presetsStorage;
@property (readonly) Class superclass;

+ (id)configurationColorPresetWithColorPreset:(id)arg1 settingKind:(struct { long long x1; long long x2; })arg2 coreModel:(id)arg3;
+ (id)configurationForRecord:(id)arg1 coreModel:(id)arg2;
+ (id)configurationFromAvatar:(id)arg1;
+ (id)configurationFromAvatar:(id)arg1 coreModel:(id)arg2;
+ (id)configurationPresetWithPreset:(id)arg1 settingKind:(struct { long long x1; long long x2; })arg2;
+ (id)keyForSettingKind:(struct { long long x1; long long x2; })arg1;

- (void).cxx_destruct;
- (void)addColorPreset:(id)arg1;
- (void)addConfigurationColorPreset:(id)arg1;
- (void)addConfigurationPreset:(id)arg1;
- (void)addPreset:(id)arg1;
- (void)applyToAvatar:(id)arg1 animated:(bool)arg2;
- (id)colorConfigurationPresets;
- (id)colorPresetForSettingKind:(struct { long long x1; long long x2; })arg1;
- (id)colorPresets;
- (id)colorPresetsStorage;
- (id)configurationPresetForSettingKind:(struct { long long x1; long long x2; })arg1;
- (id)configurationPresets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)costForScope:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPresets:(id)arg1 colorPresets:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)persistentIdentifierForScope:(id)arg1;
- (id)presetConfigurationPresets;
- (id)presetForCategory:(long long)arg1;
- (id)presetForSettingKind:(struct { long long x1; long long x2; })arg1 storage:(id)arg2;
- (id)presets;
- (id)presetsForStorage:(id)arg1;
- (id)presetsStorage;
- (void)removeColorPresetsForSettingKind:(struct { long long x1; long long x2; })arg1;
- (void)removePresetsForCategory:(long long)arg1;
- (void)removePresetsForSettingKind:(struct { long long x1; long long x2; })arg1 storage:(id)arg2;
- (bool)requiresEncryption;
- (id)volatileIdentifierForScope:(id)arg1;

@end
