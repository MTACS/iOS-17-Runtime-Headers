
@interface GRPSchemaProducerMetadata : SISchemaTopLevelUnionType {
    bool  _hasTrialExperiment;
    GRPSchemaTrialExperimentIdentifiers * _trialExperiment;
}

@property (nonatomic) bool hasTrialExperiment;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) GRPSchemaTrialExperimentIdentifiers *trialExperiment;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteTrialExperiment;
- (id)dictionaryRepresentation;
- (int)getAnyEventType;
- (bool)hasTrialExperiment;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setHasTrialExperiment:(bool)arg1;
- (void)setTrialExperiment:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)trialExperiment;
- (void)writeTo:(id)arg1;

@end
