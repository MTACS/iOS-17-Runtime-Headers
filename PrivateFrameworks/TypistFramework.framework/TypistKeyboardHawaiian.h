
@interface TypistKeyboardHawaiian : TypistKeyboard {
    NSDictionary * _kahakoDiacriticKey;
    NSDictionary * _kahakoKeys;
}

@property (nonatomic, retain) NSDictionary *kahakoDiacriticKey;
@property (nonatomic, retain) NSDictionary *kahakoKeys;

- (void).cxx_destruct;
- (id)addAccentKeyAction:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPostfixKey:(id)arg1;
- (id)init:(id)arg1 options:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)kahakoDiacriticKey;
- (id)kahakoKeys;
- (void)preprocessing;
- (void)setKahakoDiacriticKey:(id)arg1;
- (void)setKahakoKeys:(id)arg1;
- (id)setupKeyboardInfo:(id)arg1 options:(id)arg2;
- (void)setupSentenceBoundryStrings;

@end
