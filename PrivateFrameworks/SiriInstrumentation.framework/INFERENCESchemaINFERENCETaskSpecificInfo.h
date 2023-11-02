
@interface INFERENCESchemaINFERENCETaskSpecificInfo : SISchemaInstrumentationMessage {
    bool  _hasLongRunningTaskInfo;
    INFERENCESchemaINFERENCELongRunningTaskInfo * _longRunningTaskInfo;
    unsigned long long  _whichTaskinfo;
}

@property (nonatomic) bool hasLongRunningTaskInfo;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) INFERENCESchemaINFERENCELongRunningTaskInfo *longRunningTaskInfo;
@property (nonatomic, readonly) unsigned long long whichTaskinfo;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteLongRunningTaskInfo;
- (id)dictionaryRepresentation;
- (bool)hasLongRunningTaskInfo;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)longRunningTaskInfo;
- (bool)readFrom:(id)arg1;
- (void)setHasLongRunningTaskInfo:(bool)arg1;
- (void)setLongRunningTaskInfo:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichTaskinfo;
- (void)writeTo:(id)arg1;

@end
