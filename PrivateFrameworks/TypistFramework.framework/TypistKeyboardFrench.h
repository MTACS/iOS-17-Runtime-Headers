
@interface TypistKeyboardFrench : TypistKeyboard {
    NSDictionary * _accentKey;
    NSDictionary * _postfixedKeys;
}

@property (nonatomic, retain) NSDictionary *accentKey;
@property (nonatomic, retain) NSDictionary *postfixedKeys;

- (void).cxx_destruct;
- (id)accentKey;
- (id)addAccentKeyAction:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPostfixKey:(id)arg1;
- (id)init:(id)arg1 options:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)postfixedKeys;
- (void)preprocessing;
- (void)setAccentKey:(id)arg1;
- (void)setPostfixedKeys:(id)arg1;
- (id)setupKeyboardInfo:(id)arg1 options:(id)arg2;

@end
