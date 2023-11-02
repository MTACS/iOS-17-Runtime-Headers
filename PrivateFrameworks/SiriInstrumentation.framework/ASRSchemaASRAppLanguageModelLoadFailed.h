
@interface ASRSchemaASRAppLanguageModelLoadFailed : SISchemaInstrumentationMessage {
    unsigned long long  _foregroundCheckTimeInNs;
    struct { 
        unsigned int reason : 1; 
        unsigned int loadTimeInNs : 1; 
        unsigned int foregroundCheckTimeInNs : 1; 
    }  _has;
    unsigned long long  _loadTimeInNs;
    int  _reason;
}

@property (nonatomic) unsigned long long foregroundCheckTimeInNs;
@property (nonatomic) bool hasForegroundCheckTimeInNs;
@property (nonatomic) bool hasLoadTimeInNs;
@property (nonatomic) bool hasReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long loadTimeInNs;
@property (nonatomic) int reason;

- (void)deleteForegroundCheckTimeInNs;
- (void)deleteLoadTimeInNs;
- (void)deleteReason;
- (id)dictionaryRepresentation;
- (unsigned long long)foregroundCheckTimeInNs;
- (bool)hasForegroundCheckTimeInNs;
- (bool)hasLoadTimeInNs;
- (bool)hasReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned long long)loadTimeInNs;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (void)setForegroundCheckTimeInNs:(unsigned long long)arg1;
- (void)setHasForegroundCheckTimeInNs:(bool)arg1;
- (void)setHasLoadTimeInNs:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setLoadTimeInNs:(unsigned long long)arg1;
- (void)setReason:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
