
@interface MHSchemaMHOdldFalseTriggerMitigated : SISchemaInstrumentationMessage {
    unsigned int  _errorCode;
    NSString * _errorMessage;
    struct { 
        unsigned int odldScore : 1; 
        unsigned int odldScoreThreshold : 1; 
        unsigned int errorCode : 1; 
    }  _has;
    bool  _hasErrorMessage;
    bool  _hasModelVersion;
    NSString * _modelVersion;
    float  _odldScore;
    float  _odldScoreThreshold;
}

@property (nonatomic) unsigned int errorCode;
@property (nonatomic, copy) NSString *errorMessage;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasErrorMessage;
@property (nonatomic) bool hasModelVersion;
@property (nonatomic) bool hasOdldScore;
@property (nonatomic) bool hasOdldScoreThreshold;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *modelVersion;
@property (nonatomic) float odldScore;
@property (nonatomic) float odldScoreThreshold;

- (void).cxx_destruct;
- (void)deleteErrorCode;
- (void)deleteErrorMessage;
- (void)deleteModelVersion;
- (void)deleteOdldScore;
- (void)deleteOdldScoreThreshold;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (id)errorMessage;
- (bool)hasErrorCode;
- (bool)hasErrorMessage;
- (bool)hasModelVersion;
- (bool)hasOdldScore;
- (bool)hasOdldScoreThreshold;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)modelVersion;
- (float)odldScore;
- (float)odldScoreThreshold;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasErrorMessage:(bool)arg1;
- (void)setHasModelVersion:(bool)arg1;
- (void)setHasOdldScore:(bool)arg1;
- (void)setHasOdldScoreThreshold:(bool)arg1;
- (void)setModelVersion:(id)arg1;
- (void)setOdldScore:(float)arg1;
- (void)setOdldScoreThreshold:(float)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
