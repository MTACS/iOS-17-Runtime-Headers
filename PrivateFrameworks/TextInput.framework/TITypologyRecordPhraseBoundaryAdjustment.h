
@interface TITypologyRecordPhraseBoundaryAdjustment : TITypologyRecord {
    bool  _forwardAdjustment;
    int  _granularity;
    TIKeyboardConfiguration * _keyboardConfig;
    TIKeyboardState * _keyboardState;
}

@property (nonatomic) bool forwardAdjustment;
@property (nonatomic) int granularity;
@property (nonatomic, retain) TIKeyboardConfiguration *keyboardConfig;
@property (nonatomic, retain) TIKeyboardState *keyboardState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToStatistic:(id)arg1;
- (id)currentKeyboardState;
- (void)encodeWithCoder:(id)arg1;
- (bool)forwardAdjustment;
- (int)granularity;
- (id)initWithCoder:(id)arg1;
- (id)keyboardConfig;
- (id)keyboardState;
- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)arg1;
- (void)setForwardAdjustment:(bool)arg1;
- (void)setGranularity:(int)arg1;
- (void)setKeyboardConfig:(id)arg1;
- (void)setKeyboardState:(id)arg1;
- (id)shortDescription;

@end
