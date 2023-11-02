
@interface PMLHashingVectorizer : NSObject <PMLTransformerProtocol> {
    int  _buckets;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _characterNGramRange;
    long long  _endId;
    unsigned long long  _extraIdOptions;
    unsigned long long  _idVectorLength;
    NSLocale * _localeForNonwordTokens;
    long long  _paddingId;
    bool  _shouldNormalizeCharacters;
    bool  _shouldNormalizeTokens;
    long long  _startId;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _tokenNGramRange;
    bool  _tokenizeNewlines;
    long long  _vectorNormalization;
    unsigned long long  _vectorizerStrategy;
    <PMLWordPieceVocabProtocol> * _vocab;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)withBucketSize:(int)arg1 andCharNgramOrder:(int)arg2;
+ (id)withBucketSize:(int)arg1 andNgramOrder:(int)arg2;
+ (id)withBucketSize:(int)arg1 andNgrams:(int)arg2;
+ (id)withBucketSize:(int)arg1 characterNGramRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 tokenNGramRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 shouldNormalizeTokens:(bool)arg4 shouldNormalizeCharacters:(bool)arg5;
+ (id)withBucketSize:(int)arg1 characterNGramRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 tokenNGramRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 shouldNormalizeTokens:(bool)arg4 shouldNormalizeCharacters:(bool)arg5 localeForNonwordTokens:(id)arg6 tokenizeNewlines:(bool)arg7;
+ (id)withBucketSize:(int)arg1 characterNGramRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 tokenNGramRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 shouldNormalizeTokens:(bool)arg4 shouldNormalizeCharacters:(bool)arg5 localeForNonwordTokens:(id)arg6 tokenizeNewlines:(bool)arg7 idVectorLength:(unsigned long long)arg8 extraIdOptions:(unsigned long long)arg9 vectorizerStrategy:(unsigned long long)arg10 vectorNormalization:(long long)arg11;
+ (id)withBucketSize:(int)arg1 characterNGramRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 tokenNGramRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 shouldNormalizeTokens:(bool)arg4 shouldNormalizeCharacters:(bool)arg5 localeForNonwordTokens:(id)arg6 tokenizeNewlines:(bool)arg7 idVectorLength:(unsigned long long)arg8 extraIdOptions:(unsigned long long)arg9 vectorizerStrategy:(unsigned long long)arg10 vectorNormalization:(long long)arg11 vocab:(id)arg12;
+ (id)withBucketSize:(int)arg1 ngrams:(int)arg2 localeForNonwordTokens:(id)arg3 tokenizeNewlines:(bool)arg4;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBucketSize:(int)arg1 characterNGramRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 tokenNGramRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 shouldNormalizeTokens:(bool)arg4 shouldNormalizeCharacters:(bool)arg5 localeForNonwordTokens:(id)arg6 tokenizeNewlines:(bool)arg7 idVectorLength:(unsigned long long)arg8 extraIdOptions:(unsigned long long)arg9 vectorizerStrategy:(unsigned long long)arg10 vectorNormalization:(long long)arg11 vocab:(id)arg12;
- (id)initWithBucketSize:(int)arg1 ngrams:(int)arg2 localeForNonwordTokens:(id)arg3 tokenizeNewlines:(bool)arg4;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHashingVectorizer:(id)arg1;
- (void)setVectorizerNormalization:(long long)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;
- (id)transformBagOfIds:(id)arg1 shouldDecrement:(bool)arg2;
- (id)transformBatch:(id)arg1;
- (id)transformSequentialNGrams:(id)arg1;
- (id)transformWithFrequency:(id)arg1 shouldDecrement:(bool)arg2;
- (id)transformWithWordPiece:(id)arg1;

@end
