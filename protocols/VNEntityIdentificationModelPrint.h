
@protocol VNEntityIdentificationModelPrint <NSObject>

@required

- (unsigned long long)VNEntityIdentificationModelPrintByteLength;
- (NSData *)VNEntityIdentificationModelPrintData;
- (unsigned long long)VNEntityIdentificationModelPrintElementCount;
- (unsigned long long)VNEntityIdentificationModelPrintElementType;
- (VNRequestSpecifier *)VNEntityIdentificationModelPrintOriginatingRequestSpecifier;
- (bool)isEquivalentToVNEntityIdentificationModelPrint:(id <VNEntityIdentificationModelPrint>)arg1;

@end
