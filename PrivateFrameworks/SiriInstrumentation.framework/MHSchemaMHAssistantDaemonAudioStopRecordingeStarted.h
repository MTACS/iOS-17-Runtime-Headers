
@interface MHSchemaMHAssistantDaemonAudioStopRecordingeStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int stopReason : 1; 
    }  _has;
    int  _stopReason;
}

@property (nonatomic) bool hasStopReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int stopReason;

- (void)deleteStopReason;
- (id)dictionaryRepresentation;
- (bool)hasStopReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasStopReason:(bool)arg1;
- (void)setStopReason:(int)arg1;
- (int)stopReason;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
