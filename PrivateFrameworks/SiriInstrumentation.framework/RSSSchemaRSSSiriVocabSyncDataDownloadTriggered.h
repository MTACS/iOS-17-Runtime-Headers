
@interface RSSSchemaRSSSiriVocabSyncDataDownloadTriggered : SISchemaInstrumentationMessage {
    struct { 
        unsigned int trigger : 1; 
        unsigned int syncData : 1; 
    }  _has;
    int  _syncData;
    int  _trigger;
}

@property (nonatomic) bool hasSyncData;
@property (nonatomic) bool hasTrigger;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int syncData;
@property (nonatomic) int trigger;

- (void)deleteSyncData;
- (void)deleteTrigger;
- (id)dictionaryRepresentation;
- (bool)hasSyncData;
- (bool)hasTrigger;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSyncData:(bool)arg1;
- (void)setHasTrigger:(bool)arg1;
- (void)setSyncData:(int)arg1;
- (void)setTrigger:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)syncData;
- (int)trigger;
- (void)writeTo:(id)arg1;

@end
