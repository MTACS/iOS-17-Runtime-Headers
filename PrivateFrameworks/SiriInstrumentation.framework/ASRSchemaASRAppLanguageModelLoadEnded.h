
@interface ASRSchemaASRAppLanguageModelLoadEnded : SISchemaInstrumentationMessage {
    unsigned long long  _foregroundCheckTimeInNs;
    struct { 
        unsigned int loadTimeInNs : 1; 
        unsigned int foregroundCheckTimeInNs : 1; 
    }  _has;
    unsigned long long  _loadTimeInNs;
}

@property (nonatomic) unsigned long long foregroundCheckTimeInNs;
@property (nonatomic) bool hasForegroundCheckTimeInNs;
@property (nonatomic) bool hasLoadTimeInNs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long loadTimeInNs;

- (void)deleteForegroundCheckTimeInNs;
- (void)deleteLoadTimeInNs;
- (id)dictionaryRepresentation;
- (unsigned long long)foregroundCheckTimeInNs;
- (bool)hasForegroundCheckTimeInNs;
- (bool)hasLoadTimeInNs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned long long)loadTimeInNs;
- (bool)readFrom:(id)arg1;
- (void)setForegroundCheckTimeInNs:(unsigned long long)arg1;
- (void)setHasForegroundCheckTimeInNs:(bool)arg1;
- (void)setHasLoadTimeInNs:(bool)arg1;
- (void)setLoadTimeInNs:(unsigned long long)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
