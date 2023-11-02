
@interface GEOLogMsgEventPlaceDataCache : PBCodable <NSCopying> {
    NSString * _placeDataRequestingAppIdentifier;
}

@property (nonatomic, readonly) bool hasPlaceDataRequestingAppIdentifier;
@property (nonatomic, retain) NSString *placeDataRequestingAppIdentifier;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlaceDataRequestingAppIdentifier;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)placeDataRequestingAppIdentifier;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setPlaceDataRequestingAppIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
