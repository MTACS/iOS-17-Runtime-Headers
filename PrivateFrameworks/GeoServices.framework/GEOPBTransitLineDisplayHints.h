
@interface GEOPBTransitLineDisplayHints : PBCodable <NSCopying> {
    struct { 
        unsigned int has_showVehicleNumber : 1; 
    }  _flags;
    bool  _showVehicleNumber;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasShowVehicleNumber;
@property (nonatomic) bool showVehicleNumber;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShowVehicleNumber;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasShowVehicleNumber:(bool)arg1;
- (void)setShowVehicleNumber:(bool)arg1;
- (bool)showVehicleNumber;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
