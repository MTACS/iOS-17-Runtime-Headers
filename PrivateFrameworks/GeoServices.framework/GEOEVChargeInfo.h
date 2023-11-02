
@interface GEOEVChargeInfo : PBCodable <NSCopying> {
    unsigned int  _chargingTime;
    struct { 
        unsigned int has_gainedBatteryPercentage : 1; 
        unsigned int has_chargingTime : 1; 
        unsigned int has_gainedBatteryCharge : 1; 
        unsigned int has_gainedTravelRange : 1; 
    }  _flags;
    unsigned int  _gainedBatteryCharge;
    double  _gainedBatteryPercentage;
    unsigned int  _gainedTravelRange;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int chargingTime;
@property (nonatomic) unsigned int gainedBatteryCharge;
@property (nonatomic) double gainedBatteryPercentage;
@property (nonatomic) unsigned int gainedTravelRange;
@property (nonatomic) bool hasChargingTime;
@property (nonatomic) bool hasGainedBatteryCharge;
@property (nonatomic) bool hasGainedBatteryPercentage;
@property (nonatomic) bool hasGainedTravelRange;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)chargingTime;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)gainedBatteryCharge;
- (double)gainedBatteryPercentage;
- (unsigned int)gainedTravelRange;
- (bool)hasChargingTime;
- (bool)hasGainedBatteryCharge;
- (bool)hasGainedBatteryPercentage;
- (bool)hasGainedTravelRange;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChargingTime:(unsigned int)arg1;
- (void)setGainedBatteryCharge:(unsigned int)arg1;
- (void)setGainedBatteryPercentage:(double)arg1;
- (void)setGainedTravelRange:(unsigned int)arg1;
- (void)setHasChargingTime:(bool)arg1;
- (void)setHasGainedBatteryCharge:(bool)arg1;
- (void)setHasGainedBatteryPercentage:(bool)arg1;
- (void)setHasGainedTravelRange:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
