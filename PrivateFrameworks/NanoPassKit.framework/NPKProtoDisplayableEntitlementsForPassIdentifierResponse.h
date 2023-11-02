
@interface NPKProtoDisplayableEntitlementsForPassIdentifierResponse : PBCodable <NSCopying> {
    NSMutableArray * _entitlementsDatas;
}

@property (nonatomic, retain) NSMutableArray *entitlementsDatas;

+ (Class)entitlementsDataType;

- (void).cxx_destruct;
- (void)addEntitlementsData:(id)arg1;
- (void)clearEntitlementsDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entitlementsDataAtIndex:(unsigned long long)arg1;
- (id)entitlementsDatas;
- (unsigned long long)entitlementsDatasCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntitlementsDatas:(id)arg1;
- (void)writeTo:(id)arg1;

@end
