
@interface MDDisplayLayer : NSObject <MDRenderTarget> {
    void * _activeRenderQueue;
    bool  _allowBlitToDrawable;
    struct RenderTargetFormat { 
        int colorFormats[4]; 
        unsigned long long colorFormatsCount; 
        unsigned int samples; 
        int depthStencilFormat; 
    }  _blitFormat;
    struct unique_ptr<BlitPass, std::default_delete<BlitPass>> { 
        struct __compressed_pair<BlitPass *, std::default_delete<BlitPass>> { 
            struct BlitPass {} *__value_; 
        } __ptr_; 
    }  _blitPass;
    struct unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> { 
        struct __compressed_pair<ggl::RenderTarget *, std::default_delete<ggl::RenderTarget>> { 
            struct RenderTarget {} *__value_; 
        } __ptr_; 
    }  _blitRenderTarget;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    id  _commandQueueResetMaxAttemptsCountConfigListener;
    double  _contentsScale;
    struct unique_ptr<md::DebugConsoleManager, std::default_delete<md::DebugConsoleManager>> { 
        struct __compressed_pair<md::DebugConsoleManager *, std::default_delete<md::DebugConsoleManager>> { 
            struct DebugConsoleManager {} *__value_; 
        } __ptr_; 
    }  _debugConsoleManager;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _debugConsoleManagerCreationLock;
    struct unique_ptr<ggl::RenderBuffer, std::default_delete<ggl::RenderBuffer>> { 
        struct __compressed_pair<ggl::RenderBuffer *, std::default_delete<ggl::RenderBuffer>> { 
            struct RenderBuffer {} *__value_; 
        } __ptr_; 
    }  _depthStencil;
    void * _device;
    id  _enableCommandQueueResetOnErrorConfigListener;
    id  _enableEnhancedCommandBufferErrorsConfigListener;
    struct shared_ptr<ggl::RenderBuffer> { 
        struct RenderBuffer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _linearColorTextures;
    struct RenderTargetFormat { 
        int colorFormats[4]; 
        unsigned long long colorFormatsCount; 
        unsigned int samples; 
        int depthStencilFormat; 
    }  _linearFormat;
    struct unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> { 
        struct __compressed_pair<ggl::RenderTarget *, std::default_delete<ggl::RenderTarget>> { 
            struct RenderTarget {} *__value_; 
        } __ptr_; 
    }  _linearRenderTarget;
    struct shared_ptr<ggl::RenderBuffer> { 
        struct RenderBuffer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _linearTexture;
    NSHashTable * _observers;
    bool  _readPixels;
    <GGLRenderQueueSource> * _renderSource;
    void * _renderer;
    bool  _requiresMultisampling;
    struct shared_ptr<ggl::RenderBuffer> { 
        struct RenderBuffer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _sRGBColorTextures;
    struct RenderTargetFormat { 
        int colorFormats[4]; 
        unsigned long long colorFormatsCount; 
        unsigned int samples; 
        int depthStencilFormat; 
    }  _sRGBFormat;
    struct shared_ptr<ggl::RenderBuffer> { 
        struct RenderBuffer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _sRGBMsaaTexture;
    struct unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> { 
        struct __compressed_pair<ggl::RenderTarget *, std::default_delete<ggl::RenderTarget>> { 
            struct RenderTarget {} *__value_; 
        } __ptr_; 
    }  _sRGBRenderTarget;
    struct shared_ptr<ggl::Texture2DAbstract> { 
        struct Texture2DAbstract {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _sRGBTexture;
    void * _services;
    struct _retain_ptr<VKSharedResources *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        VKSharedResources *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _sharedResources;
    bool  _shouldRasterize;
    unsigned long long  _signpostId;
    struct CGContext { } * _snapshotContext;
    bool  _supportsFramebufferFetch;
    struct shared_ptr<ggl::Surface> { 
        struct Surface {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _surface;
    struct shared_ptr<ggl::Swapchain> { 
        struct Swapchain {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _swapchain;
    struct shared_ptr<md::TaskContext> { 
        struct TaskContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taskContext;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _texture;
    bool  _useMultisampling;
}

@property (nonatomic, readonly) float averageFPS;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) double contentScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) void*finalRenderTarget;
@property (nonatomic, readonly) const struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; }*format;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic, readonly) const struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; }*linearFormat;
@property (nonatomic, readonly) void*linearRenderTarget;
@property (nonatomic, readonly) bool multiSample;
@property (nonatomic) <GGLRenderQueueSource> *renderSource;
@property (nonatomic, readonly) void*renderer;
@property (nonatomic, readonly) bool shouldRasterize;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sizeInPixels;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFramebufferFetch;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_didReadPixels:(void*)arg1;
- (void)_notifyObserversSizeChanged:(struct CGSize { double x1; double x2; })arg1;
- (void)_prepareTexture:(const void*)arg1 isDrawable:(bool)arg2;
- (void)addSizeObserver:(id)arg1;
- (float)averageFPS;
- (struct shared_ptr<ggl::BitmapDataBase> { struct BitmapDataBase {} *x1; struct __shared_weak_count {} *x2; })bitmapData;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (double)contentScale;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toLayer:(id)arg2;
- (void)createRenderTarget;
- (void)dealloc;
- (void*)debugConsoleForId:(int)arg1;
- (void)destroyRenderTarget;
- (void)didEnterBackground;
- (void)didReceiveMemoryWarning;
- (void)didUpdateFrameTexture;
- (void)disablePerformanceHUD:(id)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1 taskModule:(struct LayoutSceneTaskModule { struct function<ggl::RenderQueue *()>={__value_func<ggl::RenderQueue *()>={type=[24C] {} x1; void *x2; })arg2;
- (void)enablePerformanceHUD:(id)arg1;
- (void)expandedPerformanceHUD:(id)arg1;
- (void*)finalRenderTarget;
- (struct __IOSurface { }*)flipImage;
- (const struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; }*)format;
- (bool)hasRenderTarget;
- (id)initWithContentScale:(double)arg1 useMultisampling:(bool)arg2 extraColorFormats:(const void*)arg3 shouldRasterize:(bool)arg4 allowBlitToDrawable:(bool)arg5 taskContext:(const void*)arg6 device:(void*)arg7 sharedResources:(id)arg8 services:(void*)arg9 signpostId:(unsigned long long)arg10;
- (bool)insertDisplayLayer:(id)arg1;
- (bool)isDelayedRenderQueueConsumptionSupported;
- (id)layer;
- (const struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; }*)linearFormat;
- (void*)linearRenderTarget;
- (bool)multiSample;
- (struct function<void (std::function<std::future<void> (std::function<void ()>)>, std::function<std::future<void> (std::function<void ()>)>)>={__value_func<void (std::function<std::future<void> (std::function<void ()>)>, std::function<std::future<void> (std::function<void ()>)>)>={type=[24C] {})prepareRenderTask:(double)arg1 presentAtTime:(double)arg2 didPresentDelegate:(struct function<void ()>={__value_func<void ()>={type=[24C] {})arg3 taskModule:(struct LayoutSceneTaskModule { struct function<ggl::RenderQueue *()>={__value_func<ggl::RenderQueue *()>={type=[24C] {} x1; void *x2; })arg4;
- (void)prepareTargetsForPlatormsWithFramebufferFetch:(const void*)arg1;
- (void)prepareTargetsForPlatormsWithoutFramebufferFetch:(const void*)arg1 isDrawable:(bool)arg2;
- (void)prepareTexture:(const void*)arg1;
- (void)removeSizeObserver:(id)arg1;
- (id)renderSource;
- (void*)renderer;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentScale:(double)arg1;
- (void)setContentsGravity:(id)arg1;
- (void)setNeedsDisplayOnBoundsChange:(bool)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setRenderSource:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldRasterize;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })sizeInPixels;
- (struct function<void (std::function<std::future<void> (std::function<void ()>)>, std::function<std::future<void> (std::function<void ()>)>)>={__value_func<void (std::function<std::future<void> (std::function<void ()>)>, std::function<std::future<void> (std::function<void ()>)>)>={type=[24C] {})snapshotTask:(struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; })arg1 timestamp:(double)arg2 taskModule:(struct LayoutSceneTaskModule { struct function<ggl::RenderQueue *()>={__value_func<ggl::RenderQueue *()>={type=[24C] {} x1; void *x2; })arg3 semaphore:(id)arg4;
- (bool)supportsFramebufferFetch;
- (void)willPresent;
- (void)willUpdateFrameTexture;

@end
