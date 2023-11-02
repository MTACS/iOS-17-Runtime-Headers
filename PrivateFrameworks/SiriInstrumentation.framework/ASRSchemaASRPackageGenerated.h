
@interface ASRSchemaASRPackageGenerated : SISchemaInstrumentationMessage {
    NSString * _acousticModelVersion;
    struct { 
        unsigned int isFinal : 1; 
    }  _has;
    bool  _hasAcousticModelVersion;
    bool  _hasLoggableSharedUserId;
    bool  _hasModelVersion;
    bool  _hasPackage;
    bool  _hasResultCandidateId;
    bool  _isFinal;
    NSString * _loggableSharedUserId;
    NSString * _modelVersion;
    ASRSchemaASRPackage * _package;
    NSString * _resultCandidateId;
}

@property (nonatomic, copy) NSString *acousticModelVersion;
@property (nonatomic) bool hasAcousticModelVersion;
@property (nonatomic) bool hasIsFinal;
@property (nonatomic) bool hasLoggableSharedUserId;
@property (nonatomic) bool hasModelVersion;
@property (nonatomic) bool hasPackage;
@property (nonatomic) bool hasResultCandidateId;
@property (nonatomic) bool isFinal;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *loggableSharedUserId;
@property (nonatomic, copy) NSString *modelVersion;
@property (nonatomic, retain) ASRSchemaASRPackage *package;
@property (nonatomic, copy) NSString *resultCandidateId;

- (void).cxx_destruct;
- (id)acousticModelVersion;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAcousticModelVersion;
- (void)deleteIsFinal;
- (void)deleteLoggableSharedUserId;
- (void)deleteModelVersion;
- (void)deletePackage;
- (void)deleteResultCandidateId;
- (id)dictionaryRepresentation;
- (bool)hasAcousticModelVersion;
- (bool)hasIsFinal;
- (bool)hasLoggableSharedUserId;
- (bool)hasModelVersion;
- (bool)hasPackage;
- (bool)hasResultCandidateId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFinal;
- (id)jsonData;
- (id)loggableSharedUserId;
- (id)modelVersion;
- (id)package;
- (bool)readFrom:(id)arg1;
- (id)resultCandidateId;
- (void)setAcousticModelVersion:(id)arg1;
- (void)setHasAcousticModelVersion:(bool)arg1;
- (void)setHasIsFinal:(bool)arg1;
- (void)setHasLoggableSharedUserId:(bool)arg1;
- (void)setHasModelVersion:(bool)arg1;
- (void)setHasPackage:(bool)arg1;
- (void)setHasResultCandidateId:(bool)arg1;
- (void)setIsFinal:(bool)arg1;
- (void)setLoggableSharedUserId:(id)arg1;
- (void)setModelVersion:(id)arg1;
- (void)setPackage:(id)arg1;
- (void)setResultCandidateId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
