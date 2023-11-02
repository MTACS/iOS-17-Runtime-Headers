
@interface ATXPBBiomeProactiveSuggestionUIFeedbackResult : PBCodable <NSCopying> {
    NSString * _blendingUICacheUpdateUUID;
    double  _clientModelCacheCreationDate;
    NSString * _clientModelId;
    NSString * _consumerSubType;
    NSMutableArray * _engagedSuggestions;
    struct { 
        unsigned int clientModelCacheCreationDate : 1; 
        unsigned int sessionEndDate : 1; 
        unsigned int sessionStartDate : 1; 
    }  _has;
    NSMutableArray * _rejectedSuggestions;
    double  _sessionEndDate;
    NSString * _sessionId;
    double  _sessionStartDate;
    NSMutableArray * _shownSuggestions;
}

@property (nonatomic, retain) NSString *blendingUICacheUpdateUUID;
@property (nonatomic) double clientModelCacheCreationDate;
@property (nonatomic, retain) NSString *clientModelId;
@property (nonatomic, retain) NSString *consumerSubType;
@property (nonatomic, retain) NSMutableArray *engagedSuggestions;
@property (nonatomic, readonly) bool hasBlendingUICacheUpdateUUID;
@property (nonatomic) bool hasClientModelCacheCreationDate;
@property (nonatomic, readonly) bool hasClientModelId;
@property (nonatomic, readonly) bool hasConsumerSubType;
@property (nonatomic) bool hasSessionEndDate;
@property (nonatomic, readonly) bool hasSessionId;
@property (nonatomic) bool hasSessionStartDate;
@property (nonatomic, retain) NSMutableArray *rejectedSuggestions;
@property (nonatomic) double sessionEndDate;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic) double sessionStartDate;
@property (nonatomic, retain) NSMutableArray *shownSuggestions;

+ (Class)engagedSuggestionsType;
+ (Class)rejectedSuggestionsType;
+ (Class)shownSuggestionsType;

- (void).cxx_destruct;
- (void)addEngagedSuggestions:(id)arg1;
- (void)addRejectedSuggestions:(id)arg1;
- (void)addShownSuggestions:(id)arg1;
- (id)blendingUICacheUpdateUUID;
- (void)clearEngagedSuggestions;
- (void)clearRejectedSuggestions;
- (void)clearShownSuggestions;
- (double)clientModelCacheCreationDate;
- (id)clientModelId;
- (id)consumerSubType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)engagedSuggestions;
- (id)engagedSuggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)engagedSuggestionsCount;
- (bool)hasBlendingUICacheUpdateUUID;
- (bool)hasClientModelCacheCreationDate;
- (bool)hasClientModelId;
- (bool)hasConsumerSubType;
- (bool)hasSessionEndDate;
- (bool)hasSessionId;
- (bool)hasSessionStartDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)rejectedSuggestions;
- (id)rejectedSuggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)rejectedSuggestionsCount;
- (double)sessionEndDate;
- (id)sessionId;
- (double)sessionStartDate;
- (void)setBlendingUICacheUpdateUUID:(id)arg1;
- (void)setClientModelCacheCreationDate:(double)arg1;
- (void)setClientModelId:(id)arg1;
- (void)setConsumerSubType:(id)arg1;
- (void)setEngagedSuggestions:(id)arg1;
- (void)setHasClientModelCacheCreationDate:(bool)arg1;
- (void)setHasSessionEndDate:(bool)arg1;
- (void)setHasSessionStartDate:(bool)arg1;
- (void)setRejectedSuggestions:(id)arg1;
- (void)setSessionEndDate:(double)arg1;
- (void)setSessionId:(id)arg1;
- (void)setSessionStartDate:(double)arg1;
- (void)setShownSuggestions:(id)arg1;
- (id)shownSuggestions;
- (id)shownSuggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)shownSuggestionsCount;
- (void)writeTo:(id)arg1;

@end
