
@interface TUIInputModeAccessory : TUICursorAccessory <NSSecureCoding> {
    NSString * _inputMode;
}

@property (nonatomic, retain) NSString *inputMode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalComponents;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInputMode:(id)arg1;
- (id)inputMode;
- (bool)isEqual:(id)arg1;
- (void)setInputMode:(id)arg1;

@end
