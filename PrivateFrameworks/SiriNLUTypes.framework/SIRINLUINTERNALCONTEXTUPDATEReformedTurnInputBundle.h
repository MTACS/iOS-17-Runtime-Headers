
@interface SIRINLUINTERNALCONTEXTUPDATEReformedTurnInputBundle : PBCodable <NSCopying> {
    SIRINLUEXTERNALTurnInput * _currentTurn;
    struct { 
        unsigned int type : 1; 
    }  _has;
    NSMutableArray * _previousTurns;
    int  _type;
}

@property (nonatomic, retain) SIRINLUEXTERNALTurnInput *currentTurn;
@property (nonatomic, readonly) bool hasCurrentTurn;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSMutableArray *previousTurns;
@property (nonatomic) int type;

+ (Class)previousTurnsType;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)addPreviousTurns:(id)arg1;
- (void)clearPreviousTurns;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentTurn;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCurrentTurn;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)previousTurns;
- (id)previousTurnsAtIndex:(unsigned long long)arg1;
- (unsigned long long)previousTurnsCount;
- (bool)readFrom:(id)arg1;
- (void)setCurrentTurn:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setPreviousTurns:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
