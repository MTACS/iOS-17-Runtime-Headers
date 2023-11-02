
@interface SISchemaUUFRFatalError : SISchemaInstrumentationMessage {
    int  _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int errorCode : 1; 
    }  _has;
    bool  _hasErrorDomain;
    bool  _hasSiriResponseContext;
    SISchemaSiriResponseContext * _siriResponseContext;
}

@property (nonatomic) int errorCode;
@property (nonatomic, copy) NSString *errorDomain;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasErrorDomain;
@property (nonatomic) bool hasSiriResponseContext;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaSiriResponseContext *siriResponseContext;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteErrorCode;
- (void)deleteErrorDomain;
- (void)deleteSiriResponseContext;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (id)errorDomain;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasSiriResponseContext;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasErrorDomain:(bool)arg1;
- (void)setHasSiriResponseContext:(bool)arg1;
- (void)setSiriResponseContext:(id)arg1;
- (id)siriResponseContext;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
