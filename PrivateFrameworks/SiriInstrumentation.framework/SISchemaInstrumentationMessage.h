
@interface SISchemaInstrumentationMessage : PBCodable

- (id)_pruneSuppressedMessagesFromArray:(id)arg1 underConditions:(id)arg2;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)formattedJsonBody;
- (id)qualifiedMessageName;
- (bool)shouldSuppressMessageUnderConditions:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)unwrapMessageWithCompletion:(id /* block */)arg1;
- (void)willProduceDictionaryRepresentation:(id)arg1;

@end
