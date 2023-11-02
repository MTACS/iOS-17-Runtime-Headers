
@interface TITypologyRecordKeyboardLayout : TITypologyRecord {
    TIKeyboardLayout * _keyboardLayout;
    NSString * _name;
}

@property (nonatomic, retain) TIKeyboardLayout *keyboardLayout;
@property (nonatomic, copy) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyboardLayout;
- (id)name;
- (void)setKeyboardLayout:(id)arg1;
- (void)setName:(id)arg1;
- (id)shortDescription;

@end
