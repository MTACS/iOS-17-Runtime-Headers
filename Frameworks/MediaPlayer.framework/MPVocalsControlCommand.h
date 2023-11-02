
@interface MPVocalsControlCommand : MPRemoteCommand {
    bool  _continuous;
    float  _maxVocalsLevel;
    float  _minVocalsLevel;
    bool  _vocalsControlActive;
    float  _vocalsLevel;
}

@property (getter=isContinuous, nonatomic) bool continuous;
@property (nonatomic) float maxVocalsLevel;
@property (nonatomic) float minVocalsLevel;
@property (nonatomic) bool vocalsControlActive;
@property (nonatomic) float vocalsLevel;

- (id)_mediaRemoteCommandInfoOptions;
- (bool)isContinuous;
- (float)maxVocalsLevel;
- (float)minVocalsLevel;
- (void)setContinuous:(bool)arg1;
- (void)setMaxVocalsLevel:(float)arg1;
- (void)setMinVocalsLevel:(float)arg1;
- (void)setVocalsControlActive:(bool)arg1;
- (void)setVocalsLevel:(float)arg1;
- (bool)vocalsControlActive;
- (float)vocalsLevel;

@end
