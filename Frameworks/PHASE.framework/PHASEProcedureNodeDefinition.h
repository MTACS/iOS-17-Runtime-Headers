
@interface PHASEProcedureNodeDefinition : PHASEGeneratorNodeDefinition {
    long long  _cullOption;
    int  _maxPolyphony;
    long long  _playbackMode;
    double  _referenceGainDbSpl;
    long long  _voiceStealingType;
}

@property (nonatomic) long long cullOption;
@property (nonatomic, readonly) int maxPolyphony;
@property (nonatomic) long long playbackMode;
@property (nonatomic) double referenceGainDbSpl;
@property (nonatomic) long long voiceStealingType;

+ (id)new;

- (long long)cullOption;
- (id)init;
- (id)initInternal:(id)arg1 maxPolyphony:(int)arg2 voiceStealingType:(long long)arg3;
- (int)maxPolyphony;
- (long long)playbackMode;
- (double)referenceGainDbSpl;
- (void)setCullOption:(long long)arg1;
- (void)setPlaybackMode:(long long)arg1;
- (void)setReferenceGainDbSpl:(double)arg1;
- (void)setVoiceStealingType:(long long)arg1;
- (long long)voiceStealingType;

@end
