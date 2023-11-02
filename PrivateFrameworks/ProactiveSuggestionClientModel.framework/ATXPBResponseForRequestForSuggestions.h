
@interface ATXPBResponseForRequestForSuggestions : PBCodable <NSCopying> {
    ATXPBRequestForContextualActionSuggestions * _contextualActionSuggestionRequest;
    NSData * _errorData;
    NSData * _feedbackMetadata;
    struct { 
        unsigned int responseCode : 1; 
    }  _has;
    ATXPBRequestForIntentSuggestions * _intentSuggestionRequest;
    ATXPBRequestForInteractionSuggestions * _interactionSuggestionRequest;
    int  _responseCode;
    NSMutableArray * _suggestions;
    NSString * _uuidString;
}

@property (nonatomic, retain) ATXPBRequestForContextualActionSuggestions *contextualActionSuggestionRequest;
@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, retain) NSData *feedbackMetadata;
@property (nonatomic, readonly) bool hasContextualActionSuggestionRequest;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic, readonly) bool hasFeedbackMetadata;
@property (nonatomic, readonly) bool hasIntentSuggestionRequest;
@property (nonatomic, readonly) bool hasInteractionSuggestionRequest;
@property (nonatomic) bool hasResponseCode;
@property (nonatomic, readonly) bool hasUuidString;
@property (nonatomic, retain) ATXPBRequestForIntentSuggestions *intentSuggestionRequest;
@property (nonatomic, retain) ATXPBRequestForInteractionSuggestions *interactionSuggestionRequest;
@property (nonatomic) int responseCode;
@property (nonatomic, retain) NSMutableArray *suggestions;
@property (nonatomic, retain) NSString *uuidString;

+ (Class)suggestionsType;

- (void).cxx_destruct;
- (int)StringAsResponseCode:(id)arg1;
- (void)addSuggestions:(id)arg1;
- (void)clearSuggestions;
- (id)contextualActionSuggestionRequest;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (id)feedbackMetadata;
- (bool)hasContextualActionSuggestionRequest;
- (bool)hasErrorData;
- (bool)hasFeedbackMetadata;
- (bool)hasIntentSuggestionRequest;
- (bool)hasInteractionSuggestionRequest;
- (bool)hasResponseCode;
- (bool)hasUuidString;
- (unsigned long long)hash;
- (id)intentSuggestionRequest;
- (id)interactionSuggestionRequest;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)responseCode;
- (id)responseCodeAsString:(int)arg1;
- (void)setContextualActionSuggestionRequest:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setFeedbackMetadata:(id)arg1;
- (void)setHasResponseCode:(bool)arg1;
- (void)setIntentSuggestionRequest:(id)arg1;
- (void)setInteractionSuggestionRequest:(id)arg1;
- (void)setResponseCode:(int)arg1;
- (void)setSuggestions:(id)arg1;
- (void)setUuidString:(id)arg1;
- (id)suggestions;
- (id)suggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionsCount;
- (id)uuidString;
- (void)writeTo:(id)arg1;

@end
