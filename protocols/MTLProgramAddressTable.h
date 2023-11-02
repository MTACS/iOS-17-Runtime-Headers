
@protocol MTLProgramAddressTable

@required

- (NSArray *)binaryMappingsEncoderInternal;
- (NSArray *)binaryMappingsPerInvocation;
- (NSDictionary *)encoderInternalBinaries;

@end
