
@interface NTPBRecommendationProvider : PBCodable <NSCopying> {
    NSString * _providerId;
    NSMutableArray * _tagRecommendations;
}

@property (nonatomic, readonly) bool hasProviderId;
@property (nonatomic, retain) NSString *providerId;
@property (nonatomic, retain) NSMutableArray *tagRecommendations;

+ (Class)tagRecommendationsType;

- (void).cxx_destruct;
- (void)addTagRecommendations:(id)arg1;
- (void)clearTagRecommendations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProviderId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)providerId;
- (bool)readFrom:(id)arg1;
- (void)setProviderId:(id)arg1;
- (void)setTagRecommendations:(id)arg1;
- (id)tagRecommendations;
- (id)tagRecommendationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)tagRecommendationsCount;
- (void)writeTo:(id)arg1;

@end
