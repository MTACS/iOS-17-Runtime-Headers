
@interface FCForYouConfig : NSObject <NSCopying> {
    NSArray * _demoGroupConfigs;
    NSArray * _editorialGroupConfigs;
    NTPBForYouConfigRecord * _forYouConfigRecord;
    FCInterestToken * _interestToken;
    NSString * _moreVideosArticleListID;
    FCSpotlightGroupConfig * _spotlightGroupConfig;
    FCTopStoriesGroupConfig * _topStoriesGroupConfig;
    NSArray * _topVideosArticleIDs;
    FCGroupConfig * _trendingGroupConfig;
}

@property (nonatomic, readonly) NSArray *demoGroupConfigs;
@property (nonatomic, readonly) NSArray *editorialArticleListIDs;
@property (nonatomic, retain) NSArray *editorialGroupConfigs;
@property (nonatomic, readonly) NSArray *editorialSectionTagIDs;
@property (nonatomic, readonly) NSDate *fetchedDate;
@property (nonatomic, retain) NTPBForYouConfigRecord *forYouConfigRecord;
@property (nonatomic, retain) FCInterestToken *interestToken;
@property (nonatomic, readonly) NSString *moreVideosArticleListID;
@property (nonatomic, readonly) NSString *spotlightArticleID;
@property (nonatomic, retain) FCSpotlightGroupConfig *spotlightGroupConfig;
@property (nonatomic, readonly) NSArray *todayFeedTopStoriesArticleIDs;
@property (nonatomic, retain) FCTopStoriesGroupConfig *topStoriesGroupConfig;
@property (nonatomic, readonly) NSArray *topVideosArticleIDs;
@property (nonatomic, readonly) NSString *trendingArticleListID;
@property (nonatomic, retain) FCGroupConfig *trendingGroupConfig;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)demoGroupConfigs;
- (id)editorialArticleListIDs;
- (id)editorialGroupConfigs;
- (id)editorialSectionTagIDs;
- (id)fetchedDate;
- (id)forYouConfigRecord;
- (id)initWithRecord:(id)arg1 interestToken:(id)arg2;
- (id)interestToken;
- (id)moreVideosArticleListID;
- (void)setEditorialGroupConfigs:(id)arg1;
- (void)setForYouConfigRecord:(id)arg1;
- (void)setInterestToken:(id)arg1;
- (void)setSpotlightGroupConfig:(id)arg1;
- (void)setTopStoriesGroupConfig:(id)arg1;
- (void)setTrendingGroupConfig:(id)arg1;
- (id)spotlightArticleID;
- (id)spotlightGroupConfig;
- (id)todayFeedTopStoriesArticleIDs;
- (id)topStoriesGroupConfig;
- (id)topVideosArticleIDs;
- (id)trendingArticleListID;
- (id)trendingGroupConfig;

@end
