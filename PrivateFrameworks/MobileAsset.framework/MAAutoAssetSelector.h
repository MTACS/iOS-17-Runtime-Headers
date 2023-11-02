
@interface MAAutoAssetSelector : NSObject <NSSecureCoding> {
    NSString * _assetSpecifier;
    NSString * _assetType;
    NSString * _assetVersion;
    NSData * _downloadDecryptionKey;
}

@property (nonatomic, readonly, retain) NSString *assetSpecifier;
@property (nonatomic, readonly, retain) NSString *assetType;
@property (nonatomic, retain) NSString *assetVersion;
@property (nonatomic, readonly, retain) NSData *downloadDecryptionKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetSpecifier;
- (id)assetType;
- (id)assetVersion;
- (void)assignAssetVersion:(id)arg1;
- (id)copy;
- (id)copyClearingWriteOnlyFields;
- (id)description;
- (id)downloadDecryptionKey;
- (void)encodeWithCoder:(id)arg1;
- (id)initForAssetType:(id)arg1;
- (id)initForAssetType:(id)arg1 withAssetSpecifier:(id)arg2;
- (id)initForAssetType:(id)arg1 withAssetSpecifier:(id)arg2 matchingAssetVersion:(id)arg3;
- (id)initForAssetType:(id)arg1 withAssetSpecifier:(id)arg2 matchingAssetVersion:(id)arg3 usingDecryptionKey:(id)arg4;
- (id)initForAssetType:(id)arg1 withAssetSpecifier:(id)arg2 usingDecryptionKey:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)newSummaryDictionary;
- (id)persistedEntryID;
- (void)setAssetVersion:(id)arg1;
- (id)summary;

@end
