
@interface NLXSchemaCDMServiceSetupMetric : SISchemaInstrumentationMessage {
    long long  _endLogicalTimestampInNs;
    unsigned int  _errorCode;
    int  _failureReason;
    struct { 
        unsigned int serviceType : 1; 
        unsigned int startLogicalTimestampInNs : 1; 
        unsigned int endLogicalTimestampInNs : 1; 
        unsigned int failureReason : 1; 
        unsigned int errorCode : 1; 
    }  _has;
    int  _serviceType;
    long long  _startLogicalTimestampInNs;
}

@property (nonatomic) long long endLogicalTimestampInNs;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) int failureReason;
@property (nonatomic) bool hasEndLogicalTimestampInNs;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasFailureReason;
@property (nonatomic) bool hasServiceType;
@property (nonatomic) bool hasStartLogicalTimestampInNs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int serviceType;
@property (nonatomic) long long startLogicalTimestampInNs;

- (void)deleteEndLogicalTimestampInNs;
- (void)deleteErrorCode;
- (void)deleteFailureReason;
- (void)deleteServiceType;
- (void)deleteStartLogicalTimestampInNs;
- (id)dictionaryRepresentation;
- (long long)endLogicalTimestampInNs;
- (unsigned int)errorCode;
- (int)failureReason;
- (bool)hasEndLogicalTimestampInNs;
- (bool)hasErrorCode;
- (bool)hasFailureReason;
- (bool)hasServiceType;
- (bool)hasStartLogicalTimestampInNs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)serviceType;
- (void)setEndLogicalTimestampInNs:(long long)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setFailureReason:(int)arg1;
- (void)setHasEndLogicalTimestampInNs:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasFailureReason:(bool)arg1;
- (void)setHasServiceType:(bool)arg1;
- (void)setHasStartLogicalTimestampInNs:(bool)arg1;
- (void)setServiceType:(int)arg1;
- (void)setStartLogicalTimestampInNs:(long long)arg1;
- (long long)startLogicalTimestampInNs;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
