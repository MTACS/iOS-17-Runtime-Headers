
@interface INFERENCESchemaINFERENCENotebookAppSelectionTrainingDependentSignals : SISchemaInstrumentationMessage {
    INFERENCESchemaINFERENCECommonAppDependentSignals * _commonDependent;
    bool  _hasCommonDependent;
}

@property (nonatomic, retain) INFERENCESchemaINFERENCECommonAppDependentSignals *commonDependent;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) bool hasCommonDependent;
@property (nonatomic, readonly) NSData *jsonData;

// Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)commonDependent;
- (void)deleteCommonDependent;
- (id)dictionaryRepresentation;
- (bool)hasCommonDependent;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCommonDependent:(id)arg1;
- (void)setHasCommonDependent:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriNotebook.framework/SiriNotebook

- (id)description;

@end
