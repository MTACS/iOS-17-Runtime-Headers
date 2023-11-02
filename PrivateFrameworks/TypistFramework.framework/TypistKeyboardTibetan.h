
@interface TypistKeyboardTibetan : TypistKeyboard {
    NSRegularExpression * _subjoinedExpression;
}

@property (nonatomic, retain) NSRegularExpression *subjoinedExpression;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init:(id)arg1 options:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setSubjoinedExpression:(id)arg1;
- (id)setupKeyboardInfo:(id)arg1 options:(id)arg2;
- (id)subjoinedExpression;
- (id)tryAlternateVariationsOfKey:(id)arg1;

@end
