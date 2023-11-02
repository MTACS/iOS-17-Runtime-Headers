
@interface INFERENCESchemaINFERENCEContactCandidatesInfoGenerated : SISchemaInstrumentationMessage {
    NSArray * _candidates;
    INFERENCESchemaINFERENCEContactQueryMetadata * _contactQueryMetadata;
    struct { 
        unsigned int ontologySource : 1; 
        unsigned int isEntityCandidateRetrievalEnabled : 1; 
    }  _has;
    bool  _hasContactQueryMetadata;
    bool  _hasOriginalResolutionContextId;
    bool  _hasQueryId;
    bool  _isEntityCandidateRetrievalEnabled;
    int  _ontologySource;
    SISchemaUUID * _originalResolutionContextId;
    SISchemaUUID * _queryId;
}

@property (nonatomic, copy) NSArray *candidates;
@property (nonatomic, retain) INFERENCESchemaINFERENCEContactQueryMetadata *contactQueryMetadata;
@property (nonatomic) bool hasContactQueryMetadata;
@property (nonatomic) bool hasIsEntityCandidateRetrievalEnabled;
@property (nonatomic) bool hasOntologySource;
@property (nonatomic) bool hasOriginalResolutionContextId;
@property (nonatomic) bool hasQueryId;
@property (nonatomic) bool isEntityCandidateRetrievalEnabled;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int ontologySource;
@property (nonatomic, retain) SISchemaUUID *originalResolutionContextId;
@property (nonatomic, retain) SISchemaUUID *queryId;

- (void).cxx_destruct;
- (void)addCandidates:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)candidates;
- (id)candidatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)candidatesCount;
- (void)clearCandidates;
- (id)contactQueryMetadata;
- (void)deleteCandidates;
- (void)deleteContactQueryMetadata;
- (void)deleteIsEntityCandidateRetrievalEnabled;
- (void)deleteOntologySource;
- (void)deleteOriginalResolutionContextId;
- (void)deleteQueryId;
- (id)dictionaryRepresentation;
- (bool)hasContactQueryMetadata;
- (bool)hasIsEntityCandidateRetrievalEnabled;
- (bool)hasOntologySource;
- (bool)hasOriginalResolutionContextId;
- (bool)hasQueryId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEntityCandidateRetrievalEnabled;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)ontologySource;
- (id)originalResolutionContextId;
- (id)queryId;
- (bool)readFrom:(id)arg1;
- (void)setCandidates:(id)arg1;
- (void)setContactQueryMetadata:(id)arg1;
- (void)setHasContactQueryMetadata:(bool)arg1;
- (void)setHasIsEntityCandidateRetrievalEnabled:(bool)arg1;
- (void)setHasOntologySource:(bool)arg1;
- (void)setHasOriginalResolutionContextId:(bool)arg1;
- (void)setHasQueryId:(bool)arg1;
- (void)setIsEntityCandidateRetrievalEnabled:(bool)arg1;
- (void)setOntologySource:(int)arg1;
- (void)setOriginalResolutionContextId:(id)arg1;
- (void)setQueryId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
