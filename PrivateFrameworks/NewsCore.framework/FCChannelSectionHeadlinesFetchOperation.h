
@interface FCChannelSectionHeadlinesFetchOperation : FCOperation {
    <FCChannelProviding> * _channel;
    NSString * _channelID;
    FCCloudContext * _cloudContext;
    FCEdgeCacheHint * _edgeCacheHint;
    id /* block */  _fetchCompletionHandler;
    FCDateRange * _fetchWindow;
    unsigned long long  _maxHeadlinesCount;
    unsigned long long  _maxHeadlinesPerFeed;
    NSArray * _sectionHeadlinesGroups;
    double  _sectionsCacheTimeToLive;
}

@property (nonatomic, readonly) <FCChannelProviding> *channel;
@property (nonatomic, readonly) NSString *channelID;
@property (nonatomic, readonly) FCCloudContext *cloudContext;
@property (nonatomic, readonly) FCEdgeCacheHint *edgeCacheHint;
@property (copy) id /* block */ fetchCompletionHandler;
@property (nonatomic, readonly) FCDateRange *fetchWindow;
@property (nonatomic, readonly) unsigned long long maxHeadlinesCount;
@property (nonatomic, readonly) unsigned long long maxHeadlinesPerFeed;
@property (nonatomic, copy) NSArray *sectionHeadlinesGroups;
@property (nonatomic, readonly) double sectionsCacheTimeToLive;

- (void).cxx_destruct;
- (id)_channelAndSectionTagsPromiseWithChannelID:(id)arg1;
- (id)_channelPromiseWithTagsByID:(id)arg1 parentChannelID:(id)arg2;
- (id)_configurationPromise;
- (id)_createFeedRequestWithFeedID:(id)arg1 feedRange:(id)arg2;
- (id)_feedItemsPromiseWithChannel:(id)arg1 sectionsByID:(id)arg2 configuration:(id)arg3;
- (id)_feedItemsTransformationWithConfiguration:(id)arg1;
- (id)_headlinesAssembledBySectionFromFeedItemMap:(id)arg1 sectionIDsByFeedID:(id)arg2 sectionsByID:(id)arg3;
- (id)_headlinesPromiseWithFeedItems:(id)arg1 sectionsByID:(id)arg2 configuration:(id)arg3;
- (id)_sectionsPromiseWithTagsByID:(id)arg1 sectionIDs:(id)arg2;
- (id)channel;
- (id)channelID;
- (id)cloudContext;
- (id)edgeCacheHint;
- (id /* block */)fetchCompletionHandler;
- (id)fetchWindow;
- (id)init;
- (id)initWithCloudContext:(id)arg1 channelID:(id)arg2 maxHeadlinesCount:(unsigned long long)arg3 maxHeadlinesPerFeed:(unsigned long long)arg4 fetchWindow:(id)arg5 sectionsCacheTimeToLive:(double)arg6 edgeCacheHint:(id)arg7;
- (unsigned long long)maxHeadlinesCount;
- (unsigned long long)maxHeadlinesPerFeed;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)sectionHeadlinesGroups;
- (double)sectionsCacheTimeToLive;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (void)setSectionHeadlinesGroups:(id)arg1;
- (bool)validateOperation;

@end
