
@interface NTPBForYouConfigRecord : PBCodable <NSCopying> {
    NTPBRecordBase * _base;
    NSString * _configuration;
    NSMutableArray * _editorialArticleListIDs;
    NSMutableArray * _editorialSectionTagIDs;
    NSString * _spotlightArticleID;
    NSString * _todayFeedConfiguration;
    NSMutableArray * _todayFeedTopStoriesArticleIDs;
    NSString * _trendingArticleListID;
}

@property (nonatomic, retain) NTPBRecordBase *base;
@property (nonatomic, retain) NSString *configuration;
@property (nonatomic, retain) NSMutableArray *editorialArticleListIDs;
@property (nonatomic, retain) NSMutableArray *editorialSectionTagIDs;
@property (nonatomic, readonly) bool hasBase;
@property (nonatomic, readonly) bool hasConfiguration;
@property (nonatomic, readonly) bool hasSpotlightArticleID;
@property (nonatomic, readonly) bool hasTodayFeedConfiguration;
@property (nonatomic, readonly) bool hasTrendingArticleListID;
@property (nonatomic, retain) NSString *spotlightArticleID;
@property (nonatomic, retain) NSString *todayFeedConfiguration;
@property (nonatomic, retain) NSMutableArray *todayFeedTopStoriesArticleIDs;
@property (nonatomic, retain) NSString *trendingArticleListID;

+ (Class)editorialArticleListIDsType;
+ (Class)editorialSectionTagIDsType;
+ (Class)todayFeedTopStoriesArticleIDsType;

- (void)addEditorialArticleListIDs:(id)arg1;
- (void)addEditorialSectionTagIDs:(id)arg1;
- (void)addTodayFeedTopStoriesArticleIDs:(id)arg1;
- (id)base;
- (void)clearEditorialArticleListIDs;
- (void)clearEditorialSectionTagIDs;
- (void)clearTodayFeedTopStoriesArticleIDs;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)editorialArticleListIDs;
- (id)editorialArticleListIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)editorialArticleListIDsCount;
- (id)editorialSectionTagIDs;
- (id)editorialSectionTagIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)editorialSectionTagIDsCount;
- (bool)hasBase;
- (bool)hasConfiguration;
- (bool)hasSpotlightArticleID;
- (bool)hasTodayFeedConfiguration;
- (bool)hasTrendingArticleListID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBase:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setEditorialArticleListIDs:(id)arg1;
- (void)setEditorialSectionTagIDs:(id)arg1;
- (void)setSpotlightArticleID:(id)arg1;
- (void)setTodayFeedConfiguration:(id)arg1;
- (void)setTodayFeedTopStoriesArticleIDs:(id)arg1;
- (void)setTrendingArticleListID:(id)arg1;
- (id)spotlightArticleID;
- (id)todayFeedConfiguration;
- (id)todayFeedTopStoriesArticleIDs;
- (id)todayFeedTopStoriesArticleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)todayFeedTopStoriesArticleIDsCount;
- (id)trendingArticleListID;
- (void)writeTo:(id)arg1;

@end
