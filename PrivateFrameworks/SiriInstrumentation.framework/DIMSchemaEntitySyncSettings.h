
@interface DIMSchemaEntitySyncSettings : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isMediaEntitySyncEnabled : 1; 
    }  _has;
    bool  _isMediaEntitySyncEnabled;
}

@property (nonatomic) bool hasIsMediaEntitySyncEnabled;
@property (nonatomic) bool isMediaEntitySyncEnabled;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteIsMediaEntitySyncEnabled;
- (id)dictionaryRepresentation;
- (bool)hasIsMediaEntitySyncEnabled;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMediaEntitySyncEnabled;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsMediaEntitySyncEnabled:(bool)arg1;
- (void)setIsMediaEntitySyncEnabled:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
