
@interface FxHeliumImage : FxImage {
    void * _heliumImagePriv;
}

- (void)dealloc;
- (void*)heliumNode;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })heliumRef;
- (unsigned long long)imageType;
- (id)initWithInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg1;
- (id)initWithInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg1 andHeliumNode:(void*)arg2;
- (id)initWithInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg1 andHeliumRef:(const void*)arg2;
- (void)setHeliumNode:(void*)arg1;
- (void)setHeliumRef:(const void*)arg1;

@end
