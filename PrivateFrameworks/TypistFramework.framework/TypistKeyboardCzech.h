
@interface TypistKeyboardCzech : TypistKeyboard {
    NSDictionary * _acuteDiacriticKey;
    NSDictionary * _acuteKeys;
    NSDictionary * _caronDiacriticKey;
    NSDictionary * _caronKeys;
}

@property (nonatomic, retain) NSDictionary *acuteDiacriticKey;
@property (nonatomic, retain) NSDictionary *acuteKeys;
@property (nonatomic, retain) NSDictionary *caronDiacriticKey;
@property (nonatomic, retain) NSDictionary *caronKeys;

- (void).cxx_destruct;
- (id)acuteDiacriticKey;
- (id)acuteKeys;
- (id)addAccentKeyAction:(id)arg1;
- (id)caronDiacriticKey;
- (id)caronKeys;
- (id)convertRepresentedStringsIfNecessary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPostfixKey:(id)arg1;
- (id)init:(id)arg1 options:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)preprocessing;
- (void)setAcuteDiacriticKey:(id)arg1;
- (void)setAcuteKeys:(id)arg1;
- (void)setCaronDiacriticKey:(id)arg1;
- (void)setCaronKeys:(id)arg1;
- (id)setupKeyboardInfo:(id)arg1 options:(id)arg2;

@end
