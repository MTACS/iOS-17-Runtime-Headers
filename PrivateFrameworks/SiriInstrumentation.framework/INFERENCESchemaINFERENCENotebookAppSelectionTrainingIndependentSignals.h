
@interface INFERENCESchemaINFERENCENotebookAppSelectionTrainingIndependentSignals : SISchemaInstrumentationMessage {
    INFERENCESchemaINFERENCECommonAppIndependentSignals * _commonIndependent;
    struct { 
        unsigned int isNotebookTitlePresent : 1; 
        unsigned int isNotebookPayloadPresent : 1; 
        unsigned int isNotebookGroupPresent : 1; 
    }  _has;
    bool  _hasCommonIndependent;
    bool  _isNotebookGroupPresent;
    bool  _isNotebookPayloadPresent;
    bool  _isNotebookTitlePresent;
}

@property (nonatomic, retain) INFERENCESchemaINFERENCECommonAppIndependentSignals *commonIndependent;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) bool hasCommonIndependent;
@property (nonatomic) bool hasIsNotebookGroupPresent;
@property (nonatomic) bool hasIsNotebookPayloadPresent;
@property (nonatomic) bool hasIsNotebookTitlePresent;
@property (nonatomic) bool isNotebookGroupPresent;
@property (nonatomic) bool isNotebookPayloadPresent;
@property (nonatomic) bool isNotebookTitlePresent;
@property (nonatomic, readonly) NSData *jsonData;

// Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)commonIndependent;
- (void)deleteCommonIndependent;
- (void)deleteIsNotebookGroupPresent;
- (void)deleteIsNotebookPayloadPresent;
- (void)deleteIsNotebookTitlePresent;
- (id)dictionaryRepresentation;
- (bool)hasCommonIndependent;
- (bool)hasIsNotebookGroupPresent;
- (bool)hasIsNotebookPayloadPresent;
- (bool)hasIsNotebookTitlePresent;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isNotebookGroupPresent;
- (bool)isNotebookPayloadPresent;
- (bool)isNotebookTitlePresent;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCommonIndependent:(id)arg1;
- (void)setHasCommonIndependent:(bool)arg1;
- (void)setHasIsNotebookGroupPresent:(bool)arg1;
- (void)setHasIsNotebookPayloadPresent:(bool)arg1;
- (void)setHasIsNotebookTitlePresent:(bool)arg1;
- (void)setIsNotebookGroupPresent:(bool)arg1;
- (void)setIsNotebookPayloadPresent:(bool)arg1;
- (void)setIsNotebookTitlePresent:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriNotebook.framework/SiriNotebook

- (id)description;

@end
