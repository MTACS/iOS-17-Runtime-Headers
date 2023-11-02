
@interface _DKKnowledgeStorageLogging : NSObject <_DKKnowledgeStorageEventNotificationDelegate> {
    NSObject<OS_dispatch_queue> * _notificationQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)knowledgeStorage:(id)arg1 didDeleteEventsWithStreamNameCounts:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didInsertEventsWithStreamNameCounts:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didInsertLocalEventsWithStreamNameCounts:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didTombstoneEventsWithStreamNameCounts:(id)arg2;

@end
