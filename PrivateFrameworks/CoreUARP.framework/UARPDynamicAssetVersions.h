
@interface UARPDynamicAssetVersions : NSObject {
    UARPSuperBinaryAsset * _asset;
    NSMutableArray * _serialNumbers;
    NSURL * _url;
}

@property (readonly) NSArray *partnerSerialNumbers;

+ (id)tag;

- (void).cxx_destruct;
- (bool)decomposeUARP;
- (id)description;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)partnerSerialNumbers;

@end
