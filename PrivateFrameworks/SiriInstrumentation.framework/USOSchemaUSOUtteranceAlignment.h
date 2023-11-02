
@interface USOSchemaUSOUtteranceAlignment : SISchemaInstrumentationMessage {
    unsigned int  _asrHypothesisIndex;
    struct { 
        unsigned int asrHypothesisIndex : 1; 
        unsigned int nodeIndex : 1; 
    }  _has;
    unsigned int  _nodeIndex;
    NSArray * _spans;
}

@property (nonatomic) unsigned int asrHypothesisIndex;
@property (nonatomic) bool hasAsrHypothesisIndex;
@property (nonatomic) bool hasNodeIndex;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int nodeIndex;
@property (nonatomic, copy) NSArray *spans;

- (void).cxx_destruct;
- (void)addSpans:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (unsigned int)asrHypothesisIndex;
- (void)clearSpans;
- (void)deleteAsrHypothesisIndex;
- (void)deleteNodeIndex;
- (void)deleteSpans;
- (id)dictionaryRepresentation;
- (bool)hasAsrHypothesisIndex;
- (bool)hasNodeIndex;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)nodeIndex;
- (bool)readFrom:(id)arg1;
- (void)setAsrHypothesisIndex:(unsigned int)arg1;
- (void)setHasAsrHypothesisIndex:(bool)arg1;
- (void)setHasNodeIndex:(bool)arg1;
- (void)setNodeIndex:(unsigned int)arg1;
- (void)setSpans:(id)arg1;
- (id)spans;
- (id)spansAtIndex:(unsigned long long)arg1;
- (unsigned long long)spansCount;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
