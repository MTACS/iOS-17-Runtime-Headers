
@interface ISTagIcon : ISBindableIcon {
    NSString * _baseType;
    NSString * _tag;
    NSString * _tagClass;
}

@property (readonly) NSString *baseType;
@property (readonly) NSString *tag;
@property (readonly) NSString *tagClass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_fallbackKey;
- (id)baseType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileExtension:(id)arg1;
- (id)initWithFileExtension:(id)arg1 baseType:(id)arg2;
- (id)initWithMIMEType:(id)arg1;
- (id)initWithModelCode:(id)arg1;
- (id)initWithTag:(id)arg1 tagClass:(id)arg2 baseType:(id)arg3;
- (id)initWithTypeCode:(unsigned int)arg1;
- (id)makeResourceProvider;
- (id)tag;
- (id)tagClass;

@end
