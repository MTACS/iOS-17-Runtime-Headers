
@interface CPLFeatureVersionHistory : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _anchorToVersion;
    long long  _currentFeatureVersion;
    NSMutableDictionary * _versionToAnchor;
}

@property (nonatomic, readonly) long long currentFeatureVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addSyncAnchor:(id)arg1 forFeatureVersion:(long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)currentFeatureVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateHistoryWithBlock:(id /* block */)arg1;
- (long long)featureVersionForSyncAnchor:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentFeatureVersion:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)syncAnchorForFeatureVersion:(long long)arg1;

@end
