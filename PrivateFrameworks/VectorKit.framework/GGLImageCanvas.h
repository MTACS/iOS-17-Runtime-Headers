
@interface GGLImageCanvas : NSObject <MDRenderTarget> {
    bool  _allowAlpha;
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
    bool  _canMakeImage;
    double  _contentScale;
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
    }  _depthStencilBuffer;
    struct shared_ptr<ggl::Device> { 
        struct Device {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _device;
    struct unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> { 
        struct __compressed_pair<ggl::RenderTarget *, std::default_delete<ggl::RenderTarget>> { 
            struct RenderTarget {} *__value_; 
        } __ptr_; 
    }  _flippedRenderTarget;
    struct unique_ptr<ggl::IOSurfaceTexture, std::default_delete<ggl::IOSurfaceTexture>> { 
        struct __compressed_pair<ggl::IOSurfaceTexture *, std::default_delete<ggl::IOSurfaceTexture>> { 
            struct IOSurfaceTexture {} *__value_; 
        } __ptr_; 
    }  _flippedSurfaceTexture;
    struct shared_ptr<ggl::Texture2DAbstract> { 
        struct Texture2DAbstract {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _linearColorBuffer;
    struct array<std::shared_ptr<ggl::RenderBuffer>, 3UL> { 
        struct shared_ptr<ggl::RenderBuffer> { 
            struct RenderBuffer {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } __elems_[3]; 
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
    void * _mdDevice;
    struct shared_ptr<ggl::Texture> { 
        struct Texture {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _msaaResolveBuffer;
    bool  _recreateRenderTarget;
    <GGLRenderQueueSource> * _renderSource;
    struct unique_ptr<ggl::Renderer, std::default_delete<ggl::Renderer>> { 
        struct __compressed_pair<ggl::Renderer *, std::default_delete<ggl::Renderer>> { 
            struct Renderer {} *__value_; 
        } __ptr_; 
    }  _renderer;
    struct RenderTargetFormat { 
        int colorFormats[4]; 
        unsigned long long colorFormatsCount; 
        unsigned int samples; 
        int depthStencilFormat; 
    }  _resolvedRenderTargetFormat;
    struct shared_ptr<ggl::Texture2DAbstract> { 
        struct Texture2DAbstract {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _sRGBColorBuffer;
    struct array<std::shared_ptr<ggl::RenderBuffer>, 3UL> { 
        struct shared_ptr<ggl::RenderBuffer> { 
            struct RenderBuffer {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } __elems_[3]; 
    }  _sRGBColorTextures;
    struct RenderTargetFormat { 
        int colorFormats[4]; 
        unsigned long long colorFormatsCount; 
        unsigned int samples; 
        int depthStencilFormat; 
    }  _sRGBFormat;
    struct unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> { 
        struct __compressed_pair<ggl::RenderTarget *, std::default_delete<ggl::RenderTarget>> { 
            struct RenderTarget {} *__value_; 
        } __ptr_; 
    }  _sRGBRenderTarget;
    void * _services;
    unsigned long long  _signpostId;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    bool  _supportsFramebufferFetch;
    bool  _useMultisampling;
    struct unique_ptr<md::YFlipPass, std::default_delete<md::YFlipPass>> { 
        struct __compressed_pair<md::YFlipPass *, std::default_delete<md::YFlipPass>> { 
            struct YFlipPass {} *__value_; 
        } __ptr_; 
    }  _yFlipPass;
}

@property (nonatomic) bool allowAlpha;
@property (nonatomic, readonly) float averageFPS;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) double contentScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) void*finalRenderTarget;
@property (nonatomic, readonly) const struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; }*format;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) void*imageTexture;
@property (nonatomic, readonly) const struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; }*linearFormat;
@property (nonatomic, readonly) void*linearRenderTarget;
@property (nonatomic, readonly) bool multiSample;
@property (nonatomic) <GGLRenderQueueSource> *renderSource;
@property (nonatomic, readonly) void*renderTarget;
@property (nonatomic, readonly) void*renderer;
@property (nonatomic, readonly) bool shouldRasterize;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sizeInPixels;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFramebufferFetch;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void*)_internalRenderTarget;
- (bool)allowAlpha;
- (struct shared_ptr<ggl::BitmapDataBase> { struct BitmapDataBase {} *x1; struct __shared_weak_count {} *x2; })bitmapData;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (double)contentScale;
- (void)createRenderTarget;
- (void)dealloc;
- (void*)debugConsoleForId:(int)arg1;
- (void)destroyRenderTarget;
- (void)didDrawView;
- (void*)finalRenderTarget;
- (void*)finalSurface;
- (struct __IOSurface { }*)flipImage;
- (const struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; }*)format;
- (bool)hasRenderTarget;
- (void*)imageTexture;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 useMultisampling:(bool)arg3 extraColorFormats:(const void*)arg4 taskContext:(const void*)arg5 device:(void*)arg6 services:(void*)arg7 signpostId:(unsigned long long)arg8;
- (const struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; }*)linearFormat;
- (void*)linearRenderTarget;
- (bool)multiSample;
- (struct function<void (std::function<std::future<void> (std::function<void ()>)>, std::function<std::future<void> (std::function<void ()>)>)>={__value_func<void (std::function<std::future<void> (std::function<void ()>)>, std::function<std::future<void> (std::function<void ()>)>)>={type=[24C] {})prepareRenderTask:(double)arg1 presentAtTime:(double)arg2 didPresentDelegate:(struct function<void ()>={__value_func<void ()>={type=[24C] {})arg3 taskModule:(struct LayoutSceneTaskModule { struct function<ggl::RenderQueue *()>={__value_func<ggl::RenderQueue *()>={type=[24C] {} x1; void *x2; })arg4;
- (id)renderSource;
- (void*)renderTarget;
- (void*)renderer;
- (void)setAllowAlpha:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentScale:(double)arg1;
- (void)setRenderSource:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldRasterize;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })sizeInPixels;
- (bool)supportsFramebufferFetch;
- (void)willDealloc;
- (void)willDrawView;

@end
