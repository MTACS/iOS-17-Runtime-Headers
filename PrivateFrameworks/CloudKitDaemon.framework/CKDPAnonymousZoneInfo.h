
@interface CKDPAnonymousZoneInfo : PBCodable <NSCopying> {
    NSData * _anonymousZoneInfoData;
    NSString * _anonymousZoneInfoID;
}

@property (nonatomic, retain) NSData *anonymousZoneInfoData;
@property (nonatomic, retain) NSString *anonymousZoneInfoID;
@property (nonatomic, readonly) bool hasAnonymousZoneInfoData;
@property (nonatomic, readonly) bool hasAnonymousZoneInfoID;

- (void).cxx_destruct;
- (id)anonymousZoneInfoData;
- (id)anonymousZoneInfoID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAnonymousZoneInfoData;
- (bool)hasAnonymousZoneInfoID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAnonymousZoneInfoData:(id)arg1;
- (void)setAnonymousZoneInfoID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
