
@interface UARPSuperBinaryMetaDataTable : NSObject {
    NSDictionary * _dict;
    NSNumber * _formatVersion;
    NSURL * _plist;
    NSMutableArray * _values;
}

@property (readonly) NSDictionary *dict;
@property (readonly) NSNumber *formatVersion;
@property (readonly) NSArray *values;

+ (unsigned int)compressionAlgorithmFromString:(id)arg1;

- (void).cxx_destruct;
- (void)addAnalyticsTLVs2;
- (void)addAppleSpecificTLVs;
- (void)addComposeTLVs2;
- (void)addDeviceSpecificTLVs2;
- (void)addHeySiriModelTLVs2;
- (void)addHostSpecificTLVs;
- (void)addHostSpecificTLVs2;
- (void)addLogsTLVs2;
- (void)addPersonalizationTLVs2;
- (void)addTLV:(unsigned long long)arg1 keyValue16:(id)arg2 tlvArray:(id)arg3;
- (void)addTLV:(unsigned long long)arg1 keyValue32:(id)arg2 tlvArray:(id)arg3;
- (void)addTLV:(unsigned long long)arg1 keyValue64:(id)arg2 tlvArray:(id)arg3;
- (void)addTLV:(unsigned long long)arg1 keyValue8:(id)arg2 tlvArray:(id)arg3;
- (void)addTLV:(unsigned long long)arg1 keyValue:(id)arg2 tlvArray:(id)arg3 payloadsURL:(id)arg4 isFilepath:(bool)arg5;
- (void)addTLV:(unsigned long long)arg1 legacyTLV:(unsigned long long)arg2 keyValue:(id)arg3 tlvArray:(id)arg4 payloadsURL:(id)arg5 isFilepath:(bool)arg6;
- (void)addTLV:(unsigned long long)arg1 versionString:(id)arg2 tlvArray:(id)arg3;
- (void)addTLVCompressPayloadAlgorithm:(id)arg1 tlvArray:(id)arg2;
- (void)addTLVs:(unsigned long long)arg1 excludedHwRevisions:(id)arg2 tlvArray:(id)arg3;
- (void)addVoiceAssistTLVs2;
- (void)composeMatchingPayloads:(id)arg1 tlvArray:(id)arg2;
- (void)composeMeasuredPayloads:(id)arg1 tlvType:(unsigned long long)arg2 tlvArray:(id)arg3;
- (void)composeRequiredPersonalizationOptions:(id)arg1 tlvArray:(id)arg2;
- (id)createTLVWithType:(unsigned long long)arg1 keyValue:(id)arg2 payloadsURL:(id)arg3 isFilepath:(bool)arg4;
- (id)dict;
- (bool)expandPlist:(id*)arg1;
- (id)formatVersion;
- (id)initAppleSpecificWithFormatVersion:(id)arg1;
- (id)initVendorAgnosticWithFormatVersion:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPlist:(id)arg1;
- (id)tlvArrayWithKey:(id)arg1 keyValue:(id)arg2 payloadsURL:(id)arg3 error:(id*)arg4;
- (id)tlvWithKey:(id)arg1 keyValue:(id)arg2 payloadsURL:(id)arg3 error:(id*)arg4;
- (id)values;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
