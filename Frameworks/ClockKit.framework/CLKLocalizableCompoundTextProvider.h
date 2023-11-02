
@interface CLKLocalizableCompoundTextProvider : CLKTextProvider {
    NSString * _formatKey;
    NSArray * _textProviders;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_arrayOfTextProviderJSONObjectRepresentations;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)_localizedStringForKey:(id)arg1 withBundle:(id)arg2 forLocalization:(id)arg3;
- (id)_localizedTextProviderWithBundle:(id)arg1 forLocalization:(id)arg2;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;
- (bool)_validate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormatKey:(id)arg1 textProviders:(id)arg2;
- (bool)isEqual:(id)arg1;

@end