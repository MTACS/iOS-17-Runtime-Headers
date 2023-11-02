
@interface REAttributedTextContentProvider : RETextContentProvider {
    NSAttributedString * _text;
}

@property (nonatomic, readonly) NSAttributedString *text;

+ (id)textContentProviderWithAttributedText:(id)arg1;

- (void).cxx_destruct;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;
- (id)contentEncodedString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAttributedText:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)text;

@end
