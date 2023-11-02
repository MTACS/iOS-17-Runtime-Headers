
@interface MNAudioSystemOptions : NSObject <NSCopying> {
    bool  _chimeBeforeInstruction;
    unsigned long long  _cyclingVoiceGuidanceLevel;
    unsigned long long  _drivingVoiceGuidanceLevel;
    bool  _muteSpeechOverride;
    bool  _pauseSpokenAudio;
    bool  _useHFP;
    unsigned long long  _walkingVoiceGuidanceLevel;
}

@property (nonatomic, readonly) bool chimeBeforeInstruction;
@property (nonatomic, readonly) unsigned long long cyclingVoiceGuidanceLevel;
@property (nonatomic, readonly) unsigned long long drivingVoiceGuidanceLevel;
@property (nonatomic, readonly) bool muteSpeechOverride;
@property (nonatomic, readonly) bool pauseSpokenAudio;
@property (nonatomic, readonly) bool useHFP;
@property (nonatomic, readonly) unsigned long long walkingVoiceGuidanceLevel;

- (bool)chimeBeforeInstruction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)cyclingVoiceGuidanceLevel;
- (id)description;
- (unsigned long long)drivingVoiceGuidanceLevel;
- (id)initWithDrivingVoiceGuidanceLevel:(unsigned long long)arg1 andWalkingVoiceGuidanceLevel:(unsigned long long)arg2 andCyclingVoiceGuidanceLevel:(unsigned long long)arg3 andUseHFP:(bool)arg4 andPauseSpokenAudio:(bool)arg5 andChimeBeforeInstruction:(bool)arg6 andMuteSpeechOverride:(bool)arg7;
- (bool)muteSpeechOverride;
- (bool)pauseSpokenAudio;
- (bool)useHFP;
- (unsigned long long)walkingVoiceGuidanceLevel;

@end
