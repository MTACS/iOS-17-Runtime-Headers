
@interface DCAsset : NSObject {
    NSData * _publicKey;
    double  _publicKeyRefreshInterval;
    unsigned long long  _version;
}

@property (nonatomic, copy) NSData *publicKey;
@property (nonatomic) double publicKeyRefreshInterval;
@property (nonatomic) unsigned long long version;

+ (id)assetWithMobileAsset:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)publicKey;
- (double)publicKeyRefreshInterval;
- (void)setPublicKey:(id)arg1;
- (void)setPublicKeyRefreshInterval:(double)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)version;

@end
