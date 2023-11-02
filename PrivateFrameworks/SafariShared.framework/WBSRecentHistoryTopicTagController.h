
@interface WBSRecentHistoryTopicTagController : NSObject {
    WBSHistory * _history;
    unsigned long long  _maximumNumberOfTopics;
    double  _timeIntervalBeforeNowForFetchingTags;
}

@property (nonatomic) unsigned long long maximumNumberOfTopics;
@property (nonatomic) double timeIntervalBeforeNowForFetchingTags;

- (void).cxx_destruct;
- (id)initWithHistory:(id)arg1;
- (void)loadTopicsWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)maximumNumberOfTopics;
- (void)setMaximumNumberOfTopics:(unsigned long long)arg1;
- (void)setTimeIntervalBeforeNowForFetchingTags:(double)arg1;
- (double)timeIntervalBeforeNowForFetchingTags;

@end
