
@interface SISchemaAnyEvent : SISchemaInstrumentationMessage {
    int  _anyEventType;
    struct { 
        unsigned int anyEventType : 1; 
    }  _has;
    bool  _hasPayload;
    NSData * _payload;
}

@property (nonatomic) int anyEventType;
@property (nonatomic) bool hasAnyEventType;
@property (nonatomic) bool hasPayload;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSData *payload;

- (void).cxx_destruct;
- (int)anyEventType;
- (void)deleteAnyEventType;
- (void)deletePayload;
- (id)dictionaryRepresentation;
- (bool)hasAnyEventType;
- (bool)hasPayload;
- (unsigned long long)hash;
- (id)initWithAnyEventType:(int)arg1 payload:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)payload;
- (bool)readFrom:(id)arg1;
- (void)setAnyEventType:(int)arg1;
- (void)setHasAnyEventType:(bool)arg1;
- (void)setHasPayload:(bool)arg1;
- (void)setPayload:(id)arg1;
- (id)suppressMessageUnderConditions;
- (Class)topLevelUnionTypeClass;
- (id)unwrap;
- (void)unwrapMessageWithCompletion:(id /* block */)arg1;
- (void)willProduceDictionaryRepresentation:(id)arg1;
- (void)writeTo:(id)arg1;

@end
