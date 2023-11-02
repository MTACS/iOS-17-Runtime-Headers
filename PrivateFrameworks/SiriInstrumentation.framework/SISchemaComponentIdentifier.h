
@interface SISchemaComponentIdentifier : SISchemaInstrumentationMessage {
    int  _component;
    struct { 
        unsigned int component : 1; 
    }  _has;
    bool  _hasUuid;
    SISchemaUUID * _uuid;
}

@property (nonatomic) int component;
@property (nonatomic) bool hasComponent;
@property (nonatomic) bool hasUuid;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *uuid;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)component;
- (void)deleteComponent;
- (void)deleteUuid;
- (id)dictionaryRepresentation;
- (bool)hasComponent;
- (bool)hasUuid;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setComponent:(int)arg1;
- (void)setHasComponent:(bool)arg1;
- (void)setHasUuid:(bool)arg1;
- (void)setUuid:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
