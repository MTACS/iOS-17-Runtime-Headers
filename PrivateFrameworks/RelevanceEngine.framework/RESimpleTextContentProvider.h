
@interface RESimpleTextContentProvider : RETextContentProvider {
    NSString * _text;
}

@property (nonatomic, readonly) NSString *text;

+ (id)textContentProviderWithText:(id)arg1;

- (void).cxx_destruct;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;
- (id)contentEncodedString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)text;

@end
