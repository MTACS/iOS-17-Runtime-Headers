
@interface GEORoutingSettingsVirtualGarageSetttings : PBCodable <NSCopying> {
    int  _electronicVehicleCount;
    struct { 
        unsigned int has_electronicVehicleCount : 1; 
        unsigned int has_licensePlateCount : 1; 
    }  _flags;
    int  _licensePlateCount;
}

@property (nonatomic) int electronicVehicleCount;
@property (nonatomic) bool hasElectronicVehicleCount;
@property (nonatomic) bool hasLicensePlateCount;
@property (nonatomic) int licensePlateCount;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)electronicVehicleCount;
- (bool)hasElectronicVehicleCount;
- (bool)hasLicensePlateCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)licensePlateCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setElectronicVehicleCount:(int)arg1;
- (void)setHasElectronicVehicleCount:(bool)arg1;
- (void)setHasLicensePlateCount:(bool)arg1;
- (void)setLicensePlateCount:(int)arg1;
- (void)writeTo:(id)arg1;

@end
