
@interface NSPPrivacyProxyPolicyTierMap : PBCodable <NSCopying> {
    NSPPrivacyProxyPolicy * _policy;
    int  _tier;
}

@property (nonatomic, retain) NSPPrivacyProxyPolicy *policy;
@property (nonatomic) int tier;

- (void).cxx_destruct;
- (int)StringAsTier:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)policy;
- (bool)readFrom:(id)arg1;
- (void)setPolicy:(id)arg1;
- (void)setTier:(int)arg1;
- (int)tier;
- (id)tierAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
