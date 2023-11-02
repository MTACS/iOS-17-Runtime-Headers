
@interface _MFMessagePersistenceQueryIterator : EDPersistedMessageQueryIterator <EFCancelable, MFSearchResultHandler, QueryProgressMonitor, _MFFlushableMessageSetIterator> {
    NSMutableIndexSet * _messageSet;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableIndexSet *messageSet;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)handleMessage:(id)arg1;
- (id)messageSet;
- (void)setMessageSet:(id)arg1;

@end
