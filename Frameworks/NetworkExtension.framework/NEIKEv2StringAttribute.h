
@interface NEIKEv2StringAttribute : NEIKEv2ConfigurationAttribute <NSCopying> {
    unsigned long long  _customType;
    NSString * _stringValue;
}

@property (readonly) NSString *stringValue;

+ (id)copyTypeDescription;

- (void).cxx_destruct;
- (unsigned long long)attributeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initCustomWithAttributeType:(unsigned long long)arg1 attributeName:(id)arg2 stringValue:(id)arg3;
- (id)initWithStringValue:(id)arg1;
- (id)stringValue;
- (unsigned long long)valueType;

@end
