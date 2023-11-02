
@interface SGQuickResponsesPersonalization : NSObject {
    _PASRng * _rng;
    SGQuickResponsesStore * _store;
}

+ (id)augmentRecords:(id)arg1 semanticClass:(unsigned long long)arg2 config:(id)arg3;
+ (id)deduplicatedReplyTextsForReplyPositions:(id)arg1 semanticClass:(unsigned long long)arg2 responseCount:(unsigned long long)arg3 config:(id)arg4;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStore:(id)arg1 withRng:(id)arg2;
- (void)registerDisplayedResponses:(id)arg1 config:(id)arg2;
- (void)registerSelectedResponse:(id)arg1 config:(id)arg2;
- (void)registerWrittenResponse:(id)arg1 config:(id)arg2;
- (id)replyPositionsForSemanticClass:(unsigned long long)arg1 responseCount:(unsigned long long)arg2 config:(id)arg3;
- (id)sortedReplyPositionsForSemanticClass:(unsigned long long)arg1 config:(id)arg2;

@end
