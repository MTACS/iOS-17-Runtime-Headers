
@interface PPFeedbackStorage : NSObject {
    PPLocalConnectionsStore * _connectionsStoreOverride;
    PPLocalContactStore * _contactStoreOverride;
    PPSQLDatabase * _db;
    PPLocalEventStore * _eventStoreOverride;
    PPLocalLocationStore * _locationStoreOverride;
    _PASLock * _lock;
    PPLocalNamedEntityStore * _namedEntityStoreOverride;
    PPLocalQuickTypeBroker * _quickTypeBrokerOverride;
    PPLocalTopicStore * _topicStoreOverride;
}

+ (void)logFeedback:(id)arg1 domain:(unsigned char)arg2 domainStatus:(unsigned char)arg3 inBackground:(bool)arg4;
+ (id)storeTypeDescription:(unsigned char)arg1;

- (void).cxx_destruct;
- (bool)deleteExpiredFeedbackWithShouldContinueBlock:(id /* block */)arg1;
- (id)init;
- (id)mappedTopicsPendingFeedbackWithShouldContinueBlock:(id /* block */)arg1;
- (id)pendingTopicFeedback;
- (bool)processPendingFeedbackWithShouldContinueBlock:(id /* block */)arg1 error:(id*)arg2;
- (bool)storePendingFeedback:(id)arg1 storeType:(unsigned char)arg2 error:(id*)arg3;

@end
