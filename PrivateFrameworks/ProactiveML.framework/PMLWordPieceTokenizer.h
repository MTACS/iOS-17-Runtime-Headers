
@interface PMLWordPieceTokenizer : NSObject {
    <PMLWordPieceVocabProtocol> * _vocab;
}

- (void).cxx_destruct;
- (unsigned int)endId;
- (id)init;
- (id)initWithVocab:(id)arg1;
- (unsigned int)padId;
- (unsigned int)startId;
- (int)toTokens:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 fromInput:(id)arg2 withLength:(unsigned long long)arg3;
- (id)tokenize:(id)arg1 withLength:(unsigned long long)arg2;
- (int)tokenizeToIds:(float*)arg1 fromString:(id)arg2 tokens:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 tokenCount:(int)arg4 length:(unsigned long long)arg5;

@end
