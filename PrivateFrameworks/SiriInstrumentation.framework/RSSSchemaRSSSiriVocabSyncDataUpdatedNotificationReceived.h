
@interface RSSSchemaRSSSiriVocabSyncDataUpdatedNotificationReceived : SISchemaInstrumentationMessage {
    struct { 
        unsigned int syncDataUpdateNotificationLatencyInMs : 1; 
    }  _has;
    unsigned long long  _syncDataUpdateNotificationLatencyInMs;
}

@property (nonatomic) bool hasSyncDataUpdateNotificationLatencyInMs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long syncDataUpdateNotificationLatencyInMs;

- (void)deleteSyncDataUpdateNotificationLatencyInMs;
- (id)dictionaryRepresentation;
- (bool)hasSyncDataUpdateNotificationLatencyInMs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSyncDataUpdateNotificationLatencyInMs:(bool)arg1;
- (void)setSyncDataUpdateNotificationLatencyInMs:(unsigned long long)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)syncDataUpdateNotificationLatencyInMs;
- (void)writeTo:(id)arg1;

@end
