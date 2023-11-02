
@interface PHASEAsset : NSObject {
    PHASEAssetRegistry * _assetRegistry;
    NSString * _identifier;
    NSString * _owningDataBundleIdentifier;
}

@property PHASEAssetRegistry *assetRegistry;
@property (readonly) NSString *identifier;
@property (readonly) NSString *owningDataBundleIdentifier;
@property (nonatomic, readonly) unsigned long long sizeInBytes;
@property (readonly) NSString *uid;

+ (id)new;

- (void).cxx_destruct;
- (id)assetRegistry;
- (id)identifier;
- (id)init;
- (id)initWithUID:(id)arg1 assetRegistry:(id)arg2;
- (id)owningDataBundleIdentifier;
- (void)setAssetRegistry:(id)arg1;
- (void)setOwningDataBundleIdentifier:(id)arg1;
- (void)setUid:(id)arg1;
- (unsigned long long)sizeInBytes;
- (id)uid;

@end
