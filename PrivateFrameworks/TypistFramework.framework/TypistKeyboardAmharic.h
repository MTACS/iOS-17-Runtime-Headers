
@interface TypistKeyboardAmharic : TypistKeyboard {
    NSCharacterSet * _keycapAndPopoverConstants;
    NSCharacterSet * _keycapAndPopoverVowels;
}

@property (nonatomic, retain) NSCharacterSet *keycapAndPopoverConstants;
@property (nonatomic, retain) NSCharacterSet *keycapAndPopoverVowels;

- (void).cxx_destruct;
- (id)decomposeAmharicChar:(unsigned short)arg1;
- (id)decomposeAmharicStrings:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)generateKeystrokeStream:(id)arg1;
- (id)init:(id)arg1 options:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isConsonant:(unsigned short)arg1;
- (bool)isJoinedConsonantAndVowelCharacter:(unsigned short)arg1;
- (bool)isPopoverCombo:(id)arg1 withIndex:(long long)arg2;
- (bool)isTapKey:(id)arg1;
- (id)keycapAndPopoverConstants;
- (id)keycapAndPopoverVowels;
- (void)setKeycapAndPopoverConstants:(id)arg1;
- (void)setKeycapAndPopoverVowels:(id)arg1;
- (id)setupKeyboardInfo:(id)arg1 options:(id)arg2;

@end
