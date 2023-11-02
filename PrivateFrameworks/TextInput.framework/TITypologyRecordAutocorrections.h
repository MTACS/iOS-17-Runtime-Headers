
@interface TITypologyRecordAutocorrections : TITypologyRecord {
    TIAutocorrectionList * _autocorrections;
    TIKeyboardState * _keyboardState;
    bool  _listUIDisplayed;
    TICandidateRequestToken * _requestToken;
}

@property (nonatomic, retain) TIAutocorrectionList *autocorrections;
@property (nonatomic, retain) TIKeyboardState *keyboardState;
@property (nonatomic) bool listUIDisplayed;
@property (nonatomic, retain) TICandidateRequestToken *requestToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToStatistic:(id)arg1;
- (id)autocorrections;
- (id)currentKeyboardState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyboardState;
- (bool)listUIDisplayed;
- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)arg1;
- (id)requestToken;
- (void)setAutocorrections:(id)arg1;
- (void)setKeyboardState:(id)arg1;
- (void)setListUIDisplayed:(bool)arg1;
- (void)setRequestToken:(id)arg1;
- (id)shortDescription;

@end
