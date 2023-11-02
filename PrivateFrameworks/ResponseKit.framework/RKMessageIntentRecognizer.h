
@interface RKMessageIntentRecognizer : NSObject

+ (id)getRangesOfKeywords:(id)arg1 forMessage:(id)arg2;
+ (id)sharedManager;

- (id)copyAttributedTokensForMessage:(id)arg1 conversationTurns:(id)arg2 metadata:(id)arg3 languageID:(id)arg4;
- (void)dealloc;
- (void*)getMessageIntentRecognizer:(id)arg1;
- (id)init;

@end
