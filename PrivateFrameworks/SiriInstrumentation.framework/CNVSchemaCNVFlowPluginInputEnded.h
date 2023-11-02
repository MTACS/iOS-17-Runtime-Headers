
@interface CNVSchemaCNVFlowPluginInputEnded : SISchemaInstrumentationMessage {
    struct { 
        unsigned int hasTopicChanged : 1; 
    }  _has;
    bool  _hasTopicChanged;
}

@property (nonatomic) bool hasHasTopicChanged;
@property (nonatomic) bool hasTopicChanged;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteHasTopicChanged;
- (id)dictionaryRepresentation;
- (bool)hasHasTopicChanged;
- (bool)hasTopicChanged;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasHasTopicChanged:(bool)arg1;
- (void)setHasTopicChanged:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
