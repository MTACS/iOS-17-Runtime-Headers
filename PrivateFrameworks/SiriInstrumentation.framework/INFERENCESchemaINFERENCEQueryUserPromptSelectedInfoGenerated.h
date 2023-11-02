
@interface INFERENCESchemaINFERENCEQueryUserPromptSelectedInfoGenerated : SISchemaInstrumentationMessage {
    NSString * _anonymizedSelectedEntityIdentifier;
    int  _confirmationResolution;
    int  _disambiguationResolution;
    bool  _hasAnonymizedSelectedEntityIdentifier;
    bool  _hasConfirmationResolution;
    bool  _hasDisambiguationResolution;
    bool  _hasOriginalResolutionContextId;
    bool  _hasQueryId;
    SISchemaUUID * _originalResolutionContextId;
    SISchemaUUID * _queryId;
    unsigned long long  _whichResolutiontype;
}

@property (nonatomic, copy) NSString *anonymizedSelectedEntityIdentifier;
@property (nonatomic) int confirmationResolution;
@property (nonatomic) int disambiguationResolution;
@property (nonatomic) bool hasAnonymizedSelectedEntityIdentifier;
@property (nonatomic) bool hasConfirmationResolution;
@property (nonatomic) bool hasDisambiguationResolution;
@property (nonatomic) bool hasOriginalResolutionContextId;
@property (nonatomic) bool hasQueryId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *originalResolutionContextId;
@property (nonatomic, retain) SISchemaUUID *queryId;
@property (nonatomic, readonly) unsigned long long whichResolutiontype;

- (void).cxx_destruct;
- (id)anonymizedSelectedEntityIdentifier;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)confirmationResolution;
- (void)deleteAnonymizedSelectedEntityIdentifier;
- (void)deleteConfirmationResolution;
- (void)deleteDisambiguationResolution;
- (void)deleteOriginalResolutionContextId;
- (void)deleteQueryId;
- (id)dictionaryRepresentation;
- (int)disambiguationResolution;
- (bool)hasAnonymizedSelectedEntityIdentifier;
- (bool)hasConfirmationResolution;
- (bool)hasDisambiguationResolution;
- (bool)hasOriginalResolutionContextId;
- (bool)hasQueryId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)originalResolutionContextId;
- (id)queryId;
- (bool)readFrom:(id)arg1;
- (void)setAnonymizedSelectedEntityIdentifier:(id)arg1;
- (void)setConfirmationResolution:(int)arg1;
- (void)setDisambiguationResolution:(int)arg1;
- (void)setHasAnonymizedSelectedEntityIdentifier:(bool)arg1;
- (void)setHasConfirmationResolution:(bool)arg1;
- (void)setHasDisambiguationResolution:(bool)arg1;
- (void)setHasOriginalResolutionContextId:(bool)arg1;
- (void)setHasQueryId:(bool)arg1;
- (void)setOriginalResolutionContextId:(id)arg1;
- (void)setQueryId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichResolutiontype;
- (void)writeTo:(id)arg1;

@end
