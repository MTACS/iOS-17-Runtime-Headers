
@interface TypistKeyboardKorean : TypistKeyboard {
    bool  _automaticallyInsertsArrowKey;
    NSArray * _doubleConsonantJong;
    NSArray * _doubleConsonantSplitJong;
    NSArray * _doubleVowel;
    NSArray * _doubleVowelSplit;
    NSDictionary * _flickTable;
    NSArray * _hangul;
    NSDictionary * _multiTapCompleteKey;
    NSMutableDictionary * _multiTapOrbit;
    NSDictionary * _radicalBreakdownFlick;
    NSDictionary * _radicalBreakdownMultiTap;
}

@property (nonatomic) bool automaticallyInsertsArrowKey;
@property (nonatomic, retain) NSArray *doubleConsonantJong;
@property (nonatomic, retain) NSArray *doubleConsonantSplitJong;
@property (nonatomic, retain) NSArray *doubleVowel;
@property (nonatomic, retain) NSArray *doubleVowelSplit;
@property (nonatomic, retain) NSDictionary *flickTable;
@property (nonatomic, retain) NSArray *hangul;
@property (nonatomic, retain) NSDictionary *multiTapCompleteKey;
@property (nonatomic, retain) NSMutableDictionary *multiTapOrbit;
@property (nonatomic, retain) NSDictionary *radicalBreakdownFlick;
@property (nonatomic, retain) NSDictionary *radicalBreakdownMultiTap;

- (void).cxx_destruct;
- (id)_convertRadicalIfNeeded:(id)arg1;
- (id)_convertToMultiTapIfNecessary:(id)arg1;
- (id)_flickGestureDirection:(unsigned long long)arg1;
- (id)addKeyboardPopupKeys:(id)arg1 inPlane:(id)arg2 addTo:(id)arg3 keyplaneKeycaps:(id)arg4;
- (bool)automaticallyInsertsArrowKey;
- (id)changeKeyNameToGenericCharacter:(id)arg1;
- (id)decomposeKoreanStrings:(id)arg1;
- (id)doubleConsonantJong;
- (id)doubleConsonantSplitJong;
- (id)doubleVowel;
- (id)doubleVowelSplit;
- (void)encodeWithCoder:(id)arg1;
- (id)flickTable;
- (id)generateKeyplaneSwitchTable:(id)arg1;
- (id)generateKeystrokeStream:(id)arg1;
- (id)generateSwipeStream:(id)arg1;
- (id)getExpectedPlaneNameForKey:(id)arg1 currentPlane:(id)arg2;
- (id)hangul;
- (id)init:(id)arg1 options:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isAutoshiftedToCapitalPlane:(id)arg1;
- (bool)isSwitchedToCapitalPlane:(id)arg1 previous:(id)arg2 currentPlane:(id)arg3 context:(id)arg4;
- (bool)isTenKey;
- (id)multiTapCompleteKey;
- (id)multiTapOrbit;
- (id)radicalBreakdownFlick;
- (id)radicalBreakdownMultiTap;
- (void)setAutomaticallyInsertsArrowKey:(bool)arg1;
- (void)setDoubleConsonantJong:(id)arg1;
- (void)setDoubleConsonantSplitJong:(id)arg1;
- (void)setDoubleVowel:(id)arg1;
- (void)setDoubleVowelSplit:(id)arg1;
- (void)setFlickTable:(id)arg1;
- (void)setHangul:(id)arg1;
- (void)setMultiTapCompleteKey:(id)arg1;
- (void)setMultiTapOrbit:(id)arg1;
- (void)setRadicalBreakdownFlick:(id)arg1;
- (void)setRadicalBreakdownMultiTap:(id)arg1;
- (void)setupExtraKeyplaneDataIfNeeded:(id)arg1;
- (id)setupKeyboardInfo:(id)arg1 options:(id)arg2;
- (void)setupTenKey:(id)arg1 forKey:(id)arg2 keyName:(id)arg3 planeName:(id)arg4;
- (bool)usesMecabraCandidateBar;

@end
