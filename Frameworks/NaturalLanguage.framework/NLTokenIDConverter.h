
@interface NLTokenIDConverter : NSObject

- (void)enumerateTokenIDsForString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withBlock:(id /* block */)arg3;
- (id)stringForTokenID:(unsigned int)arg1;
- (id)stringForTokenIDs:(const unsigned int*)arg1 length:(unsigned long long)arg2;
- (unsigned int)tokenIDForString:(id)arg1;

@end
