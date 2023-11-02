
@interface SIRINLUINTERNALSNLCSNLCParserResponse : PBCodable <NSCopying> {
    int  _classificationLabel;
    float  _classificationProbability;
    struct { 
        unsigned int classificationLabel : 1; 
        unsigned int classificationProbability : 1; 
    }  _has;
}

@property (nonatomic) int classificationLabel;
@property (nonatomic) float classificationProbability;
@property (nonatomic) bool hasClassificationLabel;
@property (nonatomic) bool hasClassificationProbability;

- (int)StringAsClassificationLabel:(id)arg1;
- (int)classificationLabel;
- (id)classificationLabelAsString:(int)arg1;
- (float)classificationProbability;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClassificationLabel;
- (bool)hasClassificationProbability;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClassificationLabel:(int)arg1;
- (void)setClassificationProbability:(float)arg1;
- (void)setHasClassificationLabel:(bool)arg1;
- (void)setHasClassificationProbability:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
