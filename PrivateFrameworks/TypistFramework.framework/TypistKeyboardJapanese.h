
@interface TypistKeyboardJapanese : TypistKeyboard {
    NSDictionary * _accentKey;
    NSDictionary * _baseCharacters;
    NSCharacterSet * _doubleAccentCharacterSet;
    NSDictionary * _flickTable;
    NSDictionary * _multiTapCompleteKey;
    NSMutableDictionary * _multiTapOrbit;
    NSDictionary * _updownKey;
}

@property (nonatomic, retain) NSDictionary *accentKey;
@property (nonatomic, retain) NSDictionary *baseCharacters;
@property (nonatomic, retain) NSCharacterSet *doubleAccentCharacterSet;
@property (nonatomic, retain) NSDictionary *flickTable;
@property (nonatomic, retain) NSDictionary *multiTapCompleteKey;
@property (nonatomic, retain) NSMutableDictionary *multiTapOrbit;
@property (nonatomic, retain) NSDictionary *updownKey;

- (void).cxx_destruct;
- (bool)_canMultiTap;
- (id)_convertKanaStringstoMultiTapNecessary:(id)arg1;
- (id)_convertKanaStringstoRomajiIfNecessary:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_determineHandwritingBound;
- (id)_flickGestureDirection;
- (id)accentKey;
- (id)addAccentKeyAction:(id)arg1;
- (id)addKeyboardPopupKeys:(id)arg1 inPlane:(id)arg2 addTo:(id)arg3 keyplaneKeycaps:(id)arg4;
- (id)baseCharacters;
- (id)changeKeyNameToGenericCharacter:(id)arg1;
- (long long)commitCandidate:(id)arg1;
- (long long)commitCandidateAtIndex:(long long)arg1;
- (id)doubleAccentCharacterSet;
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
- (bool)isKanaKeyboard;
- (bool)isSwitchedToCapitalPlane:(id)arg1 previous:(id)arg2 currentPlane:(id)arg3 context:(id)arg4;
- (bool)isTenKey;
- (id)multiTapCompleteKey;
- (id)multiTapOrbit;
- (void)setAccentKey:(id)arg1;
- (void)setBaseCharacters:(id)arg1;
- (void)setDoubleAccentCharacterSet:(id)arg1;
- (void)setFlickTable:(id)arg1;
- (void)setMultiTapCompleteKey:(id)arg1;
- (void)setMultiTapOrbit:(id)arg1;
- (void)setUpdownKey:(id)arg1;
- (void)setup50OnFlick:(id)arg1 forKey:(id)arg2 keyName:(id)arg3 planeName:(id)arg4;
- (void)setupExtraKeyplaneDataIfNeeded:(id)arg1;
- (id)setupKeyboardInfo:(id)arg1 options:(id)arg2;
- (void)setupTenKey:(id)arg1 forKey:(id)arg2 keyName:(id)arg3 planeName:(id)arg4;
- (id)updownKey;
- (bool)usesMecabraCandidateBar;
- (id)whiteSpaceCharSet;

@end
