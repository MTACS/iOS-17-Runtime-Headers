
@interface GEOEVStepFeedbackInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int has_remainingBatteryCharge : 1; 
        unsigned int has_remainingBatteryPercentage : 1; 
        unsigned int has_remainingTravelRange : 1; 
        unsigned int has_stateOfChargeDiff : 1; 
    }  _flags;
    unsigned int  _remainingBatteryCharge;
    unsigned int  _remainingBatteryPercentage;
    unsigned int  _remainingTravelRange;
    unsigned int  _stateOfChargeDiff;
}

@property (nonatomic) bool hasRemainingBatteryCharge;
@property (nonatomic) bool hasRemainingBatteryPercentage;
@property (nonatomic) bool hasRemainingTravelRange;
@property (nonatomic) bool hasStateOfChargeDiff;
@property (nonatomic) unsigned int remainingBatteryCharge;
@property (nonatomic) unsigned int remainingBatteryPercentage;
@property (nonatomic) unsigned int remainingTravelRange;
@property (nonatomic) unsigned int stateOfChargeDiff;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRemainingBatteryCharge;
- (bool)hasRemainingBatteryPercentage;
- (bool)hasRemainingTravelRange;
- (bool)hasStateOfChargeDiff;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)remainingBatteryCharge;
- (unsigned int)remainingBatteryPercentage;
- (unsigned int)remainingTravelRange;
- (void)setHasRemainingBatteryCharge:(bool)arg1;
- (void)setHasRemainingBatteryPercentage:(bool)arg1;
- (void)setHasRemainingTravelRange:(bool)arg1;
- (void)setHasStateOfChargeDiff:(bool)arg1;
- (void)setRemainingBatteryCharge:(unsigned int)arg1;
- (void)setRemainingBatteryPercentage:(unsigned int)arg1;
- (void)setRemainingTravelRange:(unsigned int)arg1;
- (void)setStateOfChargeDiff:(unsigned int)arg1;
- (unsigned int)stateOfChargeDiff;
- (void)writeTo:(id)arg1;

@end
