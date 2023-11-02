
@interface ATXPBBlendingSessionUICache : PBCodable <NSCopying> {
    NSString * _consumerSubType;
    NSMutableArray * _suggestions;
}

@property (nonatomic, retain) NSString *consumerSubType;
@property (nonatomic, readonly) bool hasConsumerSubType;
@property (nonatomic, retain) NSMutableArray *suggestions;

+ (Class)suggestionType;

- (void).cxx_destruct;
- (void)addSuggestion:(id)arg1;
- (void)clearSuggestions;
- (id)consumerSubType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConsumerSubType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConsumerSubType:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (id)suggestionAtIndex:(unsigned long long)arg1;
- (id)suggestions;
- (unsigned long long)suggestionsCount;
- (void)writeTo:(id)arg1;

@end
