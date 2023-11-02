
@interface ATXPBClientModelCacheUpdate : PBCodable <NSCopying> {
    double  _cacheCreationDate;
    NSString * _clientModelId;
    NSData * _feedbackMetadata;
    struct { 
        unsigned int cacheCreationDate : 1; 
    }  _has;
    ATXPBResponseForRequestForSuggestions * _responseForRequestForSuggestions;
    NSMutableArray * _suggestions;
    NSString * _uuidString;
}

@property (nonatomic) double cacheCreationDate;
@property (nonatomic, retain) NSString *clientModelId;
@property (nonatomic, retain) NSData *feedbackMetadata;
@property (nonatomic) bool hasCacheCreationDate;
@property (nonatomic, readonly) bool hasClientModelId;
@property (nonatomic, readonly) bool hasFeedbackMetadata;
@property (nonatomic, readonly) bool hasResponseForRequestForSuggestions;
@property (nonatomic, readonly) bool hasUuidString;
@property (nonatomic, retain) ATXPBResponseForRequestForSuggestions *responseForRequestForSuggestions;
@property (nonatomic, retain) NSMutableArray *suggestions;
@property (nonatomic, retain) NSString *uuidString;

+ (Class)suggestionsType;

- (void).cxx_destruct;
- (void)addSuggestions:(id)arg1;
- (double)cacheCreationDate;
- (void)clearSuggestions;
- (id)clientModelId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedbackMetadata;
- (bool)hasCacheCreationDate;
- (bool)hasClientModelId;
- (bool)hasFeedbackMetadata;
- (bool)hasResponseForRequestForSuggestions;
- (bool)hasUuidString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)responseForRequestForSuggestions;
- (void)setCacheCreationDate:(double)arg1;
- (void)setClientModelId:(id)arg1;
- (void)setFeedbackMetadata:(id)arg1;
- (void)setHasCacheCreationDate:(bool)arg1;
- (void)setResponseForRequestForSuggestions:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (void)setUuidString:(id)arg1;
- (id)suggestions;
- (id)suggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionsCount;
- (id)uuidString;
- (void)writeTo:(id)arg1;

@end
