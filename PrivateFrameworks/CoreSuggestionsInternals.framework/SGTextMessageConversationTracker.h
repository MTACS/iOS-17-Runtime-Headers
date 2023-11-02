
@interface SGTextMessageConversationTracker : NSObject {
    SGConversationTracker * _conversationTracker;
}

+ (id)getMergedPrompt:(id)arg1 withParams:(id)arg2;
+ (id)instance;

- (void).cxx_destruct;
- (id)addTextMessageItem:(id)arg1;
- (void)clear;
- (id)conversationForIdentifier:(id)arg1;
- (id)init;

@end
