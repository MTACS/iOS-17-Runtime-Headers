
@interface MAAssetDiff : NSObject <NSSecureCoding> {
    NSString * _assessment;
    NSString * _description;
    unsigned long long  _diff;
    unsigned long long  _diffRaw;
    unsigned long long  _mask;
}

+ (id)allowEverythingDifferent;
+ (id)defaultAllowedDifferences;
+ (id)requireSameAssetTypeAndAllAttributes;
+ (id)requireSameAssetTypeAndAssetId;
+ (id)requireSameAssetTypeAndDownloadContent;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)category;
- (id)description;
- (id)encodeAsPlist;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasOnlyAllowedDifferences:(id)arg1;
- (id)initDifferentAssetType:(bool)arg1 assetId:(bool)arg2 attributes:(bool)arg3 assetIdAttributes:(bool)arg4 dynamicAssetId:(bool)arg5 nonIdAttributes:(bool)arg6 content:(bool)arg7 url:(bool)arg8 policy:(bool)arg9;
- (id)initFromDiff:(unsigned long long)arg1;
- (id)initFromInverseOfCategories:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlist:(id)arg1;
- (bool)isAnythingDifferent;
- (bool)isSameAssetId;
- (bool)isSameAssetType;
- (bool)isSameDownloadContent;
- (bool)isSameDownloadPolicy;
- (bool)isSameDownloadUrl;
- (bool)isSameForAllAttributes;
- (bool)isSameForNonAssetIdAttributes;
- (id)summary;

@end
