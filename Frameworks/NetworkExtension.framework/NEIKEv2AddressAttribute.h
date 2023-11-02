
@interface NEIKEv2AddressAttribute : NEIKEv2ConfigurationAttribute <NSCopying> {
    NWAddressEndpoint * _address;
    unsigned long long  _customType;
}

@property (readonly) NWAddressEndpoint *address;

+ (id)copyTypeDescription;

- (void).cxx_destruct;
- (id)address;
- (unsigned long long)attributeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initCustomWithAttributeType:(unsigned long long)arg1 attributeName:(id)arg2 addressValue:(id)arg3;
- (id)initWithAddress:(id)arg1;

@end
