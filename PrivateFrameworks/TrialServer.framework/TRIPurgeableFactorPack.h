
@interface TRIPurgeableFactorPack : NSObject <NSCopying> {
    NSString<TRIFactorPackId> * _factorPackId;
    NSString * _namespaceName;
    NSSet * _purgeableAssetFactorNames;
}

@property (nonatomic, readonly) NSString<TRIFactorPackId> *factorPackId;
@property (nonatomic, readonly) NSString *namespaceName;
@property (nonatomic, readonly) NSSet *purgeableAssetFactorNames;

+ (id)packWithFactorPackId:(id)arg1 namespaceName:(id)arg2 purgeableAssetFactorNames:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithReplacementFactorPackId:(id)arg1;
- (id)copyWithReplacementNamespaceName:(id)arg1;
- (id)copyWithReplacementPurgeableAssetFactorNames:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)factorPackId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFactorPackId:(id)arg1 namespaceName:(id)arg2 purgeableAssetFactorNames:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPack:(id)arg1;
- (id)namespaceName;
- (id)purgeableAssetFactorNames;

@end
