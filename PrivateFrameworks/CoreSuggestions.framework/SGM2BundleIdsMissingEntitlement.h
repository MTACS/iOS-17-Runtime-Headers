
@interface SGM2BundleIdsMissingEntitlement : PBCodable <NSCopying> {
    NSString * _bundleId;
    NSString * _entitlement;
    NSString * _key;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) NSString *entitlement;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic, readonly) bool hasEntitlement;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, retain) NSString *key;

- (void).cxx_destruct;
- (id)bundleId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entitlement;
- (bool)hasBundleId;
- (bool)hasEntitlement;
- (bool)hasKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setEntitlement:(id)arg1;
- (void)setKey:(id)arg1;
- (void)writeTo:(id)arg1;

@end
