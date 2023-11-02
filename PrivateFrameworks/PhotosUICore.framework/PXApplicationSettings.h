
@interface PXApplicationSettings : PXSettings {
    double  _backgroundThresholdDurationForUndoActionsInvalidation;
    double  _defaultNavigationTimeoutDuration;
    long long  _pseudoStringsLengthIncreaseFactor;
    bool  _shouldClearUndoStackAutomatically;
    NSString * _stringWithSpecialCharacters;
    bool  _wantsPseudostringsWithIncreasedLength;
    bool  _wantsPseudostringsWithSpecialCharacters;
}

@property (nonatomic) double backgroundThresholdDurationForUndoActionsInvalidation;
@property (nonatomic) double defaultNavigationTimeoutDuration;
@property (nonatomic) long long pseudoStringsLengthIncreaseFactor;
@property (nonatomic) bool shouldClearUndoStackAutomatically;
@property (nonatomic, copy) NSString *stringWithSpecialCharacters;
@property (nonatomic) bool wantsPseudostringsWithIncreasedLength;
@property (nonatomic) bool wantsPseudostringsWithSpecialCharacters;

+ (id)attributedStringTransformedForDisplay:(id)arg1;
+ (id)settingsControllerModule;
+ (id)sharedInstance;
+ (id)stringTransformedForDisplay:(id)arg1;

- (void).cxx_destruct;
- (bool)_wantsPseudoStringsForDisplay;
- (double)backgroundThresholdDurationForUndoActionsInvalidation;
- (double)defaultNavigationTimeoutDuration;
- (id)parentSettings;
- (long long)pseudoStringsLengthIncreaseFactor;
- (void)setBackgroundThresholdDurationForUndoActionsInvalidation:(double)arg1;
- (void)setDefaultNavigationTimeoutDuration:(double)arg1;
- (void)setDefaultValues;
- (void)setPseudoStringsLengthIncreaseFactor:(long long)arg1;
- (void)setShouldClearUndoStackAutomatically:(bool)arg1;
- (void)setStringWithSpecialCharacters:(id)arg1;
- (void)setWantsPseudostringsWithIncreasedLength:(bool)arg1;
- (void)setWantsPseudostringsWithSpecialCharacters:(bool)arg1;
- (bool)shouldClearUndoStackAutomatically;
- (id)stringWithSpecialCharacters;
- (bool)wantsPseudostringsWithIncreasedLength;
- (bool)wantsPseudostringsWithSpecialCharacters;

@end
