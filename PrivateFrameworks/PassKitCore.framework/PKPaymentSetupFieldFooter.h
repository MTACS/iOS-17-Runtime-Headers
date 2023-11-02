
@interface PKPaymentSetupFieldFooter : PKPaymentSetupFieldLabel {
    NSAttributedString * _body;
    unsigned long long  _fontScale;
    unsigned long long  _position;
}

@property (nonatomic, copy) NSAttributedString *body;
@property (nonatomic) unsigned long long fontScale;
@property (nonatomic) unsigned long long position;

- (void).cxx_destruct;
- (id)body;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)fieldType;
- (unsigned long long)fontScale;
- (id)initWithIdentifier:(id)arg1 body:(id)arg2;
- (unsigned long long)position;
- (void)setBody:(id)arg1;
- (void)setFontScale:(unsigned long long)arg1;
- (void)setPosition:(unsigned long long)arg1;
- (void)updateWithAttribute:(id)arg1;
- (void)updateWithConfiguration:(id)arg1;

@end
