
@interface TypistKeyboardSinhala : TypistKeyboard {
    NSDictionary * _joinedVowelForms;
}

@property (nonatomic, retain) NSDictionary *joinedVowelForms;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init:(id)arg1 options:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)joinedVowelForms;
- (void)setJoinedVowelForms:(id)arg1;
- (id)setupKeyboardInfo:(id)arg1 options:(id)arg2;
- (id)tryAlternateVariationsOfKey:(id)arg1;

@end
