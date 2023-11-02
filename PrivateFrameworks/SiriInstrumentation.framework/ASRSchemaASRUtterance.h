
@interface ASRSchemaASRUtterance : SISchemaInstrumentationMessage {
    NSArray * _interpretationIndices;
}

@property (nonatomic, copy) NSArray *interpretationIndices;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addInterpretationIndices:(unsigned int)arg1;
- (void)clearInterpretationIndices;
- (void)deleteInterpretationIndices;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)interpretationIndices;
- (unsigned int)interpretationIndicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)interpretationIndicesCount;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setInterpretationIndices:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
