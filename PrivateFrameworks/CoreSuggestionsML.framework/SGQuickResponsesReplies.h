
@interface SGQuickResponsesReplies : NSObject

+ (id)normalizeReplyText:(id)arg1;
+ (id)normalizeReplyTextInternal:(id)arg1;
+ (id)repliesWithArray:(id)arg1;

- (id)initWithArray:(id)arg1;
- (unsigned long long)maxDistinctReplies;
- (unsigned long long)modelCount;
- (id)normalizedReplyTextsSet;
- (unsigned long long)replyClassCount;
- (unsigned long long)replyCountForIndex:(unsigned long long)arg1;
- (unsigned long long)replyTextCount;
- (id)replyTextForIndex:(unsigned long long)arg1 position:(unsigned long long)arg2;
- (id)replyTextForIndexAndPosition:(id)arg1;
- (id)replyTextsForIndex:(unsigned long long)arg1;

@end
