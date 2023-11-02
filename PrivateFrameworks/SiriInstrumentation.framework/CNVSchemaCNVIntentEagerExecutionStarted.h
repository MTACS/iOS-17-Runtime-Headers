
@interface CNVSchemaCNVIntentEagerExecutionStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int plugin : 1; 
    }  _has;
    int  _plugin;
}

@property (nonatomic) bool hasPlugin;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int plugin;

- (void)deletePlugin;
- (id)dictionaryRepresentation;
- (bool)hasPlugin;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)plugin;
- (bool)readFrom:(id)arg1;
- (void)setHasPlugin:(bool)arg1;
- (void)setPlugin:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
