
@interface CLPBaroCalibrationIndication : PBCodable <NSCopying> {
    struct { 
        unsigned int outdoorConfidence : 1; 
        unsigned int mapMatchRoadType : 1; 
        unsigned int isCalibratedBarometricAlt : 1; 
        unsigned int isMapMatched : 1; 
        unsigned int isOutdoorContext : 1; 
    }  _has;
    bool  _isCalibratedBarometricAlt;
    bool  _isMapMatched;
    bool  _isOutdoorContext;
    int  _mapMatchRoadType;
    double  _outdoorConfidence;
}

@property (nonatomic) bool hasIsCalibratedBarometricAlt;
@property (nonatomic) bool hasIsMapMatched;
@property (nonatomic) bool hasIsOutdoorContext;
@property (nonatomic) bool hasMapMatchRoadType;
@property (nonatomic) bool hasOutdoorConfidence;
@property (nonatomic) bool isCalibratedBarometricAlt;
@property (nonatomic) bool isMapMatched;
@property (nonatomic) bool isOutdoorContext;
@property (nonatomic) int mapMatchRoadType;
@property (nonatomic) double outdoorConfidence;

- (int)StringAsMapMatchRoadType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsCalibratedBarometricAlt;
- (bool)hasIsMapMatched;
- (bool)hasIsOutdoorContext;
- (bool)hasMapMatchRoadType;
- (bool)hasOutdoorConfidence;
- (unsigned long long)hash;
- (bool)isCalibratedBarometricAlt;
- (bool)isEqual:(id)arg1;
- (bool)isMapMatched;
- (bool)isOutdoorContext;
- (int)mapMatchRoadType;
- (id)mapMatchRoadTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (double)outdoorConfidence;
- (bool)readFrom:(id)arg1;
- (void)setHasIsCalibratedBarometricAlt:(bool)arg1;
- (void)setHasIsMapMatched:(bool)arg1;
- (void)setHasIsOutdoorContext:(bool)arg1;
- (void)setHasMapMatchRoadType:(bool)arg1;
- (void)setHasOutdoorConfidence:(bool)arg1;
- (void)setIsCalibratedBarometricAlt:(bool)arg1;
- (void)setIsMapMatched:(bool)arg1;
- (void)setIsOutdoorContext:(bool)arg1;
- (void)setMapMatchRoadType:(int)arg1;
- (void)setOutdoorConfidence:(double)arg1;
- (void)writeTo:(id)arg1;

@end
