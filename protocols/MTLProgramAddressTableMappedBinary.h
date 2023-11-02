
@protocol MTLProgramAddressTableMappedBinary

@required

- (unsigned long long)binaryUniqueId;
- (unsigned long long)mappedAddress;
- (unsigned long long)mappedSize;
- (NSString *)type;

@end
