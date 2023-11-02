
@interface TTSSpeechVoice : NSObject <NSCopying, NSSecureCoding> {
    bool  _canBeDownloaded;
    bool  _excludeInAvailableVoiceList;
    long long  _footprint;
    long long  _gender;
    NSString * _identifier;
    bool  _isCombinedFootprint;
    bool  _isDefault;
    bool  _isFallbackDefault;
    bool  _isNoveltyVoice;
    bool  _isPersonalVoice;
    bool  _isSystemVoice;
    NSString * _language;
    NSString * _name;
    NSString * _nonCombinedVoiceId;
    <TTSSpeechService> * _service;
    NSString * _serviceIdentifier;
    AVSpeechSynthesisProviderVoice * _synthesisProviderVoice;
    long long  _voiceType;
}

@property (nonatomic) bool canBeDownloaded;
@property (nonatomic, readonly) bool excludeInAvailableVoiceList;
@property (nonatomic) long long footprint;
@property (nonatomic) long long gender;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) bool isCombinedFootprint;
@property (nonatomic) bool isDefault;
@property (nonatomic, readonly) bool isFallbackDefault;
@property (nonatomic) bool isNoveltyVoice;
@property (nonatomic) bool isPersonalVoice;
@property (nonatomic) bool isSystemVoice;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *nonCombinedVoiceId;
@property (nonatomic) <TTSSpeechService> *service;
@property (nonatomic, retain) NSString *serviceIdentifier;
@property (nonatomic, retain) AVSpeechSynthesisProviderVoice *synthesisProviderVoice;
@property (nonatomic) long long voiceType;

+ (id)localizedName:(id)arg1 forLanguage:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)voiceFromAVSpeechSynthesisProviderVoice:(id)arg1;

- (void).cxx_destruct;
- (bool)canBeDownloaded;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)excludeInAvailableVoiceList;
- (long long)footprint;
- (long long)gender;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCombinedFootprint;
- (bool)isDefault;
- (bool)isEqual:(id)arg1;
- (bool)isFallbackDefault;
- (bool)isNoveltyVoice;
- (bool)isPersonalVoice;
- (bool)isSystemVoice;
- (id)language;
- (id)localizedNameForLanguage:(id)arg1;
- (id)name;
- (id)nonCombinedVoiceId;
- (id)service;
- (id)serviceIdentifier;
- (void)setCanBeDownloaded:(bool)arg1;
- (void)setFootprint:(long long)arg1;
- (void)setGender:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsDefault:(bool)arg1;
- (void)setIsNoveltyVoice:(bool)arg1;
- (void)setIsPersonalVoice:(bool)arg1;
- (void)setIsSystemVoice:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNonCombinedVoiceId:(id)arg1;
- (void)setService:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setSynthesisProviderVoice:(id)arg1;
- (void)setVoiceType:(long long)arg1;
- (id)synthesisProviderVoice;
- (long long)voiceType;

@end
