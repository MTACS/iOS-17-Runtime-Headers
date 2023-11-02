
@interface GEOARSessionThermalPressure : PBCodable <NSCopying> {
    int  _chargingState;
    int  _collectionTrigger;
    struct { 
        unsigned int has_timestamp : 1; 
        unsigned int has_chargingState : 1; 
        unsigned int has_collectionTrigger : 1; 
        unsigned int has_thermalPressure : 1; 
    }  _flags;
    unsigned int  _thermalPressure;
    double  _timestamp;
}

@property (nonatomic) int chargingState;
@property (nonatomic) int collectionTrigger;
@property (nonatomic) bool hasChargingState;
@property (nonatomic) bool hasCollectionTrigger;
@property (nonatomic) bool hasThermalPressure;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int thermalPressure;
@property (nonatomic) double timestamp;

+ (bool)isValid:(id)arg1;

- (int)StringAsChargingState:(id)arg1;
- (int)StringAsCollectionTrigger:(id)arg1;
- (int)chargingState;
- (id)chargingStateAsString:(int)arg1;
- (int)collectionTrigger;
- (id)collectionTriggerAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChargingState;
- (bool)hasCollectionTrigger;
- (bool)hasThermalPressure;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChargingState:(int)arg1;
- (void)setCollectionTrigger:(int)arg1;
- (void)setHasChargingState:(bool)arg1;
- (void)setHasCollectionTrigger:(bool)arg1;
- (void)setHasThermalPressure:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setThermalPressure:(unsigned int)arg1;
- (void)setTimestamp:(double)arg1;
- (unsigned int)thermalPressure;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
