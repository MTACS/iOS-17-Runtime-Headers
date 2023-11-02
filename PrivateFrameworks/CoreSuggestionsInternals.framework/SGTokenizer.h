
@interface SGTokenizer : NSObject

+ (void)enumerateTokensInString:(id)arg1 block:(id /* block */)arg2;
+ (void)enumerateTokensInString:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 block:(id /* block */)arg3;
+ (id)ftsPrefix:(id)arg1;
+ (id)ftsTokenize:(id)arg1;
+ (id)tokenize:(id)arg1;

@end
