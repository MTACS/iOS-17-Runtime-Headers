
@interface SISchemaPNRFatalErrorInfo : SISchemaInstrumentationMessage {
    NSString * _errorCode;
    NSString * _errorDomain;
    bool  _hasErrorCode;
    bool  _hasErrorDomain;
}

@property (nonatomic, copy) NSString *errorCode;
@property (nonatomic, copy) NSString *errorDomain;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasErrorDomain;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)deleteErrorCode;
- (void)deleteErrorDomain;
- (id)dictionaryRepresentation;
- (id)errorCode;
- (id)errorDomain;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(id)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasErrorDomain:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
