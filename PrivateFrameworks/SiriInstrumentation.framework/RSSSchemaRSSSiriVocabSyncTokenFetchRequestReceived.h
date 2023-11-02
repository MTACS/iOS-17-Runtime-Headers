
@interface RSSSchemaRSSSiriVocabSyncTokenFetchRequestReceived : SISchemaInstrumentationMessage {
    struct { 
        unsigned int syncTokenFetchRequestTransferLatencyInMs : 1; 
    }  _has;
    unsigned long long  _syncTokenFetchRequestTransferLatencyInMs;
}

@property (nonatomic) bool hasSyncTokenFetchRequestTransferLatencyInMs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long syncTokenFetchRequestTransferLatencyInMs;

- (void)deleteSyncTokenFetchRequestTransferLatencyInMs;
- (id)dictionaryRepresentation;
- (bool)hasSyncTokenFetchRequestTransferLatencyInMs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSyncTokenFetchRequestTransferLatencyInMs:(bool)arg1;
- (void)setSyncTokenFetchRequestTransferLatencyInMs:(unsigned long long)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)syncTokenFetchRequestTransferLatencyInMs;
- (void)writeTo:(id)arg1;

@end
