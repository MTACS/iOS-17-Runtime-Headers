
@interface SIRINLUINTERNALITFMITFMParserResponse : PBCodable <NSCopying> {
    bool  _classificationLabel;
    float  _classificationProbability;
    struct { 
        unsigned int classificationProbability : 1; 
        unsigned int classificationLabel : 1; 
    }  _has;
    NSMutableArray * _hypotheses;
    SIRINLUEXTERNALParser * _parser;
}

@property (nonatomic) bool classificationLabel;
@property (nonatomic) float classificationProbability;
@property (nonatomic) bool hasClassificationLabel;
@property (nonatomic) bool hasClassificationProbability;
@property (nonatomic, readonly) bool hasParser;
@property (nonatomic, retain) NSMutableArray *hypotheses;
@property (nonatomic, retain) SIRINLUEXTERNALParser *parser;

+ (Class)hypothesesType;

- (void).cxx_destruct;
- (void)addHypotheses:(id)arg1;
- (bool)classificationLabel;
- (float)classificationProbability;
- (void)clearHypotheses;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClassificationLabel;
- (bool)hasClassificationProbability;
- (bool)hasParser;
- (unsigned long long)hash;
- (id)hypotheses;
- (id)hypothesesAtIndex:(unsigned long long)arg1;
- (unsigned long long)hypothesesCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parser;
- (bool)readFrom:(id)arg1;
- (void)setClassificationLabel:(bool)arg1;
- (void)setClassificationProbability:(float)arg1;
- (void)setHasClassificationLabel:(bool)arg1;
- (void)setHasClassificationProbability:(bool)arg1;
- (void)setHypotheses:(id)arg1;
- (void)setParser:(id)arg1;
- (void)writeTo:(id)arg1;

@end
