
@interface MTSchemaMTError : SISchemaInstrumentationMessage {
    int  _errorCode;
    NSString * _errorDomain;
    NSString * _errorMessage;
    struct { 
        unsigned int errorCode : 1; 
    }  _has;
    bool  _hasErrorDomain;
    bool  _hasErrorMessage;
}

@property (nonatomic) int errorCode;
@property (nonatomic, copy) NSString *errorDomain;
@property (nonatomic, copy) NSString *errorMessage;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasErrorDomain;
@property (nonatomic) bool hasErrorMessage;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)deleteErrorCode;
- (void)deleteErrorDomain;
- (void)deleteErrorMessage;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (id)errorDomain;
- (id)errorMessage;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasErrorMessage;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasErrorDomain:(bool)arg1;
- (void)setHasErrorMessage:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
