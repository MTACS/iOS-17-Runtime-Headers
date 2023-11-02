
@interface _MPCVocalsControlCommand : _MPCPlayerCommand <MPCVocalsControlCommand> {
    bool  _active;
    bool  _continuous;
    bool  _disabled;
    long long  _disabledReason;
    float  _level;
    float  _maxLevel;
    float  _minLevel;
}

@property (getter=isActive, nonatomic) bool active;
@property (getter=isContinuous, nonatomic) bool continuous;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic) long long disabledReason;
@property (readonly) unsigned long long hash;
@property (nonatomic) float level;
@property (nonatomic) float maxLevel;
@property (nonatomic) float minLevel;
@property (readonly) Class superclass;

- (id)activateVocalsControl:(bool)arg1;
- (long long)disabledReason;
- (bool)isActive;
- (bool)isContinuous;
- (bool)isDisabled;
- (float)level;
- (float)maxLevel;
- (float)minLevel;
- (void)setActive:(bool)arg1;
- (void)setContinuous:(bool)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setDisabledReason:(long long)arg1;
- (void)setLevel:(float)arg1;
- (void)setMaxLevel:(float)arg1;
- (void)setMinLevel:(float)arg1;
- (id)setVocalsLevel:(float)arg1;

@end
