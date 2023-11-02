
@interface SADSchemaSADUODAssetsPrepared : SISchemaInstrumentationMessage {
    unsigned int  _elapsedSeconds;
    struct { 
        unsigned int locale : 1; 
        unsigned int elapsedSeconds : 1; 
    }  _has;
    int  _locale;
}

@property (nonatomic) unsigned int elapsedSeconds;
@property (nonatomic) bool hasElapsedSeconds;
@property (nonatomic) bool hasLocale;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int locale;

- (void)deleteElapsedSeconds;
- (void)deleteLocale;
- (id)dictionaryRepresentation;
- (unsigned int)elapsedSeconds;
- (bool)hasElapsedSeconds;
- (bool)hasLocale;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)locale;
- (bool)readFrom:(id)arg1;
- (void)setElapsedSeconds:(unsigned int)arg1;
- (void)setHasElapsedSeconds:(bool)arg1;
- (void)setHasLocale:(bool)arg1;
- (void)setLocale:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
