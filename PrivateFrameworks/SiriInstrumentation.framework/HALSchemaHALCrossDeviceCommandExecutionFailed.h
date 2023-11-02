
@interface HALSchemaHALCrossDeviceCommandExecutionFailed : SISchemaInstrumentationMessage {
    int  _action;
    struct { 
        unsigned int reason : 1; 
        unsigned int action : 1; 
    }  _has;
    int  _reason;
}

@property (nonatomic) int action;
@property (nonatomic) bool hasAction;
@property (nonatomic) bool hasReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int reason;

- (int)action;
- (void)deleteAction;
- (void)deleteReason;
- (id)dictionaryRepresentation;
- (bool)hasAction;
- (bool)hasReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (void)setAction:(int)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setReason:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
