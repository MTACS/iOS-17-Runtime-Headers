
@interface UIKBAutoFillTestExpectedResult : NSObject <NSCoding> {
    long long  _formType;
    NSMutableDictionary * _textFieldTagToTextFieldType;
}

@property (nonatomic) long long formType;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (long long)formType;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setFormType:(long long)arg1;
- (void)setType:(long long)arg1 forTextFieldWithTag:(long long)arg2;
- (long long)typeForTextFieldWithTag:(long long)arg1;

@end
