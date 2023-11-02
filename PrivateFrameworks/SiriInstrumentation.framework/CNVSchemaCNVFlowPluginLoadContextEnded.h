
@interface CNVSchemaCNVFlowPluginLoadContextEnded : SISchemaInstrumentationMessage {
    bool  _exists;
    struct { 
        unsigned int exists : 1; 
        unsigned int hasPluginCached : 1; 
    }  _has;
    bool  _hasPluginCached;
}

@property (nonatomic) bool exists;
@property (nonatomic) bool hasExists;
@property (nonatomic) bool hasHasPluginCached;
@property (nonatomic) bool hasPluginCached;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteExists;
- (void)deleteHasPluginCached;
- (id)dictionaryRepresentation;
- (bool)exists;
- (bool)hasExists;
- (bool)hasHasPluginCached;
- (bool)hasPluginCached;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setExists:(bool)arg1;
- (void)setHasExists:(bool)arg1;
- (void)setHasHasPluginCached:(bool)arg1;
- (void)setHasPluginCached:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
