
@interface VKOverlay : NSObject <VKCustomTileOverlayProviderDelegate, VKRasterTileOverlayProviderDelegate, VKVectorOverlayDelegate> {
    long long  _blendMode;
    bool  _canProvideVectorData;
    bool  _canProvideVectorGeometry;
    struct shared_ptr<md::RasterTileOverlayStyle> { 
        struct RasterTileOverlayStyle {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _customStyle;
    VKCustomTileOverlayProviderData * _customTileProvider;
    struct unfair_lock { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _lock; 
    }  _customTileProviderLock;
    <VKOverlayDelegate> * _delegate;
    unsigned long long  _fallbackable;
    struct weak_ptr<md::GlobeOverlayContainer> { 
        struct GlobeOverlayContainer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _flyoverContainer;
    unsigned int  _identifier;
    unsigned long long  _level;
    struct shared_ptr<md::RasterTileOverlayStyle> { 
        struct RasterTileOverlayStyle {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _rasterStyle;
    VKRasterTileOverlayProviderData * _rasterTileProvider;
    struct unfair_lock { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _lock; 
    }  _rasterTileProviderLock;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _replaceMapContentInRect;
    struct RunLoopController { struct MapEngine {} *x1; long long x2; } * _runLoopController;
    struct weak_ptr<md::OverlayContainer> { 
        struct OverlayContainer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _standardContainer;
    VKVectorOverlayData * _vectorData;
    struct unfair_lock { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _lock; 
    }  _vectorDataLock;
    unsigned int  identifier;
}

@property (nonatomic) long long blendMode;
@property (readonly) bool canProvideVectorData;
@property (nonatomic, readonly) struct shared_ptr<md::RasterTileOverlayStyle> { struct RasterTileOverlayStyle {} *x1; struct __shared_weak_count {} *x2; } customStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VKOverlayDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long fallbackable;
@property (nonatomic) struct weak_ptr<md::GlobeOverlayContainer> { struct GlobeOverlayContainer {} *x1; struct __shared_weak_count {} *x2; } flyoverContainer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int identifier;
@property (nonatomic) unsigned long long level;
@property (nonatomic, readonly) struct shared_ptr<md::RasterTileOverlayStyle> { struct RasterTileOverlayStyle {} *x1; struct __shared_weak_count {} *x2; } rasterStyle;
@property (nonatomic) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } replaceMapContentInRect;
@property (nonatomic) struct RunLoopController { struct MapEngine {} *x1; long long x2; }*runLoopController;
@property (nonatomic) struct weak_ptr<md::OverlayContainer> { struct OverlayContainer {} *x1; struct __shared_weak_count {} *x2; } standardContainer;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateCustomTileProvider;
- (void)_updateRasterTileProvider;
- (void)_updateVectorData;
- (unsigned char)anisotropy;
- (bool)areResourcesRequired;
- (long long)blendMode;
- (bool)canDrawKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1;
- (bool)canDrawKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1 withData:(id)arg2;
- (bool)canPossiblyDrawKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1;
- (bool)canProvideVectorData;
- (void)clearDelegate;
- (struct shared_ptr<md::RasterTileOverlayStyle> { struct RasterTileOverlayStyle {} *x1; struct __shared_weak_count {} *x2; })customStyle;
- (void)customTileOverlayDidChangeAlpha:(id)arg1;
- (void)customTileOverlayDidChangeDisplayRate:(id)arg1;
- (void)customTileOverlayNeedsDisplay:(id)arg1;
- (void)customTileOverlayNeedsInvalidate:(id)arg1;
- (id)customTileProvider;
- (void)dealloc;
- (id)delegate;
- (void)didEnterKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1 withFallback:(bool)arg2;
- (void)didExitKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)drawKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1 withData:(id)arg2 inIOSurface:(struct __IOSurface { }*)arg3 withTimestamp:(double)arg4;
- (void)drawKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1 withData:(id)arg2 inTexture:(id)arg3 withTimestamp:(double)arg4 withTileScale:(float)arg5;
- (unsigned long long)estimatedCostForCustomTileData:(id)arg1;
- (unsigned long long)fallbackable;
- (struct weak_ptr<md::GlobeOverlayContainer> { struct GlobeOverlayContainer {} *x1; struct __shared_weak_count {} *x2; })flyoverContainer;
- (unsigned int)identifier;
- (id)init;
- (unsigned long long)level;
- (void)onVisibleTiles:(id)arg1;
- (struct shared_ptr<md::RasterTileOverlayStyle> { struct RasterTileOverlayStyle {} *x1; struct __shared_weak_count {} *x2; })rasterStyle;
- (void)rasterTileOverlayDidChangeAlpha:(id)arg1;
- (void)rasterTileOverlayNeedsDisplay:(id)arg1;
- (void)rasterTileOverlayNeedsInvalidate:(id)arg1;
- (id)rasterTileProvider;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })replaceMapContentInRect;
- (struct RunLoopController { struct MapEngine {} *x1; long long x2; }*)runLoopController;
- (void)setBlendMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFallbackable:(unsigned long long)arg1;
- (void)setFlyoverContainer:(struct weak_ptr<md::GlobeOverlayContainer> { struct GlobeOverlayContainer {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setLevel:(unsigned long long)arg1;
- (void)setNeedsDisplayForReason:(unsigned long long)arg1;
- (void)setNeedsDisplayInRect:(const struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 level:(long long)arg2 reason:(unsigned long long)arg3;
- (void)setReplaceMapContentInRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRunLoopController:(struct RunLoopController { struct MapEngine {} *x1; long long x2; }*)arg1;
- (void)setStandardContainer:(struct weak_ptr<md::OverlayContainer> { struct OverlayContainer {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)shouldUseMetalTexture;
- (struct weak_ptr<md::OverlayContainer> { struct OverlayContainer {} *x1; struct __shared_weak_count {} *x2; })standardContainer;
- (id)vectorData;
- (void)vectorOverlayNeedsDisplay:(id)arg1 needsFullInvalidate:(bool)arg2;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)overlayWithDrawable:(id)arg1 forOverlay:(id)arg2 atLevel:(long long)arg3;

@end
