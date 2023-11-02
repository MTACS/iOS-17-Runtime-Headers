
@interface INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationIndependentSignals : SISchemaInstrumentationMessage {
    int  _disambiguationAppsOrder;
    int  _disambiguationReasons;
    struct { 
        unsigned int disambiguationAppsOrder : 1; 
        unsigned int disambiguationReasons : 1; 
        unsigned int modelVersion : 1; 
        unsigned int numDisambiguationApps : 1; 
        unsigned int trialDeploymentId : 1; 
    }  _has;
    bool  _hasTrialTreatmentId;
    long long  _modelVersion;
    int  _numDisambiguationApps;
    long long  _trialDeploymentId;
    SISchemaUUID * _trialTreatmentId;
}

@property (nonatomic) int disambiguationAppsOrder;
@property (nonatomic) int disambiguationReasons;
@property (nonatomic) bool hasDisambiguationAppsOrder;
@property (nonatomic) bool hasDisambiguationReasons;
@property (nonatomic) bool hasModelVersion;
@property (nonatomic) bool hasNumDisambiguationApps;
@property (nonatomic) bool hasTrialDeploymentId;
@property (nonatomic) bool hasTrialTreatmentId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) long long modelVersion;
@property (nonatomic) int numDisambiguationApps;
@property (nonatomic) long long trialDeploymentId;
@property (nonatomic, retain) SISchemaUUID *trialTreatmentId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteDisambiguationAppsOrder;
- (void)deleteDisambiguationReasons;
- (void)deleteModelVersion;
- (void)deleteNumDisambiguationApps;
- (void)deleteTrialDeploymentId;
- (void)deleteTrialTreatmentId;
- (id)dictionaryRepresentation;
- (int)disambiguationAppsOrder;
- (int)disambiguationReasons;
- (bool)hasDisambiguationAppsOrder;
- (bool)hasDisambiguationReasons;
- (bool)hasModelVersion;
- (bool)hasNumDisambiguationApps;
- (bool)hasTrialDeploymentId;
- (bool)hasTrialTreatmentId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (long long)modelVersion;
- (int)numDisambiguationApps;
- (bool)readFrom:(id)arg1;
- (void)setDisambiguationAppsOrder:(int)arg1;
- (void)setDisambiguationReasons:(int)arg1;
- (void)setHasDisambiguationAppsOrder:(bool)arg1;
- (void)setHasDisambiguationReasons:(bool)arg1;
- (void)setHasModelVersion:(bool)arg1;
- (void)setHasNumDisambiguationApps:(bool)arg1;
- (void)setHasTrialDeploymentId:(bool)arg1;
- (void)setHasTrialTreatmentId:(bool)arg1;
- (void)setModelVersion:(long long)arg1;
- (void)setNumDisambiguationApps:(int)arg1;
- (void)setTrialDeploymentId:(long long)arg1;
- (void)setTrialTreatmentId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (long long)trialDeploymentId;
- (id)trialTreatmentId;
- (void)writeTo:(id)arg1;

@end
