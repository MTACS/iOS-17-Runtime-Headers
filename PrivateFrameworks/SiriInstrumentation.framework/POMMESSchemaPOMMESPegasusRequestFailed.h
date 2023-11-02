
@interface POMMESSchemaPOMMESPegasusRequestFailed : SISchemaInstrumentationMessage {
    unsigned int  _errorCode;
    struct { 
        unsigned int reason : 1; 
        unsigned int errorCode : 1; 
    }  _has;
    bool  _hasRequestArguments;
    int  _reason;
    POMMESSchemaPOMMESPegasusRequestArguments * _requestArguments;
}

@property (nonatomic) unsigned int errorCode;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasRequestArguments;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int reason;
@property (nonatomic, retain) POMMESSchemaPOMMESPegasusRequestArguments *requestArguments;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteErrorCode;
- (void)deleteReason;
- (void)deleteRequestArguments;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (bool)hasErrorCode;
- (bool)hasReason;
- (bool)hasRequestArguments;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (id)requestArguments;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasRequestArguments:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)setRequestArguments:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
