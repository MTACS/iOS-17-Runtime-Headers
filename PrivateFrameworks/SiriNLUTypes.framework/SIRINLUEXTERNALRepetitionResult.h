
@interface SIRINLUEXTERNALRepetitionResult : PBCodable <NSCopying> {
    unsigned int  _asrHypothesisIndex;
    struct { 
        unsigned int asrHypothesisIndex : 1; 
        unsigned int repetitionType : 1; 
    }  _has;
    int  _repetitionType;
}

@property (nonatomic) unsigned int asrHypothesisIndex;
@property (nonatomic) bool hasAsrHypothesisIndex;
@property (nonatomic) bool hasRepetitionType;
@property (nonatomic) int repetitionType;

- (int)StringAsRepetitionType:(id)arg1;
- (unsigned int)asrHypothesisIndex;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAsrHypothesisIndex;
- (bool)hasRepetitionType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)repetitionType;
- (id)repetitionTypeAsString:(int)arg1;
- (void)setAsrHypothesisIndex:(unsigned int)arg1;
- (void)setHasAsrHypothesisIndex:(bool)arg1;
- (void)setHasRepetitionType:(bool)arg1;
- (void)setRepetitionType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
