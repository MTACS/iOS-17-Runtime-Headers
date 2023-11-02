
@interface _KeypadButton : UIButton {
    unsigned long long  _digit;
    long long  _keyType;
}

@property (nonatomic, readonly) unsigned long long digit;
@property (nonatomic, readonly) long long keyType;

- (void)_updateBackgroundColor;
- (unsigned long long)digit;
- (id)initWithDigit:(unsigned long long)arg1 target:(id)arg2;
- (id)initWithKeyType:(long long)arg1 digit:(unsigned long long)arg2 target:(id)arg3;
- (id)initWithKeyType:(long long)arg1 target:(id)arg2;
- (long long)keyType;
- (void)setHighlighted:(bool)arg1;

@end
