
@interface AVSpeechSynthesisProviderVoice : NSObject <NSCopying, NSSecureCoding> {
    long long  _age;
    long long  _gender;
    NSString * _identifier;
    NSString * _name;
    NSArray * _primaryLanguages;
    NSArray * _supportedLanguages;
    NSString * _version;
    long long  _voiceSize;
}

@property (nonatomic) long long age;
@property (nonatomic) struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } auComponentDesc;
@property (nonatomic, retain) NSDictionary *extraAttributes;
@property (nonatomic) long long gender;
@property (nonatomic, readonly) NSString *groupName;
@property (nonatomic) bool hasPerVoiceSettings;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isFirstParty;
@property (nonatomic) bool isPersonalVoice;
@property (nonatomic, retain) NSString *manufacturerName;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) NSArray *primaryLanguages;
@property (nonatomic, retain) NSArray *primaryLanguages;
@property (nonatomic, retain) NSArray *supportedLanguages;
@property (nonatomic, retain) NSString *synthesizerBundleIdentifier;
@property (nonatomic, retain) NSString *version;
@property (nonatomic) long long voiceSize;

// Image: /System/Library/Frameworks/AVFAudio.framework/AVFAudio

+ (void)initialize;
+ (bool)supportsSecureCoding;
+ (void)updateSpeechVoices;

- (void).cxx_destruct;
- (long long)age;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)gender;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2 primaryLanguages:(id)arg3 supportedLanguages:(id)arg4;
- (id)name;
- (id)primaryLanguages;
- (void)setAge:(long long)arg1;
- (void)setGender:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSupportedLanguages:(id)arg1;
- (void)setVersion:(id)arg1;
- (void)setVoiceSize:(long long)arg1;
- (id)supportedLanguages;
- (id)version;
- (long long)voiceSize;

// Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech

+ (void)updateSpeechVoices;
+ (void)updateSpeechVoicesForClient:(id)arg1;

- (struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })auComponentDesc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extraAttributes;
- (id)fullBundleIdentifier;
- (id)groupName;
- (bool)hasPerVoiceSettings;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2 primaryLanguages:(id)arg3 supportedLanguages:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isFirstParty;
- (bool)isPersonalVoice;
- (id)manufacturerName;
- (id)primaryLanguages;
- (id)rawTTSIdentifier;
- (void)setAuComponentDesc:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1;
- (void)setExtraAttributes:(id)arg1;
- (void)setHasPerVoiceSettings:(bool)arg1;
- (void)setIsFirstParty:(bool)arg1;
- (void)setIsPersonalVoice:(bool)arg1;
- (void)setManufacturerName:(id)arg1;
- (void)setPrimaryLanguages:(id)arg1;
- (void)setSupportedLanguages:(id)arg1;
- (void)setSynthesizerBundleIdentifier:(id)arg1;
- (id)supportedCharacterSet;
- (id)supportedLanguages;
- (id)synthesizerBundleIdentifier;
- (id)uniqueAudioDescSpeechSynthTuple;
- (id)uniqueAudioDescTriple;

@end
