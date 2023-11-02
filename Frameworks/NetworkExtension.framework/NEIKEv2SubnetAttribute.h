
@interface NEIKEv2SubnetAttribute : NEIKEv2ConfigurationAttribute <NSCopying> {
    NWAddressEndpoint * _address;
    unsigned long long  _customType;
    unsigned int  _ipv4SubnetMask;
    unsigned char  _prefix;
}

@property (readonly) NWAddressEndpoint *address;
@property (readonly) unsigned int ipv4SubnetMask;
@property (readonly) unsigned char prefix;
@property (readonly) NWAddressEndpoint *subnetMaskAddress;

+ (id)copyTypeDescription;

- (void).cxx_destruct;
- (id)address;
- (unsigned long long)attributeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initCustomWithAttributeType:(unsigned long long)arg1 attributeName:(id)arg2 addressValue:(id)arg3 ipv4SubnetMask:(unsigned int)arg4;
- (id)initCustomWithAttributeType:(unsigned long long)arg1 attributeName:(id)arg2 addressValue:(id)arg3 prefix:(unsigned char)arg4;
- (id)initWithAddress:(id)arg1 ipv4SubnetMask:(unsigned int)arg2;
- (id)initWithAddress:(id)arg1 prefix:(unsigned char)arg2;
- (unsigned int)ipv4SubnetMask;
- (unsigned char)prefix;
- (id)subnetMaskAddress;

@end
