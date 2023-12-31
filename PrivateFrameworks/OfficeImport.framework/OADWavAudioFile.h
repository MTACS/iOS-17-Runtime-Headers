
@interface OADWavAudioFile : OADEmbeddedMediaFile {
    float  mDuration;
    bool  mHasDuration;
}

@property (nonatomic) float duration;
@property (nonatomic) bool hasDuration;

- (float)duration;
- (bool)hasDuration;
- (bool)isAudioOnly;
- (void)setDuration:(float)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setIsAudioOnly:(bool)arg1;

@end
