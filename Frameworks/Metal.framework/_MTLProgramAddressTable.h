
@interface _MTLProgramAddressTable : NSObject <MTLProgramAddressTable> {
    NSArray * _binaryMappingsEncoderInternal;
    NSArray * _binaryMappingsPerInvocation;
    NSDictionary * _encoderInternalBinaries;
}

@property (readonly) NSArray *binaryMappingsEncoderInternal;
@property (readonly) NSArray *binaryMappingsPerInvocation;
@property (readonly) NSDictionary *encoderInternalBinaries;

- (id)binaryMappingsEncoderInternal;
- (id)binaryMappingsPerInvocation;
- (void)dealloc;
- (id)encoderInternalBinaries;
- (id)initWithEncoderMappings:(id)arg1 perInvocationMappings:(id)arg2 internalMappings:(id)arg3;

@end
