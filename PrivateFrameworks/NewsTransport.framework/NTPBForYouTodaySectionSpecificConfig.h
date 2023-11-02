
@interface NTPBForYouTodaySectionSpecificConfig : PBCodable <NSCopying> {
    unsigned long long  _cutoffTime;
    int  _fetchingBin;
    struct { 
        unsigned int cutoffTime : 1; 
        unsigned int headlinesPerFeedFetchCount : 1; 
        unsigned int localNewsPromotionIndex : 1; 
        unsigned int minimumUpdateInterval : 1; 
        unsigned int subscriptionsFetchCount : 1; 
        unsigned int fetchingBin : 1; 
    }  _has;
    unsigned long long  _headlinesPerFeedFetchCount;
    NTPBTodaySectionConfigArticle * _localNewsPromotedArticle;
    unsigned long long  _localNewsPromotionIndex;
    unsigned long long  _minimumUpdateInterval;
    unsigned long long  _subscriptionsFetchCount;
}

@property (nonatomic) unsigned long long cutoffTime;
@property (nonatomic) int fetchingBin;
@property (nonatomic) bool hasCutoffTime;
@property (nonatomic) bool hasFetchingBin;
@property (nonatomic) bool hasHeadlinesPerFeedFetchCount;
@property (nonatomic, readonly) bool hasLocalNewsPromotedArticle;
@property (nonatomic) bool hasLocalNewsPromotionIndex;
@property (nonatomic) bool hasMinimumUpdateInterval;
@property (nonatomic) bool hasSubscriptionsFetchCount;
@property (nonatomic) unsigned long long headlinesPerFeedFetchCount;
@property (nonatomic, retain) NTPBTodaySectionConfigArticle *localNewsPromotedArticle;
@property (nonatomic) unsigned long long localNewsPromotionIndex;
@property (nonatomic) unsigned long long minimumUpdateInterval;
@property (nonatomic) unsigned long long subscriptionsFetchCount;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)cutoffTime;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)fetchingBin;
- (bool)hasCutoffTime;
- (bool)hasFetchingBin;
- (bool)hasHeadlinesPerFeedFetchCount;
- (bool)hasLocalNewsPromotedArticle;
- (bool)hasLocalNewsPromotionIndex;
- (bool)hasMinimumUpdateInterval;
- (bool)hasSubscriptionsFetchCount;
- (unsigned long long)hash;
- (unsigned long long)headlinesPerFeedFetchCount;
- (bool)isEqual:(id)arg1;
- (id)localNewsPromotedArticle;
- (unsigned long long)localNewsPromotionIndex;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)minimumUpdateInterval;
- (bool)readFrom:(id)arg1;
- (void)setCutoffTime:(unsigned long long)arg1;
- (void)setFetchingBin:(int)arg1;
- (void)setHasCutoffTime:(bool)arg1;
- (void)setHasFetchingBin:(bool)arg1;
- (void)setHasHeadlinesPerFeedFetchCount:(bool)arg1;
- (void)setHasLocalNewsPromotionIndex:(bool)arg1;
- (void)setHasMinimumUpdateInterval:(bool)arg1;
- (void)setHasSubscriptionsFetchCount:(bool)arg1;
- (void)setHeadlinesPerFeedFetchCount:(unsigned long long)arg1;
- (void)setLocalNewsPromotedArticle:(id)arg1;
- (void)setLocalNewsPromotionIndex:(unsigned long long)arg1;
- (void)setMinimumUpdateInterval:(unsigned long long)arg1;
- (void)setSubscriptionsFetchCount:(unsigned long long)arg1;
- (unsigned long long)subscriptionsFetchCount;
- (void)writeTo:(id)arg1;

@end
