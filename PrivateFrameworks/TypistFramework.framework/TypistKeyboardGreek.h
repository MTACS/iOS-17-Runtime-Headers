
@interface TypistKeyboardGreek : TypistKeyboard {
    NSDictionary * _acuteDiacriticKey;
    NSDictionary * _acuteKeys;
}

@property (nonatomic, retain) NSDictionary *acuteDiacriticKey;
@property (nonatomic, retain) NSDictionary *acuteKeys;

- (void).cxx_destruct;
- (id)acuteDiacriticKey;
- (id)acuteKeys;
- (id)addAccentKeyAction:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPostfixKey:(id)arg1;
- (id)init:(id)arg1 options:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)preprocessing;
- (void)setAcuteDiacriticKey:(id)arg1;
- (void)setAcuteKeys:(id)arg1;
- (id)setupKeyboardInfo:(id)arg1 options:(id)arg2;
- (void)setupSentenceBoundryStrings;

@end
