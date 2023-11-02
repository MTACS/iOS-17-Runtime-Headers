
@interface AFConversationStore : NSObject {
    NSMutableDictionary * _conversationsByIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (getter=_conversationsByIdentifier, nonatomic, readonly) NSMutableDictionary *conversationsByIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)_conversationsByIdentifier;
- (void)_registerConversation:(id)arg1 withIdentifier:(id)arg2;
- (void)fetchConversationWithIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)init;
- (id)queue;
- (void)removeConversationWithIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)saveConversation:(id)arg1 withIdentifier:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)setQueue:(id)arg1;

@end
