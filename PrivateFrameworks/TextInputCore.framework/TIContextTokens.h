
@interface TIContextTokens : NSObject {
    void * _context;
}

@property (nonatomic) void*context;

- (void)appendToken:(struct TITokenID { unsigned int x1; unsigned int x2; })arg1 string:(id)arg2;
- (const struct TITokenID { unsigned int x1; unsigned int x2; }*)begin;
- (void)clear;
- (void*)context;
- (void)dealloc;
- (id)init;
- (id)initWithContext:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg1 contextLength:(unsigned long long)arg2 contextStringTokens:(id)arg3;
- (void*)lmContext;
- (void)popBack;
- (void)setContext:(void*)arg1;
- (unsigned long long)size;

@end
