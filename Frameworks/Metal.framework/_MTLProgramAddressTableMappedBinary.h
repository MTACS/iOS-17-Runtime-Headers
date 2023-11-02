
@interface _MTLProgramAddressTableMappedBinary : NSObject <MTLProgramAddressTableMappedBinary> {
    unsigned long long  _binaryUniqueId;
    unsigned long long  _mappedAddress;
    unsigned long long  _mappedSize;
    NSString * _type;
}

@property (readonly) unsigned long long binaryUniqueId;
@property (readonly) unsigned long long mappedAddress;
@property (readonly) unsigned long long mappedSize;
@property (readonly) NSString *type;

- (unsigned long long)binaryUniqueId;
- (id)initWithMappedAddress:(unsigned long long)arg1 mappedSize:(unsigned long long)arg2 binaryUniqueId:(unsigned long long)arg3;
- (id)initWithMappedAddress:(unsigned long long)arg1 mappedSize:(unsigned long long)arg2 binaryUniqueId:(unsigned long long)arg3 type:(id)arg4;
- (unsigned long long)mappedAddress;
- (unsigned long long)mappedSize;
- (id)type;

@end
