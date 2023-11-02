
@interface RBLayer : CALayer <RBDrawableStatistics, _RBDrawableDelegate, _RBSharedSurfaceOwner> {
    bool  _allowsPackedDrawable;
    struct { 
        float red; 
        float green; 
        float blue; 
        float alpha; 
    }  _clearColor;
    bool  _clearsBackground;
    int  _colorMode;
    struct objc_ptr<RBSurfaceContentsLayer *> { 
        RBSurfaceContentsLayer *_p; 
    }  _contentsLayer;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _deallocating;
    struct objc_ptr<RBDevice *> { 
        RBDevice *_p; 
    }  _device;
    struct refcounted_ptr<RB::Drawable> { 
        struct Drawable {} *_p; 
    }  _drawable;
    bool  _failed_to_render;
    struct spin_lock { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _lock; 
    }  _lock;
    long long  _maxDrawableCount;
    bool  _needsSynchronousUpdate;
    bool  _needs_display_on_visible;
    void * _pending_async_surface;
    bool  _pending_visible_callback;
    unsigned long long  _pixelFormat;
    bool  _promotesFramebuffer;
    struct objc_ptr<RBImageQueueLayer *> { 
        RBImageQueueLayer *_p; 
    }  _queueLayer;
    bool  _rendersAsynchronously;
    double  _statistics_alpha;
    struct objc_ptr<void (^)(id<RBDrawableStatistics>)>="_p"@? {}  _statistics_handler;
    unsigned long long  _statistics_mask;
    struct SharedSubsurface { 
        struct SharedSurface {} *_surface; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*_origin; 
    }  _subsurface;
    struct refcounted_ptr<RB::SharedSurfaceClient> { 
        struct SharedSurfaceClient {} *_p; 
    }  _surface_client;
    bool  _visible;
}

@property (nonatomic) bool allowsPackedDrawable;
@property (nonatomic) struct { float x1; float x2; float x3; float x4; } clearColor;
@property (nonatomic) bool clearsBackground;
@property (nonatomic) int colorMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) RBDevice *device;
@property (getter=isDrawableAvailable, nonatomic, readonly) bool drawableAvailable;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long maxDrawableCount;
@property (nonatomic) bool needsSynchronousUpdate;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) bool promotesFramebuffer;
@property (nonatomic) bool rendersAsynchronously;
@property (nonatomic, readonly, copy) NSDictionary *statistics;
@property (nonatomic, copy) id /* block */ statisticsHandler;
@property (readonly) Class superclass;

+ (id)defaultValueForKey:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_RBDrawableStatisticsDidChange;
- (void)_moveSubsurface:(void*)arg1;
- (void)_renderForegroundInContext:(struct CGContext { }*)arg1;
- (bool)_willMoveSubsurface:(unsigned int)arg1;
- (id)actionForKey:(id)arg1;
- (bool)allowsPackedDrawable;
- (struct { float x1; float x2; float x3; float x4; })clearColor;
- (bool)clearsBackground;
- (int)colorMode;
- (void)copyImageInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2 completionQueue:(id)arg3 handler:(id /* block */)arg4;
- (void)dealloc;
- (id)device;
- (void)display;
- (bool)displayWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 callback:(id /* block */)arg2;
- (void)drawInDisplayList:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (bool)isDrawableAvailable;
- (void)layerDidBecomeVisible:(bool)arg1;
- (void)layoutSublayers;
- (long long)maxDrawableCount;
- (bool)needsSynchronousUpdate;
- (unsigned long long)pixelFormat;
- (bool)promotesFramebuffer;
- (bool)rendersAsynchronously;
- (void)resetStatistics:(unsigned long long)arg1 alpha:(double)arg2;
- (void)setAllowsPackedDrawable:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setClearColor:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setClearsBackground:(bool)arg1;
- (void)setColorMode:(int)arg1;
- (void)setContents:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setMaxDrawableCount:(long long)arg1;
- (void)setNeedsSynchronousUpdate:(bool)arg1;
- (void)setPixelFormat:(unsigned long long)arg1;
- (void)setPromotesFramebuffer:(bool)arg1;
- (void)setRendersAsynchronously:(bool)arg1;
- (void)setStatisticsHandler:(id /* block */)arg1;
- (id)statistics;
- (id /* block */)statisticsHandler;
- (void)waitUntilAsyncRenderingCompleted;

@end
