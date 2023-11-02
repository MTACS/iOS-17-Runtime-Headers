
@protocol MDRenderTarget <NSObject>

@required

- (struct shared_ptr<ggl::BitmapDataBase> { struct BitmapDataBase {} *x1; struct __shared_weak_count {} *x2; })bitmapData;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (double)contentScale;
- (void)createRenderTarget;
- (void)destroyRenderTarget;
- (void*)finalRenderTarget;
- (struct __IOSurface { }*)flipImage;
- (const struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; }*)format;
- (bool)hasRenderTarget;
- (const struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; }*)linearFormat;
- (void*)linearRenderTarget;
- (bool)multiSample;
- (struct function<void (std::function<std::future<void> (std::function<void ()>)>, std::function<std::future<void> (std::function<void ()>)>)>={__value_func<void (std::function<std::future<void> (std::function<void ()>)>, std::function<std::future<void> (std::function<void ()>)>)>={type=[24C] {})prepareRenderTask:(void *)arg1 presentAtTime:(void *)arg2 didPresentDelegate:(void *)arg3 taskModule:(void *)arg4; // needs 4 arg types, found 20: void*, id, SEL, double, double, struct function<void ()>={__value_func<void ()>={type=[24C] {}, void*, void*, void*, struct LayoutSceneTaskModule { struct function<ggl::RenderQueue *()>={__value_func<ggl::RenderQueue *()>={type=[24C] {} x1; void *x2; }, void*, struct function<void ()>={__value_func<void ()>={type=[24C] {}, void*, void*, void*, struct function<void ()>={__value_func<void ()>={type=[24C] {}, void*, void*, void*, void*
- (<GGLRenderQueueSource> *)renderSource;
- (void*)renderer;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentScale:(double)arg1;
- (void)setRenderSource:(id <GGLRenderQueueSource>)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldRasterize;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })sizeInPixels;
- (bool)supportsFramebufferFetch;

@optional

- (void)addSizeObserver:(id <MDRenderTargetSizeObserver>)arg1;
- (float)averageFPS;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toLayer:(CALayer *)arg2;
- (void*)debugConsoleForId:(int)arg1;
- (void)didDrawView;
- (void)removeSizeObserver:(id <MDRenderTargetSizeObserver>)arg1;
- (void)willDrawView;

@end
