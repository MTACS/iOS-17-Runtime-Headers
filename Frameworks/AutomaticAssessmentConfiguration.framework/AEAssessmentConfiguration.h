
@interface AEAssessmentConfiguration : NSObject <NSCopying> {
    bool  _allowsAccessibilitySpeech;
    bool  _allowsActivityContinuation;
    bool  _allowsContinuousPathKeyboard;
    bool  _allowsDictation;
    bool  _allowsKeyboardShortcuts;
    bool  _allowsPasswordAutoFill;
    bool  _allowsPredictiveKeyboard;
    bool  _allowsSpellCheck;
    unsigned long long  _autocorrectMode;
    NSMutableDictionary * _backingConfiguratonsByApplication;
    AEAssessmentParticipantConfiguration * _mainParticipantConfiguration;
}

@property (nonatomic) bool allowsAccessibilitySpeech;
@property (nonatomic) bool allowsActivityContinuation;
@property (nonatomic) bool allowsContinuousPathKeyboard;
@property (nonatomic) bool allowsDictation;
@property (nonatomic) bool allowsKeyboardShortcuts;
@property (nonatomic) bool allowsPasswordAutoFill;
@property (nonatomic) bool allowsPredictiveKeyboard;
@property (nonatomic) bool allowsSpellCheck;
@property (nonatomic) unsigned long long autocorrectMode;
@property (nonatomic, readonly, copy) NSDictionary *configurationsByApplication;
@property (nonatomic, readonly) AEAssessmentParticipantConfiguration *mainParticipantConfiguration;

+ (id)configurationFromWrapper:(id)arg1;

- (void).cxx_destruct;
- (bool)__allowsAccessibilitySpeech;
- (bool)__allowsActivityContinuation;
- (bool)__allowsContinuousPathKeyboard;
- (bool)__allowsDictation;
- (bool)__allowsKeyboardShortcuts;
- (bool)__allowsPasswordAutoFill;
- (bool)__allowsPredictiveKeyboard;
- (bool)__allowsSpellCheck;
- (unsigned long long)__autocorrectMode;
- (id)__configurationsByApplication;
- (id)__mainParticipantConfiguration;
- (void)__removeApplication:(id)arg1;
- (void)__setConfiguration:(id)arg1 forApplication:(id)arg2;
- (bool)allowsAccessibilitySpeech;
- (bool)allowsActivityContinuation;
- (bool)allowsContinuousPathKeyboard;
- (bool)allowsDictation;
- (bool)allowsKeyboardShortcuts;
- (bool)allowsPasswordAutoFill;
- (bool)allowsPredictiveKeyboard;
- (bool)allowsSpellCheck;
- (unsigned long long)autocorrectMode;
- (id)configurationWrapper;
- (id)configurationsByApplication;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mainParticipantConfiguration;
- (void)removeApplication:(id)arg1;
- (void)setAllowsAccessibilitySpeech:(bool)arg1;
- (void)setAllowsActivityContinuation:(bool)arg1;
- (void)setAllowsContinuousPathKeyboard:(bool)arg1;
- (void)setAllowsDictation:(bool)arg1;
- (void)setAllowsKeyboardShortcuts:(bool)arg1;
- (void)setAllowsPasswordAutoFill:(bool)arg1;
- (void)setAllowsPredictiveKeyboard:(bool)arg1;
- (void)setAllowsSpellCheck:(bool)arg1;
- (void)setAutocorrectMode:(unsigned long long)arg1;
- (void)setConfiguration:(id)arg1 forApplication:(id)arg2;
- (void)set__allowsAccessibilitySpeech:(bool)arg1;
- (void)set__allowsActivityContinuation:(bool)arg1;
- (void)set__allowsContinuousPathKeyboard:(bool)arg1;
- (void)set__allowsDictation:(bool)arg1;
- (void)set__allowsKeyboardShortcuts:(bool)arg1;
- (void)set__allowsPasswordAutoFill:(bool)arg1;
- (void)set__allowsPredictiveKeyboard:(bool)arg1;
- (void)set__allowsSpellCheck:(bool)arg1;
- (void)set__autocorrectMode:(unsigned long long)arg1;

@end
