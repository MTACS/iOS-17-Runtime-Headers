
@interface EDPersistedMessageQueryIterator : NSObject <EFCancelable> {
    unsigned long long  _batchSize;
    NSMutableArray * _batchedMessages;
    EFCancelationToken * _cancelationToken;
    id /* block */  _handler;
    EMMailboxScope * _mailboxScope;
    EDMessagePersistence * _messagePersistence;
    EFQueue * _persistedMessageQueue;
    EMQuery * _query;
    long long  _remaining;
    NSMutableSet * _seenGlobalMessages;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_processPersistedMessages:(id)arg1 forceFlush:(bool)arg2;
- (void)addPersistedMessage:(id)arg1;
- (void)addPersistedMessages:(id)arg1;
- (void)cancel;
- (void)flush;
- (id)initWithMessagePersistence:(id)arg1 query:(id)arg2 batchSize:(long long)arg3 firstBatchSize:(long long)arg4 limit:(long long)arg5 handler:(id /* block */)arg6;
- (bool)shouldCancel;

@end
