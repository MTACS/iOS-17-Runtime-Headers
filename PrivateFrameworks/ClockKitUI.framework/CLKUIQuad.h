
@interface CLKUIQuad : NSObject {
    bool  _opaque;
    CLKUIQuadView * _quadView;
}

@property (getter=isOpaque, nonatomic) bool opaque;
@property (nonatomic) CLKUIQuadView *quadView;

- (void).cxx_destruct;
- (void)encodeGLforSize:(struct CLKUIQuadSize { int x1; int x2; })arg1;
- (id)init;
- (bool)isOpaque;
- (void)performOffscreenPassesWithCommandBuffer:(id)arg1;
- (bool)prepareForTime:(double)arg1;
- (void)purge;
- (id)quadView;
- (void)renderFailedForReason:(unsigned long long)arg1;
- (void)renderForDisplayWithEncoder:(id)arg1;
- (void)renderWithCommandBuffer:(id)arg1 passDescriptor:(id)arg2;
- (void)setOpaque:(bool)arg1;
- (void)setQuadView:(id)arg1;
- (void)setupForQuadView:(id)arg1;
- (void)unlinkQuadView;

@end
