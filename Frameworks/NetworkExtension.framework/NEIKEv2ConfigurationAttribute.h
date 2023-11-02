
@interface NEIKEv2ConfigurationAttribute : NSObject <NEPrettyDescription> {
    NSString * _customAttributeName;
}

@property (readonly) unsigned long long attributeType;
@property (readonly) unsigned long long valueType;

+ (id)copyTypeDescription;

- (void).cxx_destruct;
- (id)attributeName;
- (unsigned long long)attributeType;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initEmptyRequest;
- (unsigned long long)valueType;

@end
