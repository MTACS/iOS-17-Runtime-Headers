
@interface TRISignedAssetURL : NSObject <NSCopying> {
    NSString * _signature;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *signature;
@property (nonatomic, readonly) NSURL *url;

+ (id)allReferencedCKRecordKeys;
+ (id)assetURLFromCKRecord:(id)arg1 assetId:(id*)arg2;
+ (id)assetURLWithUrl:(id)arg1 signature:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithReplacementSignature:(id)arg1;
- (id)copyWithReplacementUrl:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithUrl:(id)arg1 signature:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAssetURL:(id)arg1;
- (id)signature;
- (id)url;

@end
