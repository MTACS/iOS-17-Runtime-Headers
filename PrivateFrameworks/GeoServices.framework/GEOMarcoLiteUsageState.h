
@interface GEOMarcoLiteUsageState : PBCodable <NSCopying> {
    struct { 
        unsigned int has_stateExitReason : 1; 
        unsigned int has_stateTime : 1; 
        unsigned int has_stateType : 1; 
        unsigned int has_stateValue : 1; 
    }  _flags;
    int  _stateExitReason;
    unsigned int  _stateTime;
    int  _stateType;
    unsigned int  _stateValue;
}

@property (nonatomic) bool hasStateExitReason;
@property (nonatomic) bool hasStateTime;
@property (nonatomic) bool hasStateType;
@property (nonatomic) bool hasStateValue;
@property (nonatomic) int stateExitReason;
@property (nonatomic) unsigned int stateTime;
@property (nonatomic) int stateType;
@property (nonatomic) unsigned int stateValue;

+ (bool)isValid:(id)arg1;

- (int)StringAsStateExitReason:(id)arg1;
- (int)StringAsStateType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStateExitReason;
- (bool)hasStateTime;
- (bool)hasStateType;
- (bool)hasStateValue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasStateExitReason:(bool)arg1;
- (void)setHasStateTime:(bool)arg1;
- (void)setHasStateType:(bool)arg1;
- (void)setHasStateValue:(bool)arg1;
- (void)setStateExitReason:(int)arg1;
- (void)setStateTime:(unsigned int)arg1;
- (void)setStateType:(int)arg1;
- (void)setStateValue:(unsigned int)arg1;
- (int)stateExitReason;
- (id)stateExitReasonAsString:(int)arg1;
- (unsigned int)stateTime;
- (int)stateType;
- (id)stateTypeAsString:(int)arg1;
- (unsigned int)stateValue;
- (void)writeTo:(id)arg1;

@end
