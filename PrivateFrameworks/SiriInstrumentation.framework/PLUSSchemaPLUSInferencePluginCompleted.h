
@interface PLUSSchemaPLUSInferencePluginCompleted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int numberOfConversationsReviewed : 1; 
        unsigned int numberOfGroundTruthsGenerated : 1; 
        unsigned int numberOfContactSuggestionsGenerated : 1; 
        unsigned int numberOfContactSuggestionsUpdated : 1; 
        unsigned int numberOfContactSuggestionsRemoved : 1; 
        unsigned int numberOfTurnsReviewed : 1; 
    }  _has;
    unsigned int  _numberOfContactSuggestionsGenerated;
    unsigned int  _numberOfContactSuggestionsRemoved;
    unsigned int  _numberOfContactSuggestionsUpdated;
    unsigned int  _numberOfConversationsReviewed;
    unsigned int  _numberOfGroundTruthsGenerated;
    unsigned int  _numberOfTurnsReviewed;
}

@property (nonatomic) bool hasNumberOfContactSuggestionsGenerated;
@property (nonatomic) bool hasNumberOfContactSuggestionsRemoved;
@property (nonatomic) bool hasNumberOfContactSuggestionsUpdated;
@property (nonatomic) bool hasNumberOfConversationsReviewed;
@property (nonatomic) bool hasNumberOfGroundTruthsGenerated;
@property (nonatomic) bool hasNumberOfTurnsReviewed;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int numberOfContactSuggestionsGenerated;
@property (nonatomic) unsigned int numberOfContactSuggestionsRemoved;
@property (nonatomic) unsigned int numberOfContactSuggestionsUpdated;
@property (nonatomic) unsigned int numberOfConversationsReviewed;
@property (nonatomic) unsigned int numberOfGroundTruthsGenerated;
@property (nonatomic) unsigned int numberOfTurnsReviewed;

- (void)deleteNumberOfContactSuggestionsGenerated;
- (void)deleteNumberOfContactSuggestionsRemoved;
- (void)deleteNumberOfContactSuggestionsUpdated;
- (void)deleteNumberOfConversationsReviewed;
- (void)deleteNumberOfGroundTruthsGenerated;
- (void)deleteNumberOfTurnsReviewed;
- (id)dictionaryRepresentation;
- (bool)hasNumberOfContactSuggestionsGenerated;
- (bool)hasNumberOfContactSuggestionsRemoved;
- (bool)hasNumberOfContactSuggestionsUpdated;
- (bool)hasNumberOfConversationsReviewed;
- (bool)hasNumberOfGroundTruthsGenerated;
- (bool)hasNumberOfTurnsReviewed;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)numberOfContactSuggestionsGenerated;
- (unsigned int)numberOfContactSuggestionsRemoved;
- (unsigned int)numberOfContactSuggestionsUpdated;
- (unsigned int)numberOfConversationsReviewed;
- (unsigned int)numberOfGroundTruthsGenerated;
- (unsigned int)numberOfTurnsReviewed;
- (bool)readFrom:(id)arg1;
- (void)setHasNumberOfContactSuggestionsGenerated:(bool)arg1;
- (void)setHasNumberOfContactSuggestionsRemoved:(bool)arg1;
- (void)setHasNumberOfContactSuggestionsUpdated:(bool)arg1;
- (void)setHasNumberOfConversationsReviewed:(bool)arg1;
- (void)setHasNumberOfGroundTruthsGenerated:(bool)arg1;
- (void)setHasNumberOfTurnsReviewed:(bool)arg1;
- (void)setNumberOfContactSuggestionsGenerated:(unsigned int)arg1;
- (void)setNumberOfContactSuggestionsRemoved:(unsigned int)arg1;
- (void)setNumberOfContactSuggestionsUpdated:(unsigned int)arg1;
- (void)setNumberOfConversationsReviewed:(unsigned int)arg1;
- (void)setNumberOfGroundTruthsGenerated:(unsigned int)arg1;
- (void)setNumberOfTurnsReviewed:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
