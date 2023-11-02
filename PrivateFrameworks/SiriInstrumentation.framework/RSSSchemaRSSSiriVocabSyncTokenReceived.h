
@interface RSSSchemaRSSSiriVocabSyncTokenReceived : SISchemaInstrumentationMessage {
    struct { 
        unsigned int reason : 1; 
        unsigned int syncTokenTransferLatencyInMs : 1; 
    }  _has;
    int  _reason;
    unsigned long long  _syncTokenTransferLatencyInMs;
}

@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasSyncTokenTransferLatencyInMs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int reason;
@property (nonatomic) unsigned long long syncTokenTransferLatencyInMs;

- (void)deleteReason;
- (void)deleteSyncTokenTransferLatencyInMs;
- (id)dictionaryRepresentation;
- (bool)hasReason;
- (bool)hasSyncTokenTransferLatencyInMs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (void)setHasReason:(bool)arg1;
- (void)setHasSyncTokenTransferLatencyInMs:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)setSyncTokenTransferLatencyInMs:(unsigned long long)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)syncTokenTransferLatencyInMs;
- (void)writeTo:(id)arg1;

@end
