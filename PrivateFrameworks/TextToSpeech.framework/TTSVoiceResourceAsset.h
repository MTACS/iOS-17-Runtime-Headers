
@interface TTSVoiceResourceAsset : TTSAssetBase <NSSecureCoding> {
    NSArray * _languages;
    NSArray * _resourceList;
    NSURL * _searchPathURL;
    NSDictionary * _voiceConfig;
}

@property (nonatomic, copy) NSArray *languages;
@property (nonatomic, copy) NSArray *resourceList;
@property (nonatomic, copy) NSURL *searchPathURL;
@property (nonatomic, copy) NSDictionary *voiceConfig;

+ (id)legacyPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)defaultFootprintString;
- (id)defaultTypeString;
- (id)defaultVoice;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)languages;
- (id)resourceList;
- (id)searchPathURL;
- (void)setLanguages:(id)arg1;
- (void)setResourceList:(id)arg1;
- (void)setSearchPathURL:(id)arg1;
- (void)setVoiceConfig:(id)arg1;
- (void)syncWithConfigData:(id)arg1 voiceType:(long long)arg2;
- (void)syncWithConfigFile:(id)arg1 voiceType:(long long)arg2;
- (id)voiceConfig;

@end
