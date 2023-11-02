
@interface GEOEVStateInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int has_remainingBatteryCharge : 1; 
        unsigned int has_remainingBatteryPercentage : 1; 
    }  _flags;
    unsigned int  _remainingBatteryCharge;
    unsigned int  _remainingBatteryPercentage;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasRemainingBatteryCharge;
@property (nonatomic) bool hasRemainingBatteryPercentage;
@property (nonatomic) unsigned int remainingBatteryCharge;
@property (nonatomic) unsigned int remainingBatteryPercentage;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRemainingBatteryCharge;
- (bool)hasRemainingBatteryPercentage;
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
- (void)setHasRemainingBatteryCharge:(bool)arg1;
- (void)setHasRemainingBatteryPercentage:(bool)arg1;
- (void)setRemainingBatteryCharge:(unsigned int)arg1;
- (void)setRemainingBatteryPercentage:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
