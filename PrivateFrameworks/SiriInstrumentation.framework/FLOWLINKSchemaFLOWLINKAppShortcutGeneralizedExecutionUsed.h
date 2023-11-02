
@interface FLOWLINKSchemaFLOWLINKAppShortcutGeneralizedExecutionUsed : SISchemaInstrumentationMessage {
    NSString * _appShortcutId;
    bool  _hasAppShortcutId;
}

@property (nonatomic, copy) NSString *appShortcutId;
@property (nonatomic) bool hasAppShortcutId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)appShortcutId;
- (void)deleteAppShortcutId;
- (id)dictionaryRepresentation;
- (bool)hasAppShortcutId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAppShortcutId:(id)arg1;
- (void)setHasAppShortcutId:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
