
@interface AVTConfigurationPreset : NSObject {
    bool  _defaultPreset;
    id  _preset;
    struct { 
        long long destination; 
        long long category; 
    }  _settingKind;
}

@property (getter=isDefaultPreset, nonatomic, readonly) bool defaultPreset;
@property (nonatomic, readonly) id preset;
@property (nonatomic, readonly) struct { long long x1; long long x2; } settingKind;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDefaultPresetForSettingKind:(struct { long long x1; long long x2; })arg1;
- (id)initWithPreset:(id)arg1 settingKind:(struct { long long x1; long long x2; })arg2;
- (bool)isDefaultPreset;
- (bool)isEqual:(id)arg1;
- (id)preset;
- (struct { long long x1; long long x2; })settingKind;

@end
