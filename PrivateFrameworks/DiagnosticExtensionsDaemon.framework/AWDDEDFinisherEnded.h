
@interface AWDDEDFinisherEnded : PBCodable <NSCopying> {
    unsigned long long  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int numbytes : 1; 
        unsigned int timestamp : 1; 
        unsigned int state : 1; 
        unsigned int type : 1; 
    }  _has;
    unsigned long long  _numbytes;
    int  _state;
    unsigned long long  _timestamp;
    int  _type;
}

@property (nonatomic) unsigned long long duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasNumbytes;
@property (nonatomic) bool hasState;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasType;
@property (nonatomic) unsigned long long numbytes;
@property (nonatomic) int state;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int type;

- (int)StringAsState:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (bool)hasDuration;
- (bool)hasNumbytes;
- (bool)hasState;
- (bool)hasTimestamp;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)numbytes;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasNumbytes:(bool)arg1;
- (void)setHasState:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setNumbytes:(unsigned long long)arg1;
- (void)setState:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(int)arg1;
- (int)state;
- (id)stateAsString:(int)arg1;
- (unsigned long long)timestamp;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
