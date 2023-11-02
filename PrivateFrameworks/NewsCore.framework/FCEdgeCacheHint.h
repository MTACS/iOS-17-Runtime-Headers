
@interface FCEdgeCacheHint : NSObject <NSCopying> {
    NSString * _cacheControlKey;
    NSString * _groupName;
}

@property (nonatomic, readonly, copy) NSString *cacheControlKey;
@property (nonatomic, readonly, copy) NSString *groupName;

+ (id)edgeCacheHintForAudioContent;
+ (id)edgeCacheHintForCurrentIssueArticles;
+ (id)edgeCacheHintForCurrentIssues;
+ (id)edgeCacheHintForEditorial;
+ (id)edgeCacheHintForEvergreenArticles;
+ (id)edgeCacheHintForFeaturedArticles;
+ (id)edgeCacheHintForForYouConfig;
+ (id)edgeCacheHintForLocalNews;
+ (id)edgeCacheHintForMagazineContent;
+ (id)edgeCacheHintForPurchaseLookup;
+ (id)edgeCacheHintForSportsArticles;
+ (id)edgeCacheHintForSpotlight;
+ (id)edgeCacheHintForToday;
+ (id)edgeCacheHintForTopStories;
+ (id)edgeCacheHintForTrending;

- (void).cxx_destruct;
- (id)cacheControlKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)groupName;
- (id)initWithGroupName:(id)arg1 cacheControlKey:(id)arg2;

@end
