
@interface UARPTLVPayloadCompressionAlgorithm : UARPMetaDataTLV {
    int  _compressionAlgorithm;
    unsigned int  _tlvLength;
    unsigned int  _tlvType;
}

@property (readonly) int compressionAlgorithm;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (int)compressionAlgorithm;
- (id)generateTLV;
- (id)init;
- (void)setCompressionAlgorithm:(int)arg1;
- (unsigned int)tlvLength;
- (unsigned int)tlvType;
- (id)tlvValue;

@end
