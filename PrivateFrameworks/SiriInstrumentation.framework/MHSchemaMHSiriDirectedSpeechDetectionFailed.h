
@interface MHSchemaMHSiriDirectedSpeechDetectionFailed : SISchemaInstrumentationMessage {
    unsigned int  _errorCode;
    NSString * _errorMessage;
    struct { 
        unsigned int errorCode : 1; 
    }  _has;
    bool  _hasErrorMessage;
}

@property (nonatomic) unsigned int errorCode;
@property (nonatomic, copy) NSString *errorMessage;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasErrorMessage;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)deleteErrorCode;
- (void)deleteErrorMessage;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (id)errorMessage;
- (bool)hasErrorCode;
- (bool)hasErrorMessage;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasErrorMessage:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
