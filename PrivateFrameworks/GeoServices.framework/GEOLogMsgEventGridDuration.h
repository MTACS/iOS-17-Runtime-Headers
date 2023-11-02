
@interface GEOLogMsgEventGridDuration : PBCodable <NSCopying> {
    int  _displayType;
    unsigned int  _durationMs;
    int  _endState;
    NSMutableArray * _endStateErrorReasons;
    struct { 
        unsigned int has_displayType : 1; 
        unsigned int has_durationMs : 1; 
        unsigned int has_endState : 1; 
        unsigned int has_previousState : 1; 
    }  _flags;
    int  _previousState;
}

@property (nonatomic) int displayType;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) int endState;
@property (nonatomic, retain) NSMutableArray *endStateErrorReasons;
@property (nonatomic) bool hasDisplayType;
@property (nonatomic) bool hasDurationMs;
@property (nonatomic) bool hasEndState;
@property (nonatomic) bool hasPreviousState;
@property (nonatomic) int previousState;

+ (Class)endStateErrorReasonType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsDisplayType:(id)arg1;
- (int)StringAsEndState:(id)arg1;
- (int)StringAsPreviousState:(id)arg1;
- (void)addEndStateErrorReason:(id)arg1;
- (void)clearEndStateErrorReasons;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)displayType;
- (id)displayTypeAsString:(int)arg1;
- (unsigned int)durationMs;
- (int)endState;
- (id)endStateAsString:(int)arg1;
- (id)endStateErrorReasonAtIndex:(unsigned long long)arg1;
- (id)endStateErrorReasons;
- (unsigned long long)endStateErrorReasonsCount;
- (bool)hasDisplayType;
- (bool)hasDurationMs;
- (bool)hasEndState;
- (bool)hasPreviousState;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)previousState;
- (id)previousStateAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisplayType:(int)arg1;
- (void)setDurationMs:(unsigned int)arg1;
- (void)setEndState:(int)arg1;
- (void)setEndStateErrorReasons:(id)arg1;
- (void)setHasDisplayType:(bool)arg1;
- (void)setHasDurationMs:(bool)arg1;
- (void)setHasEndState:(bool)arg1;
- (void)setHasPreviousState:(bool)arg1;
- (void)setPreviousState:(int)arg1;
- (void)writeTo:(id)arg1;

@end
