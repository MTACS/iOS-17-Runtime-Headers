
@interface GEOEVStepInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int has_remainingBatteryPercentage : 1; 
        unsigned int has_remainingTravelRange : 1; 
    }  _flags;
    double  _remainingBatteryPercentage;
    unsigned int  _remainingTravelRange;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasRemainingBatteryPercentage;
@property (nonatomic) bool hasRemainingTravelRange;
@property (nonatomic) double remainingBatteryPercentage;
@property (nonatomic) unsigned int remainingTravelRange;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRemainingBatteryPercentage;
- (bool)hasRemainingTravelRange;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (double)remainingBatteryPercentage;
- (unsigned int)remainingTravelRange;
- (void)setHasRemainingBatteryPercentage:(bool)arg1;
- (void)setHasRemainingTravelRange:(bool)arg1;
- (void)setRemainingBatteryPercentage:(double)arg1;
- (void)setRemainingTravelRange:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
