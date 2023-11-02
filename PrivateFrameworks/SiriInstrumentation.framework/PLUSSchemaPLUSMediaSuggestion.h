
@interface PLUSSchemaPLUSMediaSuggestion : SISchemaInstrumentationMessage {
    NSArray * _contributingGroundTruths;
    struct { 
        unsigned int locality : 1; 
    }  _has;
    bool  _hasSource;
    int  _locality;
    PLUSSchemaPLUSMediaSuggestionSource * _source;
}

@property (nonatomic, copy) NSArray *contributingGroundTruths;
@property (nonatomic) bool hasLocality;
@property (nonatomic) bool hasSource;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int locality;
@property (nonatomic, retain) PLUSSchemaPLUSMediaSuggestionSource *source;

- (void).cxx_destruct;
- (void)addContributingGroundTruth:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearContributingGroundTruth;
- (id)contributingGroundTruthAtIndex:(unsigned long long)arg1;
- (unsigned long long)contributingGroundTruthCount;
- (id)contributingGroundTruths;
- (void)deleteContributingGroundTruth;
- (void)deleteLocality;
- (void)deleteSource;
- (id)dictionaryRepresentation;
- (bool)hasLocality;
- (bool)hasSource;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)locality;
- (bool)readFrom:(id)arg1;
- (void)setContributingGroundTruths:(id)arg1;
- (void)setHasLocality:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setLocality:(int)arg1;
- (void)setSource:(id)arg1;
- (id)source;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
