
@interface SISchemaPNRFatalError : SISchemaInstrumentationMessage {
    SISchemaPNRFatalErrorInfo * _error;
    bool  _hasError;
    bool  _hasUnderUnderlyingError;
    bool  _hasUnderlyingError;
    SISchemaPNRFatalErrorInfo * _underUnderlyingError;
    SISchemaPNRFatalErrorInfo * _underlyingError;
}

@property (nonatomic, retain) SISchemaPNRFatalErrorInfo *error;
@property (nonatomic) bool hasError;
@property (nonatomic) bool hasUnderUnderlyingError;
@property (nonatomic) bool hasUnderlyingError;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaPNRFatalErrorInfo *underUnderlyingError;
@property (nonatomic, retain) SISchemaPNRFatalErrorInfo *underlyingError;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteError;
- (void)deleteUnderUnderlyingError;
- (void)deleteUnderlyingError;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (bool)hasUnderUnderlyingError;
- (bool)hasUnderlyingError;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasUnderUnderlyingError:(bool)arg1;
- (void)setHasUnderlyingError:(bool)arg1;
- (void)setUnderUnderlyingError:(id)arg1;
- (void)setUnderlyingError:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)underUnderlyingError;
- (id)underlyingError;
- (void)writeTo:(id)arg1;

@end
