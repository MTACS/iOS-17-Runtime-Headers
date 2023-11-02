
@interface TypistKeyboardChinese : TypistKeyboard {
    NSDictionary * _flickTable;
    NSDictionary * _pinyinMap;
    NSRegularExpression * _whiteSpaceRegex;
}

@property (nonatomic, retain) NSDictionary *flickTable;
@property (nonatomic, retain) NSDictionary *pinyinMap;
@property (nonatomic, retain) NSRegularExpression *whiteSpaceRegex;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_determineHandwritingBound;
- (id)_flickGestureDirection;
- (bool)_isPinyin;
- (bool)_isWubihua;
- (id)changeKeyNameToGenericCharacter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)flickTable;
- (id)generateKeyplaneSwitchTable:(id)arg1;
- (id)generateKeystrokeStream:(id)arg1;
- (id)getExpectedPlaneNameForKey:(id)arg1 currentPlane:(id)arg2;
- (id)getPostfixKey:(id)arg1;
- (id)init:(id)arg1 options:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isAutoshiftedToCapitalPlane:(id)arg1;
- (bool)isHandwriting;
- (bool)isPinyinCharacter:(unsigned short)arg1;
- (bool)isSwitchedToCapitalPlane:(id)arg1 previous:(id)arg2 currentPlane:(id)arg3 context:(id)arg4;
- (bool)isSwitchedToDefaultPlane:(id)arg1;
- (bool)isTenKey;
- (bool)keyWillCommitCandidate:(id)arg1;
- (id)pinyinMap;
- (void)setFlickTable:(id)arg1;
- (void)setPinyinMap:(id)arg1;
- (void)setWhiteSpaceRegex:(id)arg1;
- (id)setupKeyboardInfo:(id)arg1 options:(id)arg2;
- (void)setupSentenceBoundryStrings;
- (void)setupTenKey:(id)arg1 forKey:(id)arg2 keyName:(id)arg3 planeName:(id)arg4;
- (bool)usesMecabraCandidateBar;
- (id)whiteSpaceRegex;
- (id)willDirectlyCommitNumbersAndPunctuationSet;
- (id)willSwitchToDefaultPlaneCharacterSet;

@end
