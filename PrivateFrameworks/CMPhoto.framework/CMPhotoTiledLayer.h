
@interface CMPhotoTiledLayer : CALayer {
    struct CMPhotoDecompressionContainer { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct CMPhotoDecompressionSession {} *x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; struct CMPhotoDecompressionContainerVTable {} *x8; union { struct { struct __CFAllocator {} *x_1_2_1; struct OpaqueFigPictureCollection {} *x_1_2_2; struct OpaqueFigFormatReader {} *x_1_2_3; struct { unsigned char x_4_3_1; long long x_4_3_2; long long x_4_3_3; struct CGImageMetadata {} *x_4_3_4; struct __CFDictionary {} *x_4_3_5; int x_4_3_6; } x_1_2_4; struct { unsigned char x_5_3_1; struct __CFArray {} *x_5_3_2; } x_1_2_5; struct { unsigned char x_6_3_1; long long x_6_3_2; long long x_6_3_3; } x_1_2_6; struct { unsigned char x_7_3_1; unsigned char x_7_3_2; } x_1_2_7; struct { unsigned char x_8_3_1; unsigned char x_8_3_2; } x_1_2_8; } x_9_1_1; struct { struct __CFAllocator {} *x_2_2_1; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; long long x_2_3_3; } x_2_2_2; struct OpaqueFigFormatReader {} *x_2_2_3; struct __CFDictionary {} *x_2_2_4; struct { /* ? */ } *x_2_2_5; struct __CFArray {} *x_2_2_6; struct __CFArray {} *x_2_2_7; id x_2_2_8; unsigned char x_2_2_9; } x_9_1_2; struct { struct __CFAllocator {} *x_3_2_1; struct { int x_2_3_1; union { void *x_2_4_1; struct __CFURL {} *x_2_4_2; struct __IOSurface {} *x_2_4_3; struct __CFData {} *x_2_4_4; struct OpaqueCMBlockBuffer {} *x_2_4_5; } x_2_3_2; struct OpaqueCMByteStream {} *x_2_3_3; } x_3_2_2; struct OpaqueFigSimpleMutex {} *x_3_2_3; struct { struct { unsigned char x_1_4_1; struct __CFArray {} *x_1_4_2; } x_4_3_1; } x_3_2_4; struct CMPhotoUnifiedJPEGDecoder {} *x_3_2_5; struct { unsigned char x_6_3_1; struct { unsigned long long x_2_4_1; unsigned long long x_2_4_2; } x_6_3_2; int x_6_3_3; unsigned char x_6_3_4; unsigned char x_6_3_5; int x_6_3_6; } x_3_2_6; struct { unsigned char x_7_3_1; struct { /* ? */ } *x_7_3_2; unsigned long long x_7_3_3; } x_3_2_7; struct { unsigned char x_8_3_1; unsigned char x_8_3_2; struct { long long x_3_4_1; unsigned long long x_3_4_2; } x_8_3_3; int x_8_3_4; unsigned char x_8_3_5; struct { unsigned char x_6_4_1; struct { unsigned long long x_2_5_1; unsigned long long x_2_5_2; } x_6_4_2; int x_6_4_3; struct { long long x_4_5_1; unsigned long long x_4_5_2; } x_6_4_4; int x_6_4_5; } x_8_3_6; } x_3_2_8; } x_9_1_3; } x9; } * _container;
    int  _containerFormat;
    unsigned int  _conversionPixelFormat;
    unsigned int  _decodePixelFormat;
    struct CMPhotoDecompressionSession { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct os_unfair_lock_s { unsigned int x_2_1_1; } x2; unsigned long long x3; struct __CFSet {} *x4; id x5; struct { unsigned char x_6_1_1; id x_6_1_2; id x_6_1_3; id x_6_1_4; struct __CFArray {} *x_6_1_5; int x_6_1_6; } x6; struct { unsigned char x_7_1_1; id x_7_1_2; id x_7_1_3; id x_7_1_4; struct __CFArray {} *x_7_1_5; int x_7_1_6; } x7; struct { unsigned char x_8_1_1; id x_8_1_2; id x_8_1_3; id x_8_1_4; struct __CFArray {} *x_8_1_5; int x_8_1_6; } x8; struct { unsigned char x_9_1_1; id x_9_1_2; id x_9_1_3; id x_9_1_4; struct __CFArray {} *x_9_1_5; int x_9_1_6; } x9; struct { unsigned char x_10_1_1; int x_10_1_2; struct os_unfair_lock_s { unsigned int x_3_2_1; } x_10_1_3; id x_10_1_4; struct __CFArray {} *x_10_1_5; } x10; struct CMPhotoSurfacePool {} *x11; struct CMPhotoScaleAndRotateSession {} *x12; struct CMPhotoCodecSessionPool {} *x13; struct CMPhotoCodecSessionPool {} *x14; id /* block */ x15; void *x16; unsigned long long x17; } * _decodeSession;
    int  _err;
    bool  _hasAlpha;
    bool  _hasExtendedColorDisplay;
    long long  _imageIndex;
    long long  _imageOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    bool  _isHDR;
    bool  _lastAboveZoomThreshold;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastVisibleRect;
    double  _lastZoomScale;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <MTLCommandQueue> * _metalCmdQueue;
    MPSImageConversion * _metalConverter;
    <MTLDevice><MTLDeviceSPI> * _metalDevice;
    NSObject<OS_dispatch_queue> * _metalQueue;
    struct CGImage { } * _placeholderImage;
    CALayer * _placeholderLayer;
    _Atomic unsigned int  _requestID;
    NSObject<OS_dispatch_queue> * _schedulingQueue;
    bool  _shouldDisplayHDR;
    bool  _shouldTile;
    bool  _showTileBorders;
    NSMutableDictionary * _subLayers;
    struct CMPhotoSurfacePool { } * _surfacePool;
    struct CMPhotoCache { } * _tileCache;
    struct CGSize { 
        double width; 
        double height; 
    }  _tileSize;
    NSObject<OS_dispatch_queue> * _updateQueue;
    struct vImageConverter { } * _vimageConverter;
    NSMutableSet * _visibleTileKeys;
    int  _zoomLevel;
    double  _zoomStartScale;
}

