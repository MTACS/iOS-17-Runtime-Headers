
@interface MAAutoAssetSetEntry : NSObject <NSSecureCoding> {
    bool  _assetLockedInhibitsRemoval;
    MAAutoAssetSelector * _assetSelector;
}

@property (nonatomic) bool assetLockedInhibitsRemoval;
@property (nonatomic, retain) MAAutoAssetSelector *assetSelector;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)assetLockedInhibitsRemoval;
- (id)assetSelector;
- (id)copy;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initForAssetType:(id)arg1 withAssetSpecifier:(id)arg2;
- (id)initForAssetType:(id)arg1 withAssetSpecifier:(id)arg2 assetLockedInhibitsRemoval:(bool)arg3;
- (id)initForAssetType:(id)arg1 withAssetSpecifier:(id)arg2 usingDecryptionKey:(id)arg3;
- (id)initForAssetType:(id)arg1 withAssetSpecifier:(id)arg2 usingDecryptionKey:(id)arg3 assetLockedInhibitsRemoval:(bool)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAssetLockedInhibitsRemoval:(bool)arg1;
- (void)setAssetSelector:(id)arg1;
- (id)summary;

@end
