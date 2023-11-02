
@interface INFERENCESchemaINFERENCEResolutionQueryInfoGenerated : SISchemaInstrumentationMessage {
    NSArray * _anonymizedRecommendedEntityIdentifiers;
    int  _forcePromptType;
    struct { 
        unsigned int resolutionState : 1; 
        unsigned int forcePromptType : 1; 
    }  _has;
    bool  _hasOriginalResolutionContextId;
    bool  _hasQueryId;
    bool  _hasRecommenderModelVersion;
    SISchemaUUID * _originalResolutionContextId;
    SISchemaUUID * _queryId;
    NSString * _recommenderModelVersion;
    int  _resolutionState;
}

@property (nonatomic, copy) NSArray *anonymizedRecommendedEntityIdentifiers;
@property (nonatomic) int forcePromptType;
@property (nonatomic) bool hasForcePromptType;
@property (nonatomic) bool hasOriginalResolutionContextId;
@property (nonatomic) bool hasQueryId;
@property (nonatomic) bool hasRecommenderModelVersion;
@property (nonatomic) bool hasResolutionState;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *originalResolutionContextId;
@property (nonatomic, retain) SISchemaUUID *queryId;
@property (nonatomic, copy) NSString *recommenderModelVersion;
@property (nonatomic) int resolutionState;

- (void).cxx_destruct;
- (void)addAnonymizedRecommendedEntityIdentifier:(id)arg1;
- (id)anonymizedRecommendedEntityIdentifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)anonymizedRecommendedEntityIdentifierCount;
- (id)anonymizedRecommendedEntityIdentifiers;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearAnonymizedRecommendedEntityIdentifier;
- (void)deleteAnonymizedRecommendedEntityIdentifier;
- (void)deleteForcePromptType;
- (void)deleteOriginalResolutionContextId;
- (void)deleteQueryId;
- (void)deleteRecommenderModelVersion;
- (void)deleteResolutionState;
- (id)dictionaryRepresentation;
- (int)forcePromptType;
- (bool)hasForcePromptType;
- (bool)hasOriginalResolutionContextId;
- (bool)hasQueryId;
- (bool)hasRecommenderModelVersion;
- (bool)hasResolutionState;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)originalResolutionContextId;
- (id)queryId;
- (bool)readFrom:(id)arg1;
- (id)recommenderModelVersion;
- (int)resolutionState;
- (void)setAnonymizedRecommendedEntityIdentifiers:(id)arg1;
- (void)setForcePromptType:(int)arg1;
- (void)setHasForcePromptType:(bool)arg1;
- (void)setHasOriginalResolutionContextId:(bool)arg1;
- (void)setHasQueryId:(bool)arg1;
- (void)setHasRecommenderModelVersion:(bool)arg1;
- (void)setHasResolutionState:(bool)arg1;
- (void)setOriginalResolutionContextId:(id)arg1;
- (void)setQueryId:(id)arg1;
- (void)setRecommenderModelVersion:(id)arg1;
- (void)setResolutionState:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
