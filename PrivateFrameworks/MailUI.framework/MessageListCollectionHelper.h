
@interface MessageListCollectionHelper : NSObject <EFLoggable> {
    NSObject<OS_os_log> * _clientLog;
    long long  _destructiveActionConversationID;
    NSMutableDictionary * _pendingReadTimeoutCancelables;
    EMObjectID * _sectionObjectID;
    NSObject<OS_dispatch_queue> * _updateQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  pendingReadCancelableLock;
}

@property (nonatomic, retain) NSObject<OS_os_log> *clientLog;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long destructiveActionConversationID;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *pendingReadTimeoutCancelables;
@property (nonatomic, readonly) EMObjectID *sectionObjectID;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *updateQueue;

+ (id)log;

- (void).cxx_destruct;
- (long long)addItemIDs:(id)arg1 after:(id)arg2 snapshot:(id)arg3 section:(id)arg4 validateOtherSections:(bool)arg5;
- (long long)addItemIDs:(id)arg1 before:(id)arg2 snapshot:(id)arg3 section:(id)arg4 validateOtherSections:(bool)arg5;
- (id)changeItemIDs:(id)arg1 snapshot:(id)arg2;
- (id)clientLog;
- (long long)destructiveActionConversationID;
- (void)didScheduleReadInteractionForItemID:(id)arg1;
- (id)initWithLog:(id)arg1 updateQueueName:(id)arg2 sectionObjectID:(id)arg3;
- (id)initWithLoggableClient:(id)arg1 updateQueueName:(id)arg2 sectionObjectID:(id)arg3;
- (long long)moveItemID:(id)arg1 after:(id)arg2 snapshot:(id)arg3 section:(id)arg4;
- (long long)moveItemID:(id)arg1 before:(id)arg2 snapshot:(id)arg3 section:(id)arg4;
- (id)pendingReadTimeoutCancelables;
- (void)removePendingReadCancelablesForItemID:(id)arg1;
- (id)sectionObjectID;
- (void)setClientLog:(id)arg1;
- (void)setDestructiveActionConversationID:(long long)arg1;
- (void)setPendingReadTimeoutCancelables:(id)arg1;
- (void)setUpdateQueue:(id)arg1;
- (id)updateQueue;

@end
