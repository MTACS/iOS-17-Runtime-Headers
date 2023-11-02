
@interface RSSSchemaRSSSiriVocabSyncCompanionSyncPluginSyncRequested : SISchemaInstrumentationMessage {
    struct { 
        unsigned int syncData : 1; 
    }  _has;
    int  _syncData;
}

@property (nonatomic) bool hasSyncData;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int syncData;

- (void)deleteSyncData;
- (id)dictionaryRepresentation;
- (bool)hasSyncData;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSyncData:(bool)arg1;
- (void)setSyncData:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)syncData;
- (void)writeTo:(id)arg1;

@end
