
@interface TTSNashvilleSpeechVoice : TTSSpeechVoice {
    bool  _overrideDefault;
    bool  _overrideExcludeInAvailableVoiceList;
    bool  _overrideFallbackDefault;
}

@property (nonatomic) bool overrideDefault;
@property (nonatomic) bool overrideExcludeInAvailableVoiceList;
@property (nonatomic) bool overrideFallbackDefault;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)excludeInAvailableVoiceList;
- (id)initWithCoder:(id)arg1;
- (bool)isCombinedFootprint;
- (bool)isDefault;
- (bool)isFallbackDefault;
- (bool)isSystemVoice;
- (bool)overrideDefault;
- (bool)overrideExcludeInAvailableVoiceList;
- (bool)overrideFallbackDefault;
- (void)setOverrideDefault:(bool)arg1;
- (void)setOverrideExcludeInAvailableVoiceList:(bool)arg1;
- (void)setOverrideFallbackDefault:(bool)arg1;

@end
