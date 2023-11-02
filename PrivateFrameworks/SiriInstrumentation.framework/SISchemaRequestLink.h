
@interface SISchemaRequestLink : SISchemaTopLevelUnionType {
    bool  _hasSource;
    bool  _hasTarget;
    SISchemaRequestLinkInfo * _source;
    SISchemaRequestLinkInfo * _target;
}

@property (nonatomic) bool hasSource;
@property (nonatomic) bool hasTarget;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaRequestLinkInfo *source;
@property (nonatomic, retain) SISchemaRequestLinkInfo *target;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteSource;
- (void)deleteTarget;
- (id)dictionaryRepresentation;
- (int)getAnyEventType;
- (bool)hasSource;
- (bool)hasTarget;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setHasTarget:(bool)arg1;
- (void)setSource:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)source;
- (id)suppressMessageUnderConditions;
- (id)target;
- (void)writeTo:(id)arg1;

@end
