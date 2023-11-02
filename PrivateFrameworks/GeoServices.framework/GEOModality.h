
@interface GEOModality : PBCodable <NSCopying> {
    int  _confidence;
    bool  _expectedModality;
    struct { 
        unsigned int has_timestamp : 1; 
        unsigned int has_confidence : 1; 
        unsigned int has_expectedModality : 1; 
        unsigned int has_notMoving : 1; 
    }  _flags;
    bool  _notMoving;
    double  _timestamp;
}

@property (nonatomic) int confidence;
@property (nonatomic) bool expectedModality;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasExpectedModality;
@property (nonatomic) bool hasNotMoving;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool notMoving;
@property (nonatomic) double timestamp;

+ (bool)isValid:(id)arg1;

- (int)StringAsConfidence:(id)arg1;
- (int)confidence;
- (id)confidenceAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)expectedModality;
- (bool)hasConfidence;
- (bool)hasExpectedModality;
- (bool)hasNotMoving;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (bool)notMoving;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(int)arg1;
- (void)setExpectedModality:(bool)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasExpectedModality:(bool)arg1;
- (void)setHasNotMoving:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setNotMoving:(bool)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
