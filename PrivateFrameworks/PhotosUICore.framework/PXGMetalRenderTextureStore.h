
@interface PXGMetalRenderTextureStore : NSObject {
    long long  _capacity;
    long long  _count;
    bool  _sorted;
    struct { id x1; id x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; float x4; int x5; unsigned char x6; bool x7; } * _textures;
}

- (void)_sortIfNeeded;
- (void)addTexture:(struct { id x1; id x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; float x4; int x5; unsigned char x6; bool x7; })arg1;
- (void)dealloc;
- (void)drawWithOrder:(unsigned long long)arg1 enumerationBlock:(id /* block */)arg2;
- (id)init;
- (void)removeAllTextures;

@end
