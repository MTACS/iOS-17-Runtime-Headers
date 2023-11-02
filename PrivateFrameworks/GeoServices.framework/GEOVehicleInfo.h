
@interface GEOVehicleInfo : PBCodable <NSCopying> {
    int  _carPlayConnectionStatus;
    struct { 
        unsigned int has_carPlayConnectionStatus : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int carPlayConnectionStatus;
@property (nonatomic) bool hasCarPlayConnectionStatus;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsCarPlayConnectionStatus:(id)arg1;
- (int)carPlayConnectionStatus;
- (id)carPlayConnectionStatusAsString:(int)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCarPlayConnectionStatus;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCarPlayConnectionStatus:(int)arg1;
- (void)setHasCarPlayConnectionStatus:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
