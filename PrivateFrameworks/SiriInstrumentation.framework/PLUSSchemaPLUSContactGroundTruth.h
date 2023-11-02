
@interface PLUSSchemaPLUSContactGroundTruth : SISchemaInstrumentationMessage {
    int  _contactSuggestionUsedBySiri;
    SISchemaUUID * _groundTruthId;
    int  _groundTruthSource;
    struct { 
        unsigned int groundTruthSource : 1; 
        unsigned int hasSiriResolvedContactForEntity : 1; 
        unsigned int siriResolvedAndPlusInferredContactComparison : 1; 
        unsigned int contactSuggestionUsedBySiri : 1; 
    }  _has;
    bool  _hasGroundTruthId;
    bool  _hasSiriResolvedContactForEntity;
    int  _siriResolvedAndPlusInferredContactComparison;
}

@property (nonatomic) int contactSuggestionUsedBySiri;
@property (nonatomic, retain) SISchemaUUID *groundTruthId;
@property (nonatomic) int groundTruthSource;
@property (nonatomic) bool hasContactSuggestionUsedBySiri;
@property (nonatomic) bool hasGroundTruthId;
@property (nonatomic) bool hasGroundTruthSource;
@property (nonatomic) bool hasHasSiriResolvedContactForEntity;
@property (nonatomic) bool hasSiriResolvedAndPlusInferredContactComparison;
@property (nonatomic) bool hasSiriResolvedContactForEntity;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int siriResolvedAndPlusInferredContactComparison;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)contactSuggestionUsedBySiri;
- (void)deleteContactSuggestionUsedBySiri;
- (void)deleteGroundTruthId;
- (void)deleteGroundTruthSource;
- (void)deleteHasSiriResolvedContactForEntity;
- (void)deleteSiriResolvedAndPlusInferredContactComparison;
- (id)dictionaryRepresentation;
- (id)groundTruthId;
- (int)groundTruthSource;
- (bool)hasContactSuggestionUsedBySiri;
- (bool)hasGroundTruthId;
- (bool)hasGroundTruthSource;
- (bool)hasHasSiriResolvedContactForEntity;
- (bool)hasSiriResolvedAndPlusInferredContactComparison;
- (bool)hasSiriResolvedContactForEntity;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setContactSuggestionUsedBySiri:(int)arg1;
- (void)setGroundTruthId:(id)arg1;
- (void)setGroundTruthSource:(int)arg1;
- (void)setHasContactSuggestionUsedBySiri:(bool)arg1;
- (void)setHasGroundTruthId:(bool)arg1;
- (void)setHasGroundTruthSource:(bool)arg1;
- (void)setHasHasSiriResolvedContactForEntity:(bool)arg1;
- (void)setHasSiriResolvedAndPlusInferredContactComparison:(bool)arg1;
- (void)setHasSiriResolvedContactForEntity:(bool)arg1;
- (void)setSiriResolvedAndPlusInferredContactComparison:(int)arg1;
- (int)siriResolvedAndPlusInferredContactComparison;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
