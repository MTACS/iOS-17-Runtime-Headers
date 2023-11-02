
@interface FCContentManifest : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _assetURLs;
    NSArray * _assetWrappingKeyIDs;
    NSArray * _avAssetIDs;
    NSArray * _avAssetKeyIDs;
    NSArray * _recordIDs;
}

@property (nonatomic, readonly, copy) NSArray *assetURLs;
@property (nonatomic, readonly, copy) NSArray *assetWrappingKeyIDs;
@property (nonatomic, readonly, copy) NSArray *avAssetIDs;
@property (nonatomic, readonly, copy) NSArray *avAssetKeyIDs;
@property (nonatomic, readonly, copy) NSArray *avAssetKeyURIs;
@property (nonatomic, readonly, copy) FCContentManifest *copyWithAssetsOnly;
@property (nonatomic, readonly, copy) NSArray *recordIDs;

+ (id)manifestByMergingManifest:(id)arg1 withManifest:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetURLs;
- (id)assetWrappingKeyIDs;
- (id)avAssetIDs;
- (id)avAssetKeyIDs;
- (id)avAssetKeyURIs;
- (id)copyWithAssetsOnly;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAssetURLs:(id)arg1 assetWrappingKeyIDs:(id)arg2 recordIDs:(id)arg3 avAssetIDs:(id)arg4 avAssetKeyIDs:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithManifests:(id)arg1;
- (id)recordIDs;

@end
