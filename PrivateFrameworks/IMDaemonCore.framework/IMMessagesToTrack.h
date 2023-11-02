
@interface IMMessagesToTrack : NSObject {
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableOrderedSet * _recentMessageIDs;
}

@property (nonatomic, readonly) unsigned long long currentNumberOfMessages;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, readonly) unsigned long long maxNumberOfMessages;
@property (nonatomic, retain) NSMutableOrderedSet *recentMessageIDs;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addMessagesID:(id)arg1;
- (void)containsMessageID:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)currentNumberOfMessages;
- (id)init;
- (id)internalQueue;
- (unsigned long long)maxNumberOfMessages;
- (id)recentMessageIDs;
- (void)setInternalQueue:(id)arg1;
- (void)setRecentMessageIDs:(id)arg1;

@end
