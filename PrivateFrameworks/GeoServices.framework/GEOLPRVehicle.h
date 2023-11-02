
@interface GEOLPRVehicle : PBCodable <NSCopying> {
    struct { 
        unsigned int read_licensePlate : 1; 
        unsigned int read_name : 1; 
        unsigned int read_powerTypeKey : 1; 
        unsigned int read_vehicleTypeKey : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _licensePlate;
    NSString * _name;
    NSString * _powerTypeKey;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _vehicleTypeKey;
}

@property (nonatomic, readonly) bool hasLicensePlate;
@property (nonatomic, readonly) bool hasPowerTypeKey;
@property (nonatomic, readonly) bool hasVehicleTypeKey;
@property (nonatomic, retain) NSString *licensePlate;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *powerTypeKey;
@property (nonatomic, retain) NSString *vehicleTypeKey;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLicensePlate;
- (bool)hasPowerTypeKey;
- (bool)hasVehicleTypeKey;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)licensePlate;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)powerTypeKey;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLicensePlate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPowerTypeKey:(id)arg1;
- (void)setVehicleTypeKey:(id)arg1;
- (id)vehicleTypeKey;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (bool)_matchesPower:(id)arg1 andVehicle:(id)arg2;
- (bool)matchesDefinedPlateCondition:(id)arg1 error:(id*)arg2;
- (bool)matchesLicensePlateRegion:(id)arg1;
- (bool)matchesPlateInfo:(id)arg1;

@end
