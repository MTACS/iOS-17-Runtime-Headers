
@interface SFSpeechSynthesisVoice : NSObject {
    NSString * _gender;
    bool  _isDefault;
    NSLocale * _locale;
    NSString * _name;
    SFSSResourceAsset * _resourceAsset;
    SFSpeechSynthesisServerVoiceConfig * _serverVoiceConfig;
    SFSSVoiceAsset * _voiceAsset;
    long long  _voiceReleaseType;
    long long  _voiceType;
}

@property (nonatomic, readonly) NSString *gender;
@property (nonatomic, readonly) bool isDefault;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) SFSSResourceAsset *resourceAsset;
@property (nonatomic, retain) SFSpeechSynthesisServerVoiceConfig *serverVoiceConfig;
@property (nonatomic, retain) SFSSVoiceAsset *voiceAsset;
@property (nonatomic) long long voiceReleaseType;
@property (nonatomic) long long voiceType;

+ (id)getDefaultVoiceByLocale:(id)arg1;
+ (id)getVoiceByName:(id)arg1;
+ (void)initialize;
+ (id)supportedLocales;
+ (id)supportedVoicesByLocale:(id)arg1;

- (void).cxx_destruct;
- (id)gender;
- (id)init:(id)arg1 gender:(id)arg2 name:(id)arg3 isDefault:(bool)arg4;
- (id)initWithVoiceAsset:(id)arg1 resourceAsset:(id)arg2;
- (bool)isDefault;
- (id)locale;
- (id)name;
- (id)resourceAsset;
- (id)serverVoiceConfig;
- (void)setResourceAsset:(id)arg1;
- (void)setServerVoiceConfig:(id)arg1;
- (void)setVoiceAsset:(id)arg1;
- (void)setVoiceReleaseType:(long long)arg1;
- (void)setVoiceType:(long long)arg1;
- (id)voiceAsset;
- (long long)voiceReleaseType;
- (long long)voiceType;

@end
