
@interface TITypologyRecordCandidateResultSet : TITypologyRecord {
    TIKeyboardState * _keyboardState;
    TICandidateRequestToken * _requestToken;
    TIKeyboardCandidateResultSet * _resultSet;
}

@property (nonatomic, retain) TIKeyboardState *keyboardState;
@property (nonatomic, retain) TICandidateRequestToken *requestToken;
@property (nonatomic, retain) TIKeyboardCandidateResultSet *resultSet;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToStatistic:(id)arg1;
- (id)currentKeyboardState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyboardState;
- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)arg1;
- (id)requestToken;
- (id)resultSet;
- (void)setKeyboardState:(id)arg1;
- (void)setRequestToken:(id)arg1;
- (void)setResultSet:(id)arg1;
- (id)shortDescription;

@end
