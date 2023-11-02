
@interface MAAbsoluteAssetId : NSObject <NSSecureCoding> {
    NSString * _allAttributesHash;
    NSString * _assetId;
    NSString * _assetIdHash;
    NSString * _assetType;
    NSString * _downloadContentHash;
    NSString * _downloadPolicyHash;
    NSString * _downloadUrlHash;
    NSString * _nonAssetIdHash;
    NSString * _pallasAssetIdHash;
}

@property (nonatomic, retain) NSString *assetId;
@property (nonatomic, retain) NSString *assetType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allAttributesHash;
- (id)assetId;
- (id)assetIdHash;
- (id)assetType;
- (id)contentHash;
- (id)description;
- (id)diffFrom:(id)arg1;
- (id)diffFromAsset:(id)arg1;
- (id)diffFromAssetId:(id)arg1 assetType:(id)arg2 attributes:(id)arg3;
- (id)encodeAsPlist;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasOnlyAssetTypeAndId;
- (id)initWithAssetId:(id)arg1 forAssetType:(id)arg2;
- (id)initWithAssetId:(id)arg1 forAssetType:(id)arg2 attributes:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlist:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)nonIdHash;
- (id)pallasDynamicAssetIdHash;
- (id)policyHash;
- (void)setAssetId:(id)arg1;
- (void)setAssetType:(id)arg1;
- (id)summary;
- (id)urlHash;

@end
