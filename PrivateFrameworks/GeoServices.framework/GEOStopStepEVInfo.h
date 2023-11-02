
@interface GEOStopStepEVInfo : PBCodable <NSCopying> {
    unsigned int  _chargingTime;
    struct { 
        unsigned int has_gainedBatteryPercentage : 1; 
        unsigned int has_muid : 1; 
        unsigned int has_remainingBatteryPercentage : 1; 
        unsigned int has_chargingTime : 1; 
        unsigned int has_gainedBatteryCharge : 1; 
        unsigned int has_gainedTravelRange : 1; 
        unsigned int has_zilchPathIndex : 1; 
    }  _flags;
    unsigned int  _gainedBatteryCharge;
    double  _gainedBatteryPercentage;
    unsigned int  _gainedTravelRange;
    unsigned long long  _muid;
    double  _remainingBatteryPercentage;
    PBUnknownFields * _unknownFields;
    unsigned int  _zilchPathIndex;
}

@property (nonatomic) unsigned int chargingTime;
@property (nonatomic) unsigned int gainedBatteryCharge;
@property (nonatomic) double gainedBatteryPercentage;
@property (nonatomic) unsigned int gainedTravelRange;
@property (nonatomic) bool hasChargingTime;
@property (nonatomic) bool hasGainedBatteryCharge;
@property (nonatomic) bool hasGainedBatteryPercentage;
@property (nonatomic) bool hasGainedTravelRange;
@property (nonatomic) bool hasMuid;
@property (nonatomic) bool hasRemainingBatteryPercentage;
@property (nonatomic) bool hasZilchPathIndex;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) double remainingBatteryPercentage;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int zilchPathIndex;

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
- (bool)hasMuid;
- (bool)hasRemainingBatteryPercentage;
- (bool)hasZilchPathIndex;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (double)remainingBatteryPercentage;
- (void)setChargingTime:(unsigned int)arg1;
- (void)setGainedBatteryCharge:(unsigned int)arg1;
- (void)setGainedBatteryPercentage:(double)arg1;
- (void)setGainedTravelRange:(unsigned int)arg1;
- (void)setHasChargingTime:(bool)arg1;
- (void)setHasGainedBatteryCharge:(bool)arg1;
- (void)setHasGainedBatteryPercentage:(bool)arg1;
- (void)setHasGainedTravelRange:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasRemainingBatteryPercentage:(bool)arg1;
- (void)setHasZilchPathIndex:(bool)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setRemainingBatteryPercentage:(double)arg1;
- (void)setZilchPathIndex:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;
- (unsigned int)zilchPathIndex;

@end
