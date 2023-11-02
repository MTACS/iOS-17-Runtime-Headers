
@interface WBSForYouTopicManager : NSObject {
    CKContextClient * _contextClient;
    WBSHistory * _history;
    WBSRecentHistoryTopicTagController * _historyTopicTagController;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSDate * _lastContextKitRequestDate;
    NSArray * _mostRecentUserVisibleTopics;
    PPNamedEntityStore * _namedEntityStore;
}

- (void).cxx_destruct;
- (void)_createInternalQueueIfNecessary;
- (void)contextKitTopicsWithCompletionHandler:(id /* block */)arg1;
- (id)initWithHistory:(id)arg1 contextClient:(id)arg2;
- (void)portraitNamedEntitiesWithCompletionHandler:(id /* block */)arg1;

@end
