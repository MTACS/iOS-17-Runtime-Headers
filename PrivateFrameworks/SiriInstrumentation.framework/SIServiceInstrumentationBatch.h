
@interface SIServiceInstrumentationBatch : SISchemaInstrumentationMessage {
    NSString * _app_id;
    SIServiceBatchInfo * _batch_info;
    NSArray * _events;
    bool  _hasApp_id;
    bool  _hasBatch_info;
}

@property (nonatomic, copy) NSString *app_id;
@property (nonatomic, retain) SIServiceBatchInfo *batch_info;
@property (nonatomic, copy) NSArray *events;
@property (nonatomic) bool hasApp_id;
@property (nonatomic) bool hasBatch_info;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addEvent:(id)arg1;
- (id)app_id;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)batch_info;
- (void)clearEvent;
- (void)deleteApp_id;
- (void)deleteBatch_info;
- (void)deleteEvent;
- (id)dictionaryRepresentation;
- (id)eventAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventCount;
- (id)events;
- (bool)hasApp_id;
- (bool)hasBatch_info;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setApp_id:(id)arg1;
- (void)setBatch_info:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)setHasApp_id:(bool)arg1;
- (void)setHasBatch_info:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
