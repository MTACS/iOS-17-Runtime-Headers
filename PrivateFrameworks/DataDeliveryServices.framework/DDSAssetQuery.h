
@interface DDSAssetQuery : NSObject <NSSecureCoding> {
    NSString * _assetType;
    bool  _cachedOnly;
    DDSAttributeFilter * _filter;
    bool  _installedOnly;
    bool  _latestOnly;
    bool  _localOnly;
}

@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic, readonly) NSString *cacheKey;
@property bool cachedOnly;
@property (nonatomic, readonly) DDSAttributeFilter *filter;
@property bool installedOnly;
@property bool latestOnly;
@property bool localOnly;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetType;
- (id)cacheKey;
- (bool)cachedOnly;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dumpDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)filter;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAssetType:(id)arg1 filter:(id)arg2;
- (id)initWithAssetType:(id)arg1 filter:(id)arg2 localOnly:(bool)arg3 installedOnly:(bool)arg4 latestOnly:(bool)arg5 cachedOnly:(bool)arg6;
- (id)initWithCoder:(id)arg1;
- (bool)installedOnly;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAssetQuery:(id)arg1;
- (bool)latestOnly;
- (bool)localOnly;
- (void)setCachedOnly:(bool)arg1;
- (void)setInstalledOnly:(bool)arg1;
- (void)setLatestOnly:(bool)arg1;
- (void)setLocalOnly:(bool)arg1;

@end
