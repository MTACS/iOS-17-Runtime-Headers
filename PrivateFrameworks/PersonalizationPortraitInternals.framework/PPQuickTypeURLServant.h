
@interface PPQuickTypeURLServant : NSObject <PPQuickTypeServantProtocol> {
    TUConversationManager * _conversationManager;
    _PASLock * _dataLock;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithConversationManager:(id)arg1;
- (id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3;
- (void)registerFeedback:(id)arg1;

@end
