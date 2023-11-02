
@interface NEIKEv2AddressIdentifier : NEIKEv2Identifier {
    NWAddressEndpoint * _address;
}

@property (readonly) NWAddressEndpoint *address;

+ (id)copyTypeDescription;

- (void).cxx_destruct;
- (id)address;
- (id)identifierData;
- (unsigned long long)identifierType;
- (id)initWithAddress:(id)arg1;
- (id)stringValue;

@end
