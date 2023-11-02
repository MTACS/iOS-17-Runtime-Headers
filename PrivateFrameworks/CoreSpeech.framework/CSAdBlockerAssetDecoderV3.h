
@interface CSAdBlockerAssetDecoderV3 : NSObject {
    NSString * _assetVersion;
    float  _maxFingerprintBufferSize;
    NSData * _payloadData;
    NSMutableDictionary * _shouldResetAdsDictionary;
}

@property (nonatomic, readonly) NSString *assetVersion;
@property (nonatomic, readonly) float maxFingerprintBufferSize;
@property (nonatomic, retain) NSData *payloadData;
@property (nonatomic, readonly) NSMutableDictionary *shouldResetAdsDictionary;

- (void).cxx_destruct;
- (id)assetVersion;
- (id)initWithData:(id)arg1;
- (float)maxFingerprintBufferSize;
- (id)payloadData;
- (void)setPayloadData:(id)arg1;
- (id)shouldResetAdsDictionary;

@end
