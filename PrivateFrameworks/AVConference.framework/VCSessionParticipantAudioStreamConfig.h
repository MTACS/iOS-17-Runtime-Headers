
@interface VCSessionParticipantAudioStreamConfig : VCAudioStreamConfig {
    VCAudioRuleCollection * _audioRules;
    VCAudioRuleCollection * _audioRulesNegotiated;
}

@property (nonatomic, retain) VCAudioRuleCollection *audioRules;
@property (nonatomic, retain) VCAudioRuleCollection *audioRulesNegotiated;

- (id)audioRules;
- (id)audioRulesNegotiated;
- (void)dealloc;
- (void)setAudioRules:(id)arg1;
- (void)setAudioRulesNegotiated:(id)arg1;

@end
