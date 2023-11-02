
@interface ARUIRingsRenderer : NSObject {
    ARUIRingUniformsCache * _cache;
    unsigned long long  _indexCount;
}

- (void).cxx_destruct;
- (void)_renderEntireRings:(id)arg1 intoContext:(id)arg2 withCommandEncoder:(id)arg3 forState:(id)arg4;
- (void)_renderRingsFollowingPercent:(id)arg1 intoContext:(id)arg2 withCommandEncoder:(id)arg3 forState:(id)arg4;
- (void)beginRenderingWithCommandEncoder:(id)arg1;
- (void)clearCaches;
- (id)initWithDevice:(id)arg1;
- (void)renderRings:(id)arg1 intoContext:(id)arg2 withCommandEncoder:(id)arg3 forState:(id)arg4;

@end
