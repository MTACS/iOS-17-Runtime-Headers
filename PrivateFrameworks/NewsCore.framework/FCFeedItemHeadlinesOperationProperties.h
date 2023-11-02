
@interface FCFeedItemHeadlinesOperationProperties : NSObject {
    FCMapTable * _feedItemScoreProfiles;
    FCMapTable * _resultHeadlinesByFeedItem;
}

@property (nonatomic, copy) FCMapTable *feedItemScoreProfiles;
@property (nonatomic, retain) FCMapTable *resultHeadlinesByFeedItem;

- (void)dealloc;
- (id)feedItemScoreProfiles;
- (id)resultHeadlinesByFeedItem;
- (void)setFeedItemScoreProfiles:(id)arg1;
- (void)setResultHeadlinesByFeedItem:(id)arg1;

@end