@property (nonatomic, readonly) long long imageOrientation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic) bool shouldDisplayHDR;

- (void)_decodeImageRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forLevel:(int)arg2 zoomScale:(double)arg3 requestId:(unsigned int)arg4 completionHandler:(id /* block */)arg5;
- (void)_prepareForDecode;
- (void)_removeAllTiles;
- (void)_runMetalConversionOnSurface:(struct __IOSurface { }*)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)_runVImageConversionOnSurface:(struct __IOSurface { }*)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)_setupConverterForSourceColorSpace:(struct CGColorSpace { }*)arg1 destinationColorSpace:(struct CGColorSpace { }*)arg2;
- (void)_updateSubLayers:(id)arg1 zoomScale:(double)arg2;
- (bool)_visibleTileRegionHasChanged:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 level:(int)arg2;
- (double)_zoomStartScaleForImage:(struct CGSize { double x1; double x2; })arg1 placeholderImageSize:(struct CGSize { double x1; double x2; })arg2;
- (void)dealloc;
- (void)flushCache;
- (long long)imageOrientation;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithContainer:(id)arg1 containerImageIndex:(long long)arg2 backgroundImageSize:(struct CGSize { double x1; double x2; })arg3 screenSize:(struct CGSize { double x1; double x2; })arg4;
- (id)initWithContainerData:(id)arg1 containerImageIndex:(long long)arg2 backgroundImageSize:(struct CGSize { double x1; double x2; })arg3 screenSize:(struct CGSize { double x1; double x2; })arg4;
- (id)initWithContainerData:(id)arg1 containerImageIndex:(long long)arg2 placeholderImage:(struct CGImage { }*)arg3 screenSize:(struct CGSize { double x1; double x2; })arg4;
- (id)initWithContainerURL:(id)arg1 containerImageIndex:(long long)arg2 backgroundImageSize:(struct CGSize { double x1; double x2; })arg3 screenSize:(struct CGSize { double x1; double x2; })arg4;
- (void)setShouldDisplayHDR:(bool)arg1;
- (void)setVisibleRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2;
- (void)setVisibleRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2 completionHandler:(id /* block */)arg3;
- (bool)shouldDisplayHDR;
- (void)sizeToFit;

@end
