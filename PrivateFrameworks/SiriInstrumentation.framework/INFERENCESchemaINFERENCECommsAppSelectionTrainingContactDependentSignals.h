
@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentSignals : SISchemaInstrumentationMessage {
    INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentMessageSignals * _contactDependentMessageSignals;
    INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentPhoneCallSignals * _contactDependentPhoneCallSignals;
    bool  _hasContactDependentMessageSignals;
    bool  _hasContactDependentPhoneCallSignals;
}

@property (nonatomic, retain) INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentMessageSignals *contactDependentMessageSignals;
@property (nonatomic, retain) INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentPhoneCallSignals *contactDependentPhoneCallSignals;
@property (nonatomic) bool hasContactDependentMessageSignals;
@property (nonatomic) bool hasContactDependentPhoneCallSignals;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)contactDependentMessageSignals;
- (id)contactDependentPhoneCallSignals;
- (void)deleteContactDependentMessageSignals;
- (void)deleteContactDependentPhoneCallSignals;
- (id)dictionaryRepresentation;
- (bool)hasContactDependentMessageSignals;
- (bool)hasContactDependentPhoneCallSignals;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setContactDependentMessageSignals:(id)arg1;
- (void)setContactDependentPhoneCallSignals:(id)arg1;
- (void)setHasContactDependentMessageSignals:(bool)arg1;
- (void)setHasContactDependentPhoneCallSignals:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
