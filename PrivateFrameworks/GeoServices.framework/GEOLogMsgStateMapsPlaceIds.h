
@interface GEOLogMsgStateMapsPlaceIds : PBCodable <NSCopying> {
    NSMutableArray * _placeIdDetails;
}

@property (nonatomic, retain) NSMutableArray *placeIdDetails;

+ (bool)isValid:(id)arg1;
+ (Class)placeIdDetailsType;

- (void).cxx_destruct;
- (void)addPlaceIdDetails:(id)arg1;
- (void)clearPlaceIdDetails;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)placeIdDetails;
- (id)placeIdDetailsAtIndex:(unsigned long long)arg1;
- (unsigned long long)placeIdDetailsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setPlaceIdDetails:(id)arg1;
- (void)writeTo:(id)arg1;

@end
