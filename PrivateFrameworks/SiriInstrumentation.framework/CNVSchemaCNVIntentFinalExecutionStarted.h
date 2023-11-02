
@interface CNVSchemaCNVIntentFinalExecutionStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int plugin : 1; 
        unsigned int stackDepth : 1; 
    }  _has;
    int  _plugin;
    unsigned int  _stackDepth;
}

@property (nonatomic) bool hasPlugin;
@property (nonatomic) bool hasStackDepth;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int plugin;
@property (nonatomic) unsigned int stackDepth;

- (void)deletePlugin;
- (void)deleteStackDepth;
- (id)dictionaryRepresentation;
- (bool)hasPlugin;
- (bool)hasStackDepth;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)plugin;
- (bool)readFrom:(id)arg1;
- (void)setHasPlugin:(bool)arg1;
- (void)setHasStackDepth:(bool)arg1;
- (void)setPlugin:(int)arg1;
- (void)setStackDepth:(unsigned int)arg1;
- (unsigned int)stackDepth;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
