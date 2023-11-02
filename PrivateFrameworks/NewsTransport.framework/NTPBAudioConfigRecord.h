
@interface NTPBAudioConfigRecord : PBCodable <NSCopying> {
    NTPBRecordBase * _base;
    NSString * _configuration;
    NSString * _curatedArticleIDs;
    NSString * _dailyBriefingArticleID;
    NSString * _featuredAudioArticleListID;
    NSString * _feedConfiguration;
    NSMutableArray * _heroArticleIDs;
    NSString * _latestAudioArticleListID;
}

@property (nonatomic, retain) NTPBRecordBase *base;
@property (nonatomic, retain) NSString *configuration;
@property (nonatomic, retain) NSString *curatedArticleIDs;
@property (nonatomic, retain) NSString *dailyBriefingArticleID;
@property (nonatomic, retain) NSString *featuredAudioArticleListID;
@property (nonatomic, retain) NSString *feedConfiguration;
@property (nonatomic, readonly) bool hasBase;
@property (nonatomic, readonly) bool hasConfiguration;
@property (nonatomic, readonly) bool hasCuratedArticleIDs;
@property (nonatomic, readonly) bool hasDailyBriefingArticleID;
@property (nonatomic, readonly) bool hasFeaturedAudioArticleListID;
@property (nonatomic, readonly) bool hasFeedConfiguration;
@property (nonatomic, readonly) bool hasLatestAudioArticleListID;
@property (nonatomic, retain) NSMutableArray *heroArticleIDs;
@property (nonatomic, retain) NSString *latestAudioArticleListID;

+ (Class)heroArticleIDsType;

- (void)addHeroArticleIDs:(id)arg1;
- (id)base;
- (void)clearHeroArticleIDs;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)curatedArticleIDs;
- (id)dailyBriefingArticleID;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)featuredAudioArticleListID;
- (id)feedConfiguration;
- (bool)hasBase;
- (bool)hasConfiguration;
- (bool)hasCuratedArticleIDs;
- (bool)hasDailyBriefingArticleID;
- (bool)hasFeaturedAudioArticleListID;
- (bool)hasFeedConfiguration;
- (bool)hasLatestAudioArticleListID;
- (unsigned long long)hash;
- (id)heroArticleIDs;
- (id)heroArticleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)heroArticleIDsCount;
- (bool)isEqual:(id)arg1;
- (id)latestAudioArticleListID;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBase:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setCuratedArticleIDs:(id)arg1;
- (void)setDailyBriefingArticleID:(id)arg1;
- (void)setFeaturedAudioArticleListID:(id)arg1;
- (void)setFeedConfiguration:(id)arg1;
- (void)setHeroArticleIDs:(id)arg1;
- (void)setLatestAudioArticleListID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
