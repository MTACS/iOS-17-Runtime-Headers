
@interface SIRINLUINTERNALSiriVocabularySpanData : PBCodable <NSCopying> {
    struct { 
        unsigned int matchScore : 1; 
        unsigned int priorScore : 1; 
        unsigned int priorOrdinality : 1; 
    }  _has;
    double  _matchScore;
    unsigned int  _priorOrdinality;
    double  _priorScore;
}

@property (nonatomic) bool hasMatchScore;
@property (nonatomic) bool hasPriorOrdinality;
@property (nonatomic) bool hasPriorScore;
@property (nonatomic) double matchScore;
@property (nonatomic) unsigned int priorOrdinality;
@property (nonatomic) double priorScore;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMatchScore;
- (bool)hasPriorOrdinality;
- (bool)hasPriorScore;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)matchScore;
- (void)mergeFrom:(id)arg1;
- (unsigned int)priorOrdinality;
- (double)priorScore;
- (bool)readFrom:(id)arg1;
- (void)setHasMatchScore:(bool)arg1;
- (void)setHasPriorOrdinality:(bool)arg1;
- (void)setHasPriorScore:(bool)arg1;
- (void)setMatchScore:(double)arg1;
- (void)setPriorOrdinality:(unsigned int)arg1;
- (void)setPriorScore:(double)arg1;
- (void)writeTo:(id)arg1;

@end
