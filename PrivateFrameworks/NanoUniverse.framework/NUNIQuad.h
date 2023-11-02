
@interface NUNIQuad : CLKUIQuad {
    double  _baseTime;
    NSObject<OS_dispatch_semaphore> * _renderSemaphore;
    NUNIRenderer * _renderer;
    NUNIScene * _scene;
    float  _screenScale;
}

@property (nonatomic, readonly) NUNIRenderer *renderer;
@property (nonatomic, retain) NUNIScene *scene;

- (void).cxx_destruct;
- (struct NUNIViewport { int x1; int x2; })_viewport;
- (id)initWithScreenScale:(double)arg1 renderer:(id)arg2;
- (void)performOffscreenPassesWithCommandBuffer:(id)arg1;
- (bool)prepareForTime:(double)arg1;
- (void)renderFailedForReason:(unsigned long long)arg1;
- (void)renderWithCommandBuffer:(id)arg1 passDescriptor:(id)arg2;
- (id)renderer;
- (id)scene;
- (void)setScene:(id)arg1;
- (void)setupForQuadView:(id)arg1;
- (id)spheroidAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
