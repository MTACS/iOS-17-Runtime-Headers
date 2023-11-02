
@interface TypistKeyboardCherokee : TypistKeyboard {
    NSDictionary * _baseCharacters;
    NSDictionary * _vowelKeyMap;
}

@property (nonatomic, retain) NSDictionary *baseCharacters;
@property (nonatomic, retain) NSDictionary *vowelKeyMap;

- (void).cxx_destruct;
- (id)addAccentKeyAction:(id)arg1;
- (id)baseCharacters;
- (void)encodeWithCoder:(id)arg1;
- (id)generateBaseKeyMap:(id)arg1;
- (id)generateKeyplaneSwitchTable:(id)arg1;
- (id)getPostfixKey:(id)arg1;
- (id)init:(id)arg1 options:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setBaseCharacters:(id)arg1;
- (void)setVowelKeyMap:(id)arg1;
- (id)setupKeyboardInfo:(id)arg1 options:(id)arg2;
- (id)vowelKeyMap;

@end
