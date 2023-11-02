
@interface SMTSchemaSMTAppLanguageModelBuildEnded : SISchemaInstrumentationMessage {
    NSString * _artifactFilepath;
    NSString * _assetName;
    struct { 
        unsigned int trainingDataSizeInTokens : 1; 
        unsigned int numOutOfVocabulary : 1; 
        unsigned int numCustomPronunciations : 1; 
        unsigned int trainingTimeInNs : 1; 
        unsigned int languageModelFileSizeInBytes : 1; 
    }  _has;
    bool  _hasArtifactFilepath;
    bool  _hasAssetName;
    unsigned long long  _languageModelFileSizeInBytes;
    unsigned long long  _numCustomPronunciations;
    unsigned long long  _numOutOfVocabulary;
    unsigned long long  _trainingDataSizeInTokens;
    unsigned long long  _trainingTimeInNs;
}

@property (nonatomic, copy) NSString *artifactFilepath;
@property (nonatomic, copy) NSString *assetName;
@property (nonatomic) bool hasArtifactFilepath;
@property (nonatomic) bool hasAssetName;
@property (nonatomic) bool hasLanguageModelFileSizeInBytes;
@property (nonatomic) bool hasNumCustomPronunciations;
@property (nonatomic) bool hasNumOutOfVocabulary;
@property (nonatomic) bool hasTrainingDataSizeInTokens;
@property (nonatomic) bool hasTrainingTimeInNs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long languageModelFileSizeInBytes;
@property (nonatomic) unsigned long long numCustomPronunciations;
@property (nonatomic) unsigned long long numOutOfVocabulary;
@property (nonatomic) unsigned long long trainingDataSizeInTokens;
@property (nonatomic) unsigned long long trainingTimeInNs;

- (void).cxx_destruct;
- (id)artifactFilepath;
- (id)assetName;
- (void)deleteArtifactFilepath;
- (void)deleteAssetName;
- (void)deleteLanguageModelFileSizeInBytes;
- (void)deleteNumCustomPronunciations;
- (void)deleteNumOutOfVocabulary;
- (void)deleteTrainingDataSizeInTokens;
- (void)deleteTrainingTimeInNs;
- (id)dictionaryRepresentation;
- (bool)hasArtifactFilepath;
- (bool)hasAssetName;
- (bool)hasLanguageModelFileSizeInBytes;
- (bool)hasNumCustomPronunciations;
- (bool)hasNumOutOfVocabulary;
- (bool)hasTrainingDataSizeInTokens;
- (bool)hasTrainingTimeInNs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned long long)languageModelFileSizeInBytes;
- (unsigned long long)numCustomPronunciations;
- (unsigned long long)numOutOfVocabulary;
- (bool)readFrom:(id)arg1;
- (void)setArtifactFilepath:(id)arg1;
- (void)setAssetName:(id)arg1;
- (void)setHasArtifactFilepath:(bool)arg1;
- (void)setHasAssetName:(bool)arg1;
- (void)setHasLanguageModelFileSizeInBytes:(bool)arg1;
- (void)setHasNumCustomPronunciations:(bool)arg1;
- (void)setHasNumOutOfVocabulary:(bool)arg1;
- (void)setHasTrainingDataSizeInTokens:(bool)arg1;
- (void)setHasTrainingTimeInNs:(bool)arg1;
- (void)setLanguageModelFileSizeInBytes:(unsigned long long)arg1;
- (void)setNumCustomPronunciations:(unsigned long long)arg1;
- (void)setNumOutOfVocabulary:(unsigned long long)arg1;
- (void)setTrainingDataSizeInTokens:(unsigned long long)arg1;
- (void)setTrainingTimeInNs:(unsigned long long)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)trainingDataSizeInTokens;
- (unsigned long long)trainingTimeInNs;
- (void)writeTo:(id)arg1;

@end
