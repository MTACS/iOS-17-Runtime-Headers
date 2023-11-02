
@interface GDCFBurstTrie : NSObject {
    struct _CFBurstTrie { } * _trie;
}

- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (unsigned int)payloadForString:(id)arg1;
- (unsigned int)payloadForString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned int)payloadForUTF8String:(const char *)arg1 length:(unsigned long long)arg2;
- (void)runBlockWithTrie:(id /* block */)arg1;

@end
