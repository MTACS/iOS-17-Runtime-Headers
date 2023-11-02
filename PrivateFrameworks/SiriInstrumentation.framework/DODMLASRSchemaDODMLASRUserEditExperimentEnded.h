
@interface DODMLASRSchemaDODMLASRUserEditExperimentEnded : SISchemaInstrumentationMessage {
    int  _errorCode;
    struct { 
        unsigned int numAudioFilesAvailable : 1; 
        unsigned int numAudioFilesSelected : 1; 
        unsigned int errorCode : 1; 
    }  _has;
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
    unsigned int  _numAudioFilesAvailable;
    unsigned int  _numAudioFilesSelected;
    NSArray * _redecodingResults;
}

@property (nonatomic) int errorCode;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasNumAudioFilesAvailable;
@property (nonatomic) bool hasNumAudioFilesSelected;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic) unsigned int numAudioFilesAvailable;
@property (nonatomic) unsigned int numAudioFilesSelected;
@property (nonatomic, copy) NSArray *redecodingResults;

- (void).cxx_destruct;
- (void)addRedecodingResults:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearRedecodingResults;
- (void)deleteErrorCode;
- (void)deleteLinkId;
- (void)deleteNumAudioFilesAvailable;
- (void)deleteNumAudioFilesSelected;
- (void)deleteRedecodingResults;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (bool)hasErrorCode;
- (bool)hasLinkId;
- (bool)hasNumAudioFilesAvailable;
- (bool)hasNumAudioFilesSelected;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (unsigned int)numAudioFilesAvailable;
- (unsigned int)numAudioFilesSelected;
- (bool)readFrom:(id)arg1;
- (id)redecodingResults;
- (id)redecodingResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)redecodingResultsCount;
- (void)setErrorCode:(int)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasNumAudioFilesAvailable:(bool)arg1;
- (void)setHasNumAudioFilesSelected:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setNumAudioFilesAvailable:(unsigned int)arg1;
- (void)setNumAudioFilesSelected:(unsigned int)arg1;
- (void)setRedecodingResults:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
