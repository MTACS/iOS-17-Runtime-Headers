
@interface NTPBVersionedPersonalizationVector : PBCodable <NSCopying> {
    NSData * _bundleSubscribedVector;
    NSString * _bundleSubscribedVectorVersion;
    NSData * _personalizationVector;
    NSData * _sportsFavoritesVector;
    NSData * _sportsUuidVector;
    NSString * _version;
}

@property (nonatomic, retain) NSData *bundleSubscribedVector;
@property (nonatomic, retain) NSString *bundleSubscribedVectorVersion;
@property (nonatomic, readonly) bool hasBundleSubscribedVector;
@property (nonatomic, readonly) bool hasBundleSubscribedVectorVersion;
@property (nonatomic, readonly) bool hasPersonalizationVector;
@property (nonatomic, readonly) bool hasSportsFavoritesVector;
@property (nonatomic, readonly) bool hasSportsUuidVector;
@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic, retain) NSData *personalizationVector;
@property (nonatomic, retain) NSData *sportsFavoritesVector;
@property (nonatomic, retain) NSData *sportsUuidVector;
@property (nonatomic, retain) NSString *version;

- (void).cxx_destruct;
- (id)bundleSubscribedVector;
- (id)bundleSubscribedVectorVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleSubscribedVector;
- (bool)hasBundleSubscribedVectorVersion;
- (bool)hasPersonalizationVector;
- (bool)hasSportsFavoritesVector;
- (bool)hasSportsUuidVector;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)personalizationVector;
- (bool)readFrom:(id)arg1;
- (void)setBundleSubscribedVector:(id)arg1;
- (void)setBundleSubscribedVectorVersion:(id)arg1;
- (void)setPersonalizationVector:(id)arg1;
- (void)setSportsFavoritesVector:(id)arg1;
- (void)setSportsUuidVector:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)sportsFavoritesVector;
- (id)sportsUuidVector;
- (id)version;
- (void)writeTo:(id)arg1;

@end
