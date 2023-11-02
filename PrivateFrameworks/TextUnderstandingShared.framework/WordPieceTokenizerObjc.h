
@interface WordPieceTokenizerObjc : NSObject {
    float  _endId;
    float  _padId;
    float  _startId;
    float  _unkId;
    BurstTrieDictionary * _vocab;
}

- (void).cxx_destruct;
- (float)endId;
- (id)init;
- (id)initWithVocab:(id)arg1;
- (float)padId;
- (float)startId;
- (int)toWordTokens:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 wordTokensUTF8:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 fromInput:(id)arg3 withLength:(unsigned long long)arg4;
- (id)tokenize:(id)arg1 withLength:(unsigned long long)arg2;
- (int)tokenizeToIds:(float*)arg1 ranges:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 wordIndexes:(long long*)arg3 fromString:(id)arg4 wordTokens:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg5 wordTokensUTF8:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg6 wordCount:(int)arg7 length:(unsigned long long)arg8;
- (float)unkId;

@end
