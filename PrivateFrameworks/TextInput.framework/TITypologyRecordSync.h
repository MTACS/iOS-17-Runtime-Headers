
@interface TITypologyRecordSync : TITypologyRecord {
    TIKeyboardConfiguration * _keyboardConfig;
    TIKeyboardState * _keyboardState;
}

@property (nonatomic, retain) TIKeyboardConfiguration *keyboardConfig;
@property (nonatomic, retain) TIKeyboardState *keyboardState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToStatistic:(id)arg1;
- (id)currentKeyboardState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyboardConfig;
- (id)keyboardState;
- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)arg1;
- (void)setKeyboardConfig:(id)arg1;
- (void)setKeyboardState:(id)arg1;
- (id)shortDescription;
- (id)textSummary;

@end
