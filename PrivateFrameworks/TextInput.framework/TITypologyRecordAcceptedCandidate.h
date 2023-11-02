
@interface TITypologyRecordAcceptedCandidate : TITypologyRecord {
    TIKeyboardCandidate * _candidate;
    TIKeyboardConfiguration * _keyboardConfig;
    TIKeyboardState * _keyboardState;
    NSString * _textToCommit;
}

@property (nonatomic, retain) TIKeyboardCandidate *candidate;
@property (nonatomic, retain) TIKeyboardConfiguration *keyboardConfig;
@property (nonatomic, retain) TIKeyboardState *keyboardState;
@property (nonatomic, copy) NSString *textToCommit;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToStatistic:(id)arg1;
- (id)candidate;
- (id)changedText;
- (id)currentKeyboardState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyboardConfig;
- (id)keyboardState;
- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)arg1;
- (void)setCandidate:(id)arg1;
- (void)setKeyboardConfig:(id)arg1;
- (void)setKeyboardState:(id)arg1;
- (void)setTextToCommit:(id)arg1;
- (id)shortDescription;
- (id)textSummary;
- (id)textToCommit;

@end
