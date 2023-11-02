
@interface LRSchemaLRComponentIdentifierRedactionSignal : SISchemaInstrumentationMessage {
    SISchemaRequestLinkInfo * _componentId;
    struct { 
        unsigned int redactConnectedEvents : 1; 
    }  _has;
    bool  _hasComponentId;
    bool  _redactConnectedEvents;
}

@property (nonatomic, retain) SISchemaRequestLinkInfo *componentId;
@property (nonatomic) bool hasComponentId;
@property (nonatomic) bool hasRedactConnectedEvents;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool redactConnectedEvents;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)componentId;
- (void)deleteComponentId;
- (void)deleteRedactConnectedEvents;
- (id)dictionaryRepresentation;
- (bool)hasComponentId;
- (bool)hasRedactConnectedEvents;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (bool)redactConnectedEvents;
- (void)setComponentId:(id)arg1;
- (void)setHasComponentId:(bool)arg1;
- (void)setHasRedactConnectedEvents:(bool)arg1;
- (void)setRedactConnectedEvents:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
