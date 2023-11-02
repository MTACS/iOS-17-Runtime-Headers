
@interface RMStoreAssetKey : NSObject <NSCopying> {
    NSString * _assetIdentifier;
    NSString * _assetServerToken;
    NSString * _key;
}

@property (nonatomic, readonly, copy) NSString *assetIdentifier;
@property (nonatomic, readonly, copy) NSString *assetServerToken;
@property (nonatomic, readonly, copy) NSString *key;

+ (id)newAssetKey:(id)arg1;
+ (id)newAssetKeyWithAsset:(id)arg1;
+ (id)newAssetKeyWithAssetIdentifier:(id)arg1 assetServerToken:(id)arg2;

- (void).cxx_destruct;
- (id)assetIdentifier;
- (id)assetServerToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAsset:(id)arg1;
- (id)initWithAssetIdentifier:(id)arg1 assetServerToken:(id)arg2;
- (id)initWithAssetKey:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)key;

@end
