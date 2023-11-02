
@interface VSVoiceResourceAsset : VSAssetBase <NSSecureCoding> {
    NSArray * _languages;
    float  _pitch;
    float  _rate;
    NSArray * _resourceList;
    NSDictionary * _resourceMimeTypes;
    NSURL * _searchPathURL;
    NSDictionary * _vocalizerConfig;
    NSDictionary * _voiceConfig;
    float  _volume;
}

@property (nonatomic, copy) NSArray *languages;
@property (nonatomic) float pitch;
@property (nonatomic) float rate;
@property (nonatomic, copy) NSArray *resourceList;
@property (nonatomic, copy) NSDictionary *resourceMimeTypes;
@property (nonatomic, copy) NSURL *searchPathURL;
@property (nonatomic, retain) NSDictionary *vocalizerConfig;
@property (nonatomic, copy) NSDictionary *voiceConfig;
@property (nonatomic) float volume;

+ (id)resourceFromTrial:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_defaultVoices;
- (id)defaultVoice;
- (long long)defaultVoiceGender;
- (id)defaultVoiceNameForGender:(long long)arg1;
- (long long)defaultVoiceType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)key;
- (id)languages;
- (float)pitch;
- (float)rate;
- (id)resourceList;
- (id)resourceMimeTypes;
- (id)searchPathURL;
- (void)setLanguages:(id)arg1;
- (void)setPitch:(float)arg1;
- (void)setRate:(float)arg1;
- (void)setResourceList:(id)arg1;
- (void)setResourceMimeTypes:(id)arg1;
- (void)setSearchPathURL:(id)arg1;
- (void)setVocalizerConfig:(id)arg1;
- (void)setVoiceConfig:(id)arg1;
- (void)setVolume:(float)arg1;
- (id)vocalizerConfig;
- (id)voiceConfig;
- (float)volume;

@end
