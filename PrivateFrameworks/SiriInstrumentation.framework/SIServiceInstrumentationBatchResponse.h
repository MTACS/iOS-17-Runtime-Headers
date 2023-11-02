
@interface SIServiceInstrumentationBatchResponse : SISchemaInstrumentationMessage {
    NSData * _batch_id;
    struct { 
        unsigned int status_code : 1; 
    }  _has;
    bool  _hasBatch_id;
    bool  _hasMessage;
    NSString * _message;
    int  _status_code;
}

@property (nonatomic, copy) NSData *batch_id;
@property (nonatomic) bool hasBatch_id;
@property (nonatomic) bool hasMessage;
@property (nonatomic) bool hasStatus_code;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) int status_code;

- (void).cxx_destruct;
- (id)batch_id;
- (void)deleteBatch_id;
- (void)deleteMessage;
- (void)deleteStatus_code;
- (id)dictionaryRepresentation;
- (bool)hasBatch_id;
- (bool)hasMessage;
- (bool)hasStatus_code;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)message;
- (bool)readFrom:(id)arg1;
- (void)setBatch_id:(id)arg1;
- (void)setHasBatch_id:(bool)arg1;
- (void)setHasMessage:(bool)arg1;
- (void)setHasStatus_code:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setStatus_code:(int)arg1;
- (int)status_code;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
