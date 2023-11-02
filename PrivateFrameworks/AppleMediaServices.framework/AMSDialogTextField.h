
@interface AMSDialogTextField : NSObject <NSSecureCoding> {
    long long  _keyboardType;
    NSString * _placeholder;
    bool  _secure;
    long long  _tag;
    NSString * _text;
}

@property (nonatomic) long long keyboardType;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic) bool secure;
@property (nonatomic) long long tag;
@property (nonatomic, copy) NSString *text;

+ (bool)supportsSecureCoding;
+ (id)textFieldWithPlaceholder:(id)arg1 secure:(bool)arg2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)keyboardType;
- (id)placeholder;
- (bool)secure;
- (void)setKeyboardType:(long long)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setSecure:(bool)arg1;
- (void)setTag:(long long)arg1;
- (void)setText:(id)arg1;
- (long long)tag;
- (id)text;

@end
