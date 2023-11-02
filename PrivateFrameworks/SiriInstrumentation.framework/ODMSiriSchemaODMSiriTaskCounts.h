
@interface ODMSiriSchemaODMSiriTaskCounts : SISchemaInstrumentationMessage {
    unsigned int  _cancelledSiriTaskCount;
    unsigned int  _completedSiriTaskCount;
    unsigned int  _completedUITaskCount;
    unsigned int  _failedSiriTaskCount;
    struct { 
        unsigned int completedSiriTaskCount : 1; 
        unsigned int failedSiriTaskCount : 1; 
        unsigned int cancelledSiriTaskCount : 1; 
        unsigned int completedUITaskCount : 1; 
    }  _has;
}

@property (nonatomic) unsigned int cancelledSiriTaskCount;
@property (nonatomic) unsigned int completedSiriTaskCount;
@property (nonatomic) unsigned int completedUITaskCount;
@property (nonatomic) unsigned int failedSiriTaskCount;
@property (nonatomic) bool hasCancelledSiriTaskCount;
@property (nonatomic) bool hasCompletedSiriTaskCount;
@property (nonatomic) bool hasCompletedUITaskCount;
@property (nonatomic) bool hasFailedSiriTaskCount;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned int)cancelledSiriTaskCount;
- (unsigned int)completedSiriTaskCount;
- (unsigned int)completedUITaskCount;
- (void)deleteCancelledSiriTaskCount;
- (void)deleteCompletedSiriTaskCount;
- (void)deleteCompletedUITaskCount;
- (void)deleteFailedSiriTaskCount;
- (id)dictionaryRepresentation;
- (unsigned int)failedSiriTaskCount;
- (bool)hasCancelledSiriTaskCount;
- (bool)hasCompletedSiriTaskCount;
- (bool)hasCompletedUITaskCount;
- (bool)hasFailedSiriTaskCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCancelledSiriTaskCount:(unsigned int)arg1;
- (void)setCompletedSiriTaskCount:(unsigned int)arg1;
- (void)setCompletedUITaskCount:(unsigned int)arg1;
- (void)setFailedSiriTaskCount:(unsigned int)arg1;
- (void)setHasCancelledSiriTaskCount:(bool)arg1;
- (void)setHasCompletedSiriTaskCount:(bool)arg1;
- (void)setHasCompletedUITaskCount:(bool)arg1;
- (void)setHasFailedSiriTaskCount:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
