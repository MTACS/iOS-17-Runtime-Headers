
@interface FLOWLINKSchemaFLOWLINKAutoShortcutTemplateUsed : SISchemaInstrumentationMessage {
    NSString * _autoshortcutTemplate;
    bool  _hasAutoshortcutTemplate;
}

@property (nonatomic, copy) NSString *autoshortcutTemplate;
@property (nonatomic) bool hasAutoshortcutTemplate;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)autoshortcutTemplate;
- (void)deleteAutoshortcutTemplate;
- (id)dictionaryRepresentation;
- (bool)hasAutoshortcutTemplate;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAutoshortcutTemplate:(id)arg1;
- (void)setHasAutoshortcutTemplate:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
