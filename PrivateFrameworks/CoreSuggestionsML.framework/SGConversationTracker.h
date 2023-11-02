
@interface SGConversationTracker : NSObject {
    _PASLRUCache * _conversations;
}

+ (id)getMergedPromptForMessage:(id)arg1 conversationTurns:(id)arg2 maxPromptLength:(unsigned long long)arg3 maxPromptWindowSeconds:(double)arg4 promptJoiningString:(id)arg5;
+ (id)instance;
+ (id)sgConversationTurnsForStrings:(id)arg1;

- (void).cxx_destruct;
- (id)addMessage:(id)arg1;
- (void)clear;
- (id)conversationForSenderID:(id)arg1;
- (id)init;

@end
