
@interface TypistKeyboardUyghur : TypistKeyboard {
    NSDictionary * _capitalLettersInitialVowelMap;
    NSDictionary * _smallLettersInitialVowelMap;
}

@property (nonatomic, retain) NSDictionary *capitalLettersInitialVowelMap;
@property (nonatomic, retain) NSDictionary *smallLettersInitialVowelMap;

- (void).cxx_destruct;
- (void)_addDoubleVowelKeys:(id)arg1 withMapping:(id)arg2;
- (id)addKeyboardPopupKeys:(id)arg1 inPlane:(id)arg2 addTo:(id)arg3 keyplaneKeycaps:(id)arg4;
- (id)capitalLettersInitialVowelMap;
- (void)encodeWithCoder:(id)arg1;
- (id)init:(id)arg1 options:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)preprocessing;
- (void)setCapitalLettersInitialVowelMap:(id)arg1;
- (void)setSmallLettersInitialVowelMap:(id)arg1;
- (id)smallLettersInitialVowelMap;

@end
