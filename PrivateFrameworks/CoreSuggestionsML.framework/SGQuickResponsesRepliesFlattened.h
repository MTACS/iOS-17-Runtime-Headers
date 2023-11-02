
@interface SGQuickResponsesRepliesFlattened : SGQuickResponsesReplies {
    _PASLock * _normalizedReplyTextsSet;
    unsigned long long  _replyTextStringsCount;
    NSArray * _replyTexts;
}

+ (unsigned long long)countReplyTextsForArray:(id)arg1;
+ (id)normalizedReplyTextsSetForArray:(id)arg1;

- (void).cxx_destruct;
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
