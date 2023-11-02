
@interface ATXPBTaskAgnosticBehaviorSample : PBCodable <NSCopying> {
    bool  _engaged;
    ATXPBTaskAgnosticBehaviorFeatureVector * _featureVector;
    struct { 
        unsigned int timeIntervalSinceReferenceDate : 1; 
        unsigned int type : 1; 
        unsigned int engaged : 1; 
    }  _has;
    double  _timeIntervalSinceReferenceDate;
    int  _type;
}

@property (nonatomic) bool engaged;
@property (nonatomic, retain) ATXPBTaskAgnosticBehaviorFeatureVector *featureVector;
@property (nonatomic) bool hasEngaged;
@property (nonatomic, readonly) bool hasFeatureVector;
@property (nonatomic) bool hasTimeIntervalSinceReferenceDate;
@property (nonatomic) bool hasType;
@property (nonatomic) double timeIntervalSinceReferenceDate;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)engaged;
- (id)featureVector;
- (bool)hasEngaged;
- (bool)hasFeatureVector;
- (bool)hasTimeIntervalSinceReferenceDate;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEngaged:(bool)arg1;
- (void)setFeatureVector:(id)arg1;
- (void)setHasEngaged:(bool)arg1;
- (void)setHasTimeIntervalSinceReferenceDate:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setTimeIntervalSinceReferenceDate:(double)arg1;
- (void)setType:(int)arg1;
- (double)timeIntervalSinceReferenceDate;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
