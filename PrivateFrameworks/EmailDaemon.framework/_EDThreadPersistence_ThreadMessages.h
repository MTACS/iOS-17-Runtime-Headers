
@interface _EDThreadPersistence_ThreadMessages : NSObject {
    EDMessagePersistence * _messagePersistence;
    _EDThreadPersistence_SQLHelper * _sqlHelper;
    EMThread * _thread;
    EMThreadObjectID * _threadObjectID;
    long long  _threadScopeDatabaseID;
    NSArray * _wrappedMessages;
}

@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) _EDThreadPersistence_SQLHelper *sqlHelper;
@property (nonatomic, readonly) EMThread *thread;
@property (nonatomic, readonly) EMThreadObjectID *threadObjectID;
@property (nonatomic, readonly) long long threadScopeDatabaseID;
@property (nonatomic, readonly) NSArray *wrappedMessages;

- (void).cxx_destruct;
- (id)_displayWrappedMessageWithNewestReadWrappedMessage:(id*)arg1;
- (id)_iterateNewestUnreadWrappedMessagesInWrappedMessages:(id)arg1 iteratorBlock:(id /* block */)arg2;
- (id)_newestUnreadWrappedMessagesWithNewestReadWrappedMessage:(id*)arg1;
- (id)_threadQuery;
- (bool)addThreadReplacingExisting:(bool)arg1 journaled:(bool)arg2;
- (id)debugDescription;
- (id)initWithSQLHelper:(id)arg1 messagePersistence:(id)arg2 threadScopeDatabaseID:(long long)arg3 threadObjectID:(id)arg4 wrappedMessages:(id)arg5;
- (id)messagePersistence;
- (id)sqlHelper;
- (id)thread;
- (id)threadObjectID;
- (long long)threadScopeDatabaseID;
- (id)updateThreadTableWithJournaled:(bool)arg1;
- (id)wrappedMessages;

@end
