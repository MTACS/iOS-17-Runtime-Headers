
@interface ATXPBBlendingSessionClientModelUpdate : PBCodable <NSCopying> {
    NSString * _clientModelId;
    NSString * _clientModelVersion;
    NSMutableArray * _suggestions;
}

@property (nonatomic, retain) NSString *clientModelId;
@property (nonatomic, retain) NSString *clientModelVersion;
@property (nonatomic, readonly) bool hasClientModelId;
@property (nonatomic, readonly) bool hasClientModelVersion;
@property (nonatomic, retain) NSMutableArray *suggestions;

+ (Class)suggestionType;

- (void).cxx_destruct;
- (void)addSuggestion:(id)arg1;
- (void)clearSuggestions;
- (id)clientModelId;
- (id)clientModelVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientModelId;
- (bool)hasClientModelVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClientModelId:(id)arg1;
- (void)setClientModelVersion:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (id)suggestionAtIndex:(unsigned long long)arg1;
- (id)suggestions;
- (unsigned long long)suggestionsCount;
- (void)writeTo:(id)arg1;

@end
