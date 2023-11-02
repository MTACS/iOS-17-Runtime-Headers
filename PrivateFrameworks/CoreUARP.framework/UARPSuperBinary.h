
@interface UARPSuperBinary : NSObject {
    NSData * _data;
    unsigned int  _formatVersion;
    NSData * _metaData;
    NSMutableArray * _payloads;
    NSMutableArray * _tlvs;
    UARPAssetVersion * _version;
}

@property (readonly) NSArray *payloads;
@property (readonly) NSArray *tlvs;

- (void).cxx_destruct;
- (bool)expandMetaData:(struct UARPSuperBinaryHeader { unsigned int x1; unsigned int x2; unsigned int x3; struct UARPVersion { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; } x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; }*)arg1;
- (bool)expandSuperBinary;
- (id)generatePersonalizedSuperBinary:(unsigned long long)arg1;
- (id)getPayloads;
- (id)getTlvs;
- (id)initWithData:(id)arg1;
- (id)initWithFilePath:(id)arg1;
- (id)payloadWith4ccTag:(id)arg1;
- (id)payloads;
- (id)payloadsWithout4ccTag:(id)arg1;
- (bool)preparePayload:(struct UARPPayloadHeader2 { unsigned int x1; struct UARP4ccTag { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; unsigned char x_2_1_4; } x2; struct UARPVersion { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; }*)arg1;
- (id)tlvs;

@end
