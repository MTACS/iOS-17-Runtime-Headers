
@interface NLXSchemaCDMClientSetupFailed : SISchemaInstrumentationMessage {
    int  _errorCode;
    int  _errorDomain;
    struct { 
        unsigned int reason : 1; 
        unsigned int errorDomain : 1; 
        unsigned int errorCode : 1; 
    }  _has;
    int  _reason;
}

@property (nonatomic) int errorCode;
@property (nonatomic) int errorDomain;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasErrorDomain;
@property (nonatomic) bool hasReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int reason;

- (void)deleteErrorCode;
- (void)deleteErrorDomain;
- (void)deleteReason;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (int)errorDomain;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (void)setErrorCode:(int)arg1;
- (void)setErrorDomain:(int)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasErrorDomain:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setReason:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
