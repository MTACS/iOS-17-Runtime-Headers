
@interface PLUSSchemaPLUSContactSuggestion : SISchemaInstrumentationMessage {
    double  _confidence;
    NSArray * _contributingGroundTruths;
    struct { 
        unsigned int source : 1; 
        unsigned int confidence : 1; 
    }  _has;
    bool  _hasSuggestionId;
    int  _source;
    SISchemaUUID * _suggestionId;
}

@property (nonatomic) double confidence;
@property (nonatomic, copy) NSArray *contributingGroundTruths;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasSource;
@property (nonatomic) bool hasSuggestionId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int source;
@property (nonatomic, retain) SISchemaUUID *suggestionId;

- (void).cxx_destruct;
- (void)addContributingGroundTruth:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearContributingGroundTruth;
- (double)confidence;
- (id)contributingGroundTruthAtIndex:(unsigned long long)arg1;
- (unsigned long long)contributingGroundTruthCount;
- (id)contributingGroundTruths;
- (void)deleteConfidence;
- (void)deleteContributingGroundTruth;
- (void)deleteSource;
- (void)deleteSuggestionId;
- (id)dictionaryRepresentation;
- (bool)hasConfidence;
- (bool)hasSource;
- (bool)hasSuggestionId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setContributingGroundTruths:(id)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setHasSuggestionId:(bool)arg1;
- (void)setSource:(int)arg1;
- (void)setSuggestionId:(id)arg1;
- (int)source;
- (id)suggestionId;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
