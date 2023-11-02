
@interface SISchemaTurnInteraction : SISchemaInstrumentationMessage {
    bool  _hasInteractionId;
    NSString * _interactionId;
}

@property (nonatomic) bool hasInteractionId;
@property (nonatomic, copy) NSString *interactionId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)deleteInteractionId;
- (id)dictionaryRepresentation;
- (bool)hasInteractionId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)interactionId;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasInteractionId:(bool)arg1;
- (void)setInteractionId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
