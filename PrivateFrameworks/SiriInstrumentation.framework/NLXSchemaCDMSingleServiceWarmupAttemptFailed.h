
@interface NLXSchemaCDMSingleServiceWarmupAttemptFailed : SISchemaInstrumentationMessage {
    unsigned int  _errorCode;
    struct { 
        unsigned int serviceType : 1; 
        unsigned int retryNumber : 1; 
        unsigned int reason : 1; 
        unsigned int errorCode : 1; 
    }  _has;
    int  _reason;
    unsigned int  _retryNumber;
    int  _serviceType;
}

@property (nonatomic) unsigned int errorCode;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasRetryNumber;
@property (nonatomic) bool hasServiceType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int reason;
@property (nonatomic) unsigned int retryNumber;
@property (nonatomic) int serviceType;

- (void)deleteErrorCode;
- (void)deleteReason;
- (void)deleteRetryNumber;
- (void)deleteServiceType;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (bool)hasErrorCode;
- (bool)hasReason;
- (bool)hasRetryNumber;
- (bool)hasServiceType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (unsigned int)retryNumber;
- (int)serviceType;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasRetryNumber:(bool)arg1;
- (void)setHasServiceType:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)setRetryNumber:(unsigned int)arg1;
- (void)setServiceType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
