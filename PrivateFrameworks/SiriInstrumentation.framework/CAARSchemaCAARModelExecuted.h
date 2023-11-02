
@interface CAARSchemaCAARModelExecuted : SISchemaInstrumentationMessage {
    SISchemaAsset * _asset;
    struct { 
        unsigned int isShadowLog : 1; 
    }  _has;
    bool  _hasAsset;
    bool  _hasModelOutput;
    bool  _hasTrialEnrollment;
    bool  _isShadowLog;
    CAARSchemaCAARModelOutput * _modelOutput;
    CAARSchemaCAARTrialEnrollment * _trialEnrollment;
}

@property (nonatomic, retain) SISchemaAsset *asset;
@property (nonatomic) bool hasAsset;
@property (nonatomic) bool hasIsShadowLog;
@property (nonatomic) bool hasModelOutput;
@property (nonatomic) bool hasTrialEnrollment;
@property (nonatomic) bool isShadowLog;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) CAARSchemaCAARModelOutput *modelOutput;
@property (nonatomic, retain) CAARSchemaCAARTrialEnrollment *trialEnrollment;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)asset;
- (void)deleteAsset;
- (void)deleteIsShadowLog;
- (void)deleteModelOutput;
- (void)deleteTrialEnrollment;
- (id)dictionaryRepresentation;
- (bool)hasAsset;
- (bool)hasIsShadowLog;
- (bool)hasModelOutput;
- (bool)hasTrialEnrollment;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isShadowLog;
- (id)jsonData;
- (id)modelOutput;
- (bool)readFrom:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setHasAsset:(bool)arg1;
- (void)setHasIsShadowLog:(bool)arg1;
- (void)setHasModelOutput:(bool)arg1;
- (void)setHasTrialEnrollment:(bool)arg1;
- (void)setIsShadowLog:(bool)arg1;
- (void)setModelOutput:(id)arg1;
- (void)setTrialEnrollment:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)trialEnrollment;
- (void)writeTo:(id)arg1;

@end
