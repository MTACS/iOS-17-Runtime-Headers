
@interface CPLLibraryInfo : NSObject <NSCopying, NSSecureCoding> {
    NSData * _accountFlagsData;
    NSDictionary * _assetCounts;
    NSNumber * _featureCompatibleVersion;
    CPLFeatureVersionHistory * _featureVersionHistory;
    CPLMomentShare * _momentShare;
}

@property (nonatomic, readonly) CPLAccountFlags *accountFlags;
@property (nonatomic, copy) NSData *accountFlagsData;
@property (nonatomic, copy) NSDictionary *assetCounts;
@property (nonatomic, copy) NSNumber *featureCompatibleVersion;
@property (nonatomic, retain) CPLFeatureVersionHistory *featureVersionHistory;
@property (nonatomic, retain) CPLMomentShare *momentShare;

+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountFlags;
- (id)accountFlagsData;
- (id)assetCounts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)featureCompatibleVersion;
- (id)featureVersionHistory;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)momentShare;
- (id)prettyDescriptionWithAnchorDesciptionBlock:(id /* block */)arg1;
- (void)setAccountFlagsData:(id)arg1;
- (void)setAssetCounts:(id)arg1;
- (void)setFeatureCompatibleVersion:(id)arg1;
- (void)setFeatureVersionHistory:(id)arg1;
- (void)setMomentShare:(id)arg1;

@end
