
@interface TITypologyRecordKeyboardInput : TITypologyRecord {
    TIKeyboardInput * _input;
    TIKeyboardConfiguration * _keyboardConfig;
    TIKeyboardState * _keyboardState;
    TIKeyboardOutput * _output;
}

@property (nonatomic, retain) TIKeyboardInput *input;
@property (nonatomic, retain) TIKeyboardConfiguration *keyboardConfig;
@property (nonatomic, retain) TIKeyboardState *keyboardState;
@property (nonatomic, retain) TIKeyboardOutput *output;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToStatistic:(id)arg1;
- (id)changedText;
- (id)currentKeyboardState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)input;
- (id)keyboardConfig;
- (id)keyboardState;
- (id)output;
- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)arg1;
- (void)setInput:(id)arg1;
- (void)setKeyboardConfig:(id)arg1;
- (void)setKeyboardState:(id)arg1;
- (void)setOutput:(id)arg1;
- (id)shortDescription;
- (id)textSummary;

@end
