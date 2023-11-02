
@interface VSTwoFactorEntryTextField : NSObject {
    bool  _autoShowKeyboard;
    long long  _autocapitalizationType;
    long long  _autocorrectionType;
    unsigned long long  _expectedLength;
    long long  _keyboardType;
    NSString * _label;
    long long  _returnKeyType;
    NSString * _text;
}

@property (nonatomic) bool autoShowKeyboard;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) unsigned long long expectedLength;
@property (nonatomic) long long keyboardType;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) long long returnKeyType;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (bool)autoShowKeyboard;
- (long long)autocapitalizationType;
- (long long)autocorrectionType;
- (unsigned long long)expectedLength;
- (id)init;
- (long long)keyboardType;
- (id)label;
- (long long)returnKeyType;
- (void)setAutoShowKeyboard:(bool)arg1;
- (void)setAutocapitalizationType:(long long)arg1;
- (void)setAutocorrectionType:(long long)arg1;
- (void)setExpectedLength:(unsigned long long)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
