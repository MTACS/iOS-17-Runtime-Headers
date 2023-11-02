
@interface HALSchemaHALForceFetchFailed : SISchemaInstrumentationMessage {
    int  _failureReason;
    struct { 
        unsigned int failureReason : 1; 
    }  _has;
}

@property (nonatomic) int failureReason;
@property (nonatomic) bool hasFailureReason;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteFailureReason;
- (id)dictionaryRepresentation;
- (int)failureReason;
- (bool)hasFailureReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setFailureReason:(int)arg1;
- (void)setHasFailureReason:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
