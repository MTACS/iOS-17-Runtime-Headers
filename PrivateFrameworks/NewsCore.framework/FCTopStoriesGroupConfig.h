
@interface FCTopStoriesGroupConfig : FCGroupConfig {
    NSArray * _mandatoryArticleIDPairs;
    NSArray * _optionalArticleIDs;
    NSDate * _publishDate;
    NSDictionary * _topStoriesMetadataByArticleID;
}

@property (nonatomic, readonly) NSArray *mandatoryArticleIDPairs;
@property (nonatomic, readonly) NSArray *optionalArticleIDs;
@property (nonatomic, readonly) NSDate *publishDate;
@property (nonatomic, retain) NSDictionary *topStoriesMetadataByArticleID;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)mandatoryArticleIDPairs;
- (id)optionalArticleIDs;
- (id)publishDate;
- (void)setTopStoriesMetadataByArticleID:(id)arg1;
- (id)topStoriesMetadataByArticleID;

@end
