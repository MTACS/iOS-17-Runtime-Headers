
@interface ATXMPBBlendingLayoutSelectionTracker : PBCodable <NSCopying> {
    NSString * _abGroup;
    NSString * _consumerSubType;
    NSString * _execuableTypeOfHighestRankingSuggestion;
    NSString * _highestConfidenceCategory;
    NSString * _highestRankingClientModelABGroup;
    NSString * _highestRankingClientModelId;
    NSString * _layoutType;
}

@property (nonatomic, retain) NSString *abGroup;
@property (nonatomic, retain) NSString *consumerSubType;
@property (nonatomic, retain) NSString *execuableTypeOfHighestRankingSuggestion;
@property (nonatomic, readonly) bool hasAbGroup;
@property (nonatomic, readonly) bool hasConsumerSubType;
@property (nonatomic, readonly) bool hasExecuableTypeOfHighestRankingSuggestion;
@property (nonatomic, readonly) bool hasHighestConfidenceCategory;
@property (nonatomic, readonly) bool hasHighestRankingClientModelABGroup;
@property (nonatomic, readonly) bool hasHighestRankingClientModelId;
@property (nonatomic, readonly) bool hasLayoutType;
@property (nonatomic, retain) NSString *highestConfidenceCategory;
@property (nonatomic, retain) NSString *highestRankingClientModelABGroup;
@property (nonatomic, retain) NSString *highestRankingClientModelId;
@property (nonatomic, retain) NSString *layoutType;

- (void).cxx_destruct;
- (id)abGroup;
- (id)consumerSubType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)execuableTypeOfHighestRankingSuggestion;
- (bool)hasAbGroup;
- (bool)hasConsumerSubType;
- (bool)hasExecuableTypeOfHighestRankingSuggestion;
- (bool)hasHighestConfidenceCategory;
- (bool)hasHighestRankingClientModelABGroup;
- (bool)hasHighestRankingClientModelId;
- (bool)hasLayoutType;
- (unsigned long long)hash;
- (id)highestConfidenceCategory;
- (id)highestRankingClientModelABGroup;
- (id)highestRankingClientModelId;
- (bool)isEqual:(id)arg1;
- (id)layoutType;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbGroup:(id)arg1;
- (void)setConsumerSubType:(id)arg1;
- (void)setExecuableTypeOfHighestRankingSuggestion:(id)arg1;
- (void)setHighestConfidenceCategory:(id)arg1;
- (void)setHighestRankingClientModelABGroup:(id)arg1;
- (void)setHighestRankingClientModelId:(id)arg1;
- (void)setLayoutType:(id)arg1;
- (void)writeTo:(id)arg1;

@end
