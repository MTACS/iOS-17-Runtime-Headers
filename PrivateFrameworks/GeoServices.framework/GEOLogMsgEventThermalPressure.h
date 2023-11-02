
@interface GEOLogMsgEventThermalPressure : PBCodable <NSCopying> {
    int  _chargingState;
    int  _collectionTrigger;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _disableMapFeatures;
    struct { 
        unsigned int has_chargingState : 1; 
        unsigned int has_collectionTrigger : 1; 
        unsigned int has_navMapType : 1; 
        unsigned int has_thermalPressure : 1; 
    }  _flags;
    int  _navMapType;
    unsigned int  _thermalPressure;
}

@property (nonatomic) int chargingState;
@property (nonatomic) int collectionTrigger;
@property (nonatomic, readonly) int*disableMapFeatures;
@property (nonatomic, readonly) unsigned long long disableMapFeaturesCount;
@property (nonatomic) bool hasChargingState;
@property (nonatomic) bool hasCollectionTrigger;
@property (nonatomic) bool hasNavMapType;
@property (nonatomic) bool hasThermalPressure;
@property (nonatomic) int navMapType;
@property (nonatomic) unsigned int thermalPressure;

+ (bool)isValid:(id)arg1;

- (int)StringAsChargingState:(id)arg1;
- (int)StringAsCollectionTrigger:(id)arg1;
- (int)StringAsDisableMapFeatures:(id)arg1;
- (int)StringAsNavMapType:(id)arg1;
- (void)addDisableMapFeatures:(int)arg1;
- (int)chargingState;
- (id)chargingStateAsString:(int)arg1;
- (void)clearDisableMapFeatures;
- (int)collectionTrigger;
- (id)collectionTriggerAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int*)disableMapFeatures;
- (id)disableMapFeaturesAsString:(int)arg1;
- (int)disableMapFeaturesAtIndex:(unsigned long long)arg1;
- (unsigned long long)disableMapFeaturesCount;
- (bool)hasChargingState;
- (bool)hasCollectionTrigger;
- (bool)hasNavMapType;
- (bool)hasThermalPressure;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)navMapType;
- (id)navMapTypeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChargingState:(int)arg1;
- (void)setCollectionTrigger:(int)arg1;
- (void)setDisableMapFeatures:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasChargingState:(bool)arg1;
- (void)setHasCollectionTrigger:(bool)arg1;
- (void)setHasNavMapType:(bool)arg1;
- (void)setHasThermalPressure:(bool)arg1;
- (void)setNavMapType:(int)arg1;
- (void)setThermalPressure:(unsigned int)arg1;
- (unsigned int)thermalPressure;
- (void)writeTo:(id)arg1;

@end
