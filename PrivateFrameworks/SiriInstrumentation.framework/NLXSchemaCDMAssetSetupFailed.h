
@interface NLXSchemaCDMAssetSetupFailed : SISchemaInstrumentationMessage {
    unsigned int  _errorCode;
    int  _errorDomain;
    struct { 
        unsigned int errorDomain : 1; 
        unsigned int errorCode : 1; 
    }  _has;
}

@property (nonatomic) unsigned int errorCode;
@property (nonatomic) int errorDomain;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasErrorDomain;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteErrorCode;
- (void)deleteErrorDomain;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (int)errorDomain;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setErrorDomain:(int)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasErrorDomain:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
