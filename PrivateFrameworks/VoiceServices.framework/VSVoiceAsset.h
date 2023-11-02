
@interface VSVoiceAsset : VSAssetBase <NSSecureCoding> {
    long long  _footprint;
    long long  _gender;
    bool  _isBuiltInVoice;
    bool  _isInstalled;
    bool  _isVoiceReadyToUse;
    NSArray * _languages;
    NSString * _name;
    long long  _type;
}

@property (nonatomic) long long footprint;
@property (nonatomic) long long gender;
@property (nonatomic) bool isBuiltInVoice;
@property (nonatomic) bool isInstalled;
@property (nonatomic) bool isVoiceReadyToUse;
@property (nonatomic, copy) NSArray *languages;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long type;

+ (id)compatibilityVersionFromMobileAssetAttributes:(id)arg1;
+ (long long)footprintFromString:(id)arg1;
+ (id)footprintStringFromFootprint:(long long)arg1;
+ (long long)genderFromString:(id)arg1;
+ (id)genderStringFromGender:(long long)arg1;
+ (id)languagesFromMobileAssetAttributes:(id)arg1;
+ (bool)supportsSecureCoding;
+ (long long)typeFromString:(id)arg1;
+ (id)typeStringFromType:(long long)arg1;

- (void).cxx_destruct;
- (void)amendNameVersionAndSizeWithMobileAssetAttributes:(id)arg1;
- (id)description;
- (id)descriptiveKey;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (long long)footprint;
- (long long)gender;
- (id)initFromMobileAssetAttributes:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isBuiltInVoice;
- (bool)isInstalled;
- (bool)isVoiceReadyToUse;
- (id)languages;
- (id)name;
- (id)nameKey;
- (void)setFootprint:(long long)arg1;
- (void)setGender:(long long)arg1;
- (void)setIsBuiltInVoice:(bool)arg1;
- (void)setIsInstalled:(bool)arg1;
- (void)setIsVoiceReadyToUse:(bool)arg1;
- (void)setLanguages:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (id)voiceKey;

@end
