
@interface _MFPersistedMessageForwardingIterator : NSObject <EFCancelable, MFSearchResultHandler, _MFFlushableMessageSetIterator> {
    _Atomic bool  _cancelled;
    id /* block */  _handler;
    NSMutableIndexSet * _messageSet;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableIndexSet *messageSet;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (void)flush;
- (bool)handleMessage:(id)arg1;
- (id)messageSet;

@end
