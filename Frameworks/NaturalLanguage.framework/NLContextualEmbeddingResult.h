
@interface NLContextualEmbeddingResult : NSObject {
    NSData * _data;
    NSString * _language;
    NSString * _string;
    NSArray * _tokenDictionaries;
    unsigned long long  _tokenVectorDimension;
}

@property (readonly, copy) NSString *language;
@property (readonly) unsigned long long sequenceLength;
@property (readonly, copy) NSString *string;

- (void).cxx_destruct;
- (id)_tokenVectorAtIndex:(unsigned long long)arg1;
- (void)enumerateTokenVectorsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (id)initWithString:(id)arg1 tokenDictionaries:(id)arg2 data:(id)arg3 language:(id)arg4 tokenVectorDimension:(unsigned long long)arg5;
- (id)language;
- (id)sentenceVector;
- (id)sentenceVectorData;
- (unsigned long long)sequenceLength;
- (id)string;
- (id)tokenVectorAtIndex:(unsigned long long)arg1 tokenRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)tokenVectorData;

@end
