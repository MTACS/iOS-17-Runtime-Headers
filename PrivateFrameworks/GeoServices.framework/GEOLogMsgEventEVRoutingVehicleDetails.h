
@interface GEOLogMsgEventEVRoutingVehicleDetails : PBCodable <NSCopying> {
    unsigned int  _batteryCapacity;
    struct { 
        unsigned int has_batteryCapacity : 1; 
        unsigned int has_towingNotSupported : 1; 
        unsigned int read_make : 1; 
        unsigned int read_model : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _make;
    NSString * _model;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    bool  _towingNotSupported;
}

@property (nonatomic) unsigned int batteryCapacity;
@property (nonatomic) bool hasBatteryCapacity;
@property (nonatomic, readonly) bool hasMake;
@property (nonatomic, readonly) bool hasModel;
@property (nonatomic) bool hasTowingNotSupported;
@property (nonatomic, retain) NSString *make;
@property (nonatomic, retain) NSString *model;
@property (nonatomic) bool towingNotSupported;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)batteryCapacity;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBatteryCapacity;
- (bool)hasMake;
- (bool)hasModel;
- (bool)hasTowingNotSupported;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)make;
- (void)mergeFrom:(id)arg1;
- (id)model;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBatteryCapacity:(unsigned int)arg1;
- (void)setHasBatteryCapacity:(bool)arg1;
- (void)setHasTowingNotSupported:(bool)arg1;
- (void)setMake:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setTowingNotSupported:(bool)arg1;
- (bool)towingNotSupported;
- (void)writeTo:(id)arg1;

@end
