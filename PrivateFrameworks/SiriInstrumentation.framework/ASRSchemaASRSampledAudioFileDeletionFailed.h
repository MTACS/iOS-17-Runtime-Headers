
@interface ASRSchemaASRSampledAudioFileDeletionFailed : SISchemaInstrumentationMessage {
    int  _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int errorCode : 1; 
        unsigned int underlyingErrorCode : 1; 
    }  _has;
    bool  _hasErrorDomain;
    bool  _hasOriginalAsrId;
    bool  _hasUnderlyingErrorDomain;
    SISchemaUUID * _originalAsrId;
    int  _underlyingErrorCode;
    NSString * _underlyingErrorDomain;
}

@property (nonatomic) int errorCode;
@property (nonatomic, copy) NSString *errorDomain;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasErrorDomain;
@property (nonatomic) bool hasOriginalAsrId;
@property (nonatomic) bool hasUnderlyingErrorCode;
@property (nonatomic) bool hasUnderlyingErrorDomain;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *originalAsrId;
@property (nonatomic) int underlyingErrorCode;
@property (nonatomic, copy) NSString *underlyingErrorDomain;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteErrorCode;
- (void)deleteErrorDomain;
- (void)deleteOriginalAsrId;
- (void)deleteUnderlyingErrorCode;
- (void)deleteUnderlyingErrorDomain;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (id)errorDomain;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasOriginalAsrId;
- (bool)hasUnderlyingErrorCode;
- (bool)hasUnderlyingErrorDomain;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)originalAsrId;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasErrorDomain:(bool)arg1;
- (void)setHasOriginalAsrId:(bool)arg1;
- (void)setHasUnderlyingErrorCode:(bool)arg1;
- (void)setHasUnderlyingErrorDomain:(bool)arg1;
- (void)setOriginalAsrId:(id)arg1;
- (void)setUnderlyingErrorCode:(int)arg1;
- (void)setUnderlyingErrorDomain:(id)arg1;
- (id)suppressMessageUnderConditions;
- (int)underlyingErrorCode;
- (id)underlyingErrorDomain;
- (void)writeTo:(id)arg1;

@end
