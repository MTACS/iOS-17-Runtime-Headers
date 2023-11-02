
@interface AVTMemojiDescriptor : AVTAvatarDescriptor {
    AVTColorPreset * _colorPresets;
    NSString * _presetIdentifiers;
}

+ (unsigned char)classIdentifier;
+ (id)colorPresetFromColorData:(id)arg1 forCategory:(long long)arg2 colorIndex:(unsigned long long)arg3 version:(unsigned short)arg4 didFail:(bool*)arg5 error:(id*)arg6;
+ (id)presetsDictionaryFromRecipe:(id)arg1 didFail:(bool*)arg2 error:(id*)arg3;
+ (id)randomDescriptor;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_decode:(id)arg1 isResettingToDefault:(bool)arg2 error:(id*)arg3;
- (void)applyToMemoji:(id)arg1;
- (id)colorPresetForCategory:(long long)arg1 colorIndex:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeInDictionaryRepresentation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 error:(id*)arg2;
- (id)initWithDictionaryRepresentation:(id)arg1 error:(id*)arg2 isResettingToDefault:(bool)arg3;
- (id)initWithMemoji:(id)arg1;
- (id)presetIdentifierForCategory:(long long)arg1;
- (void)setColorPreset:(id)arg1 forCategory:(long long)arg2 colorIndex:(unsigned long long)arg3;
- (void)setPresetIdentifier:(id)arg1 forCategory:(long long)arg2;

@end
