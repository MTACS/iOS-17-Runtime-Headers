
@interface FASettingsPresetsResponse : NSObject <NSSecureCoding> {
    NSArray * _availablePresets;
    FASettingsPreset * _currentPreset;
    FASettingsPreset * _expectedPreset;
}

@property (nonatomic, readonly, copy) NSArray *availablePresets;
@property (nonatomic, readonly) FASettingsPreset *currentPreset;
@property (nonatomic, readonly) FASettingsPreset *expectedPreset;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)availablePresets;
- (id)currentPreset;
- (void)encodeWithCoder:(id)arg1;
- (id)expectedPreset;
- (id)initWithAvailablePresets:(id)arg1 expectedPreset:(id)arg2 currentPreset:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end
