
@interface NLXSchemaCDMSingleServiceSetupAttemptStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int serviceType : 1; 
        unsigned int retryNumber : 1; 
    }  _has;
    unsigned int  _retryNumber;
    int  _serviceType;
}

@property (nonatomic) bool hasRetryNumber;
@property (nonatomic) bool hasServiceType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int retryNumber;
@property (nonatomic) int serviceType;

- (void)deleteRetryNumber;
- (void)deleteServiceType;
- (id)dictionaryRepresentation;
- (bool)hasRetryNumber;
- (bool)hasServiceType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (unsigned int)retryNumber;
- (int)serviceType;
- (void)setHasRetryNumber:(bool)arg1;
- (void)setHasServiceType:(bool)arg1;
- (void)setRetryNumber:(unsigned int)arg1;
- (void)setServiceType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
