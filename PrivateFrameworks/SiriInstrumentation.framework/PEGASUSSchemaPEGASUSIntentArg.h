
@interface PEGASUSSchemaPEGASUSIntentArg : SISchemaInstrumentationMessage {
    NSString * _attributeType;
    PEGASUSSchemaPEGASUSEntityInfo * _entity;
    bool  _hasAttributeType;
    bool  _hasEntity;
    bool  _hasKey;
    NSString * _key;
}

@property (nonatomic, copy) NSString *attributeType;
@property (nonatomic, retain) PEGASUSSchemaPEGASUSEntityInfo *entity;
@property (nonatomic) bool hasAttributeType;
@property (nonatomic) bool hasEntity;
@property (nonatomic) bool hasKey;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *key;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)attributeType;
- (void)deleteAttributeType;
- (void)deleteEntity;
- (void)deleteKey;
- (id)dictionaryRepresentation;
- (id)entity;
- (bool)hasAttributeType;
- (bool)hasEntity;
- (bool)hasKey;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)key;
- (bool)readFrom:(id)arg1;
- (void)setAttributeType:(id)arg1;
- (void)setEntity:(id)arg1;
- (void)setHasAttributeType:(bool)arg1;
- (void)setHasEntity:(bool)arg1;
- (void)setHasKey:(bool)arg1;
- (void)setKey:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
