
@interface LRSchemaLRPreprocessorInfo : SISchemaInstrumentationMessage {
    bool  _bootSessionUUIDChanged;
    struct { 
        unsigned int preProcessorTriggerTimeNanosecondsSinceBoot : 1; 
        unsigned int bootSessionUUIDChanged : 1; 
        unsigned int preProcessorTriggerReason : 1; 
    }  _has;
    int  _preProcessorTriggerReason;
    unsigned long long  _preProcessorTriggerTimeNanosecondsSinceBoot;
}

@property (nonatomic) bool bootSessionUUIDChanged;
@property (nonatomic) bool hasBootSessionUUIDChanged;
@property (nonatomic) bool hasPreProcessorTriggerReason;
@property (nonatomic) bool hasPreProcessorTriggerTimeNanosecondsSinceBoot;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int preProcessorTriggerReason;
@property (nonatomic) unsigned long long preProcessorTriggerTimeNanosecondsSinceBoot;

- (bool)bootSessionUUIDChanged;
- (void)deleteBootSessionUUIDChanged;
- (void)deletePreProcessorTriggerReason;
- (void)deletePreProcessorTriggerTimeNanosecondsSinceBoot;
- (id)dictionaryRepresentation;
- (bool)hasBootSessionUUIDChanged;
- (bool)hasPreProcessorTriggerReason;
- (bool)hasPreProcessorTriggerTimeNanosecondsSinceBoot;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)preProcessorTriggerReason;
- (unsigned long long)preProcessorTriggerTimeNanosecondsSinceBoot;
- (bool)readFrom:(id)arg1;
- (void)setBootSessionUUIDChanged:(bool)arg1;
- (void)setHasBootSessionUUIDChanged:(bool)arg1;
- (void)setHasPreProcessorTriggerReason:(bool)arg1;
- (void)setHasPreProcessorTriggerTimeNanosecondsSinceBoot:(bool)arg1;
- (void)setPreProcessorTriggerReason:(int)arg1;
- (void)setPreProcessorTriggerTimeNanosecondsSinceBoot:(unsigned long long)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
