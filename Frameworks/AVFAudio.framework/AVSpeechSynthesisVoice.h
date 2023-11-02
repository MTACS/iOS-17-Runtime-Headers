
@interface AVSpeechSynthesisVoice : NSObject <NSSecureCoding> {
    NSDictionary * _audioFileSettings;
}

@property (nonatomic, readonly) NSDictionary *audioFileSettings;
@property (nonatomic) long long gender;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isNoveltyVoice;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) NSString *nameWithoutQuality;
@property (nonatomic, readonly) NSString *nonLocalizedName;
@property (nonatomic, readonly) NSString *nonLocalizedNameWithoutQuality;
@property (nonatomic) long long quality;
@property (nonatomic) bool supportsSSML;
@property (nonatomic) unsigned long long voiceTraits;

// Image: /System/Library/Frameworks/AVFAudio.framework/AVFAudio

+ (id)currentLanguageCode;
+ (void)initialize;
+ (id)speechVoices;
+ (bool)supportsSecureCoding;
+ (id)voiceWithIdentifier:(id)arg1;
+ (id)voiceWithLanguage:(id)arg1;

- (void).cxx_destruct;
- (id)audioFileSettings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech

+ (id)_remapOldIdentifierIfNecessary:(id)arg1;
+ (id)_speechVoicesIncludingSiri;
+ (id)_speechVoicesIncludingSiri:(bool)arg1;
+ (id)_speechVoicesIncludingSiriAndSuperCompact;
+ (id)_voiceFromInternalVoiceListWithIdentifier:(id)arg1;
+ (id)_voiceWithIdentifier:(id)arg1 includingSiri:(bool)arg2;
+ (id)currentLanguageCode;
+ (id)speechVoices;
+ (id)speechVoicesIncludingSuperCompact;
+ (void)test_setInternalSpeechVoices:(id)arg1;
+ (void)test_setSpeechVoices:(id)arg1;
+ (id)test_speechVoices;
+ (id)voiceWithIdentifier:(id)arg1;
+ (id)voiceWithLanguage:(id)arg1;

- (id)_enhancedLocalizedNameFormat;
- (id)_premiumLocalizedNameFormat;
- (long long)assetSize;
- (id)audioFileSettings;
- (id)backupName;
- (bool)canBeDownloaded;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)gender;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithLanguage:(id)arg1;
- (bool)isCombinedVoice;
- (bool)isDefault;
- (bool)isEqual:(id)arg1;
- (bool)isFallbackDefault;
- (bool)isInstalled;
- (bool)isNoveltyVoice;
- (bool)isSynthesisProviderVoice;
- (bool)isSystemVoice;
- (id)language;
- (id)name;
- (id)nameWithoutQuality;
- (id)nonCombinedVoiceId;
- (id)nonLocalizedName;
- (id)nonLocalizedNameWithoutQuality;
- (long long)quality;
- (void)setAssetSize:(long long)arg1;
- (void)setBackupName:(id)arg1;
- (void)setCanBeDownloaded:(bool)arg1;
- (void)setGender:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsCombinedVoice:(bool)arg1;
- (void)setIsDefault:(bool)arg1;
- (void)setIsFallbackDefault:(bool)arg1;
- (void)setIsInstalled:(bool)arg1;
- (void)setIsNoveltyVoice:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setNonCombinedVoiceId:(id)arg1;
- (void)setNonLocalizedNameWithoutQuality:(id)arg1;
- (void)setQuality:(long long)arg1;
- (void)setSynthesisProviderVoice:(id)arg1;
- (id)siriDisplayName;
- (bool)supportsSSML;
- (id)synthesisProviderVoice;
- (unsigned long long)voiceTraits;

@end
