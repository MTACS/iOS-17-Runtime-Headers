
@interface GEOAutomobileOptions : PBCodable <NSCopying> {
    struct { 
        unsigned int has_trafficType : 1; 
        unsigned int has_includeHistoricTravelTime : 1; 
        unsigned int has_includeStaticTravelTime : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_userPreferences : 1; 
        unsigned int read_vehicleSpecifications : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _includeHistoricTravelTime;
    bool  _includeStaticTravelTime;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _trafficType;
    PBUnknownFields * _unknownFields;
    GEOUserPreferences * _userPreferences;
    GEOVehicleSpecifications * _vehicleSpecifications;
}

@property (nonatomic) bool hasIncludeHistoricTravelTime;
@property (nonatomic) bool hasIncludeStaticTravelTime;
@property (nonatomic) bool hasTrafficType;
@property (nonatomic, readonly) bool hasUserPreferences;
@property (nonatomic, readonly) bool hasVehicleSpecifications;
@property (nonatomic) bool includeHistoricTravelTime;
@property (nonatomic) bool includeStaticTravelTime;
@property (nonatomic) int trafficType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOUserPreferences *userPreferences;
@property (nonatomic, retain) GEOVehicleSpecifications *vehicleSpecifications;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsTrafficType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIncludeHistoricTravelTime;
- (bool)hasIncludeStaticTravelTime;
- (bool)hasTrafficType;
- (bool)hasUserPreferences;
- (bool)hasVehicleSpecifications;
- (unsigned long long)hash;
- (bool)includeHistoricTravelTime;
- (bool)includeStaticTravelTime;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIncludeHistoricTravelTime:(bool)arg1;
- (void)setHasIncludeStaticTravelTime:(bool)arg1;
- (void)setHasTrafficType:(bool)arg1;
- (void)setIncludeHistoricTravelTime:(bool)arg1;
- (void)setIncludeStaticTravelTime:(bool)arg1;
- (void)setTrafficType:(int)arg1;
- (void)setUserPreferences:(id)arg1;
- (void)setVehicleSpecifications:(id)arg1;
- (int)trafficType;
- (id)trafficTypeAsString:(int)arg1;
- (id)unknownFields;
- (id)userPreferences;
- (id)vehicleSpecifications;
- (void)writeTo:(id)arg1;

@end
