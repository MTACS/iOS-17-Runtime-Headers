
@interface MNUserOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  _chimeBeforeInstruction;
    unsigned long long  _cyclingVoiceGuidanceLevel;
    unsigned long long  _distanceUnits;
    unsigned long long  _drivingVoiceGuidanceLevel;
    unsigned long long  _maxAlternateRoutesCount;
    bool  _muteSpeechOverride;
    bool  _pauseSpokenAudio;
    bool  _speechEnabled;
    bool  _useHFP;
    unsigned long long  _walkingVoiceGuidanceLevel;
}

@property (nonatomic) bool chimeBeforeInstruction;
@property (nonatomic) unsigned long long cyclingVoiceGuidanceLevel;
@property (nonatomic) unsigned long long distanceUnits;
@property (nonatomic) unsigned long long drivingVoiceGuidanceLevel;
@property (nonatomic) unsigned long long maxAlternateRoutesCount;
@property (nonatomic) bool muteSpeechOverride;
@property (nonatomic) bool pauseSpokenAudio;
@property (nonatomic) bool speechEnabled;
@property (nonatomic) bool useHFP;
@property (nonatomic, readonly) NSString *voiceLanguage;
@property (nonatomic) unsigned long long walkingVoiceGuidanceLevel;

+ (bool)supportsSecureCoding;

- (void)changeTransportType:(int)arg1 toVoiceGuidanceLevel:(unsigned long long)arg2;
- (bool)chimeBeforeInstruction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)cyclingVoiceGuidanceLevel;
- (id)description;
- (unsigned long long)distanceUnits;
- (unsigned long long)drivingVoiceGuidanceLevel;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)guidanceLevelForTransportType:(int)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maxAlternateRoutesCount;
- (bool)muteSpeechOverride;
- (bool)pauseSpokenAudio;
- (void)setChimeBeforeInstruction:(bool)arg1;
- (void)setCyclingVoiceGuidanceLevel:(unsigned long long)arg1;
- (void)setDistanceUnits:(unsigned long long)arg1;
- (void)setDrivingVoiceGuidanceLevel:(unsigned long long)arg1;
- (void)setMaxAlternateRoutesCount:(unsigned long long)arg1;
- (void)setMuteSpeechOverride:(bool)arg1;
- (void)setPauseSpokenAudio:(bool)arg1;
- (void)setSpeechEnabled:(bool)arg1;
- (void)setUseHFP:(bool)arg1;
- (void)setWalkingVoiceGuidanceLevel:(unsigned long long)arg1;
- (bool)speechEnabled;
- (bool)useHFP;
- (id)voiceLanguage;
- (unsigned long long)walkingVoiceGuidanceLevel;

@end
