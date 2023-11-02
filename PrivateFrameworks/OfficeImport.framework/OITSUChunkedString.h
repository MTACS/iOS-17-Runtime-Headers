
@interface OITSUChunkedString : NSMutableString {
    unsigned long long  _chunkLength;
    struct vector<std::shared_ptr<TSUStringChunk>, std::allocator<std::shared_ptr<TSUStringChunk>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<TSUStringChunk> *, std::allocator<std::shared_ptr<TSUStringChunk>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _chunks;
    unsigned long long  _length;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)appendString:(id)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)compact;
- (void)dealloc;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)init;
- (id)initWithChunkLength:(unsigned long long)arg1;
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)length;
- (void)p_appendRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 fromString:(id)arg2;
- (void)p_compactChunksInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)p_deleteCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 chunkIndex:(unsigned long long)arg2;
- (void)p_insertCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 fromString:(id)arg2 atIndex:(unsigned long long)arg3 chunkIndex:(unsigned long long)arg4;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;

@end
