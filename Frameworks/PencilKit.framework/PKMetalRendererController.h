
@interface PKMetalRendererController : NSObject <PKRendererVSyncControllerDelegate> {
    double  __latestLatency;
    struct CGSize { 
        double width; 
        double height; 
    }  _actualSize;
    NSObject<OS_dispatch_semaphore> * _canBeginRenderSemaphore;
    _Atomic int  _cancelAllRendering;
    _Atomic int  _cancelLongRunningRenderingCount;
    struct CGPoint { 
        double x; 
        double y; 
    }  _canvasOffset;
    id /* block */  _canvasOffsetBlock;
    bool  _combineStrokesAllowed;
    double  _contentZoomScale;
    <CAMetalDrawable> * _currentDrawable;
    NSString * _currentInkIdentifier;
    <MTLTexture> * _currentTextureTarget;
    <PKMetalRendererControllerDelegate> * _delegate;
    bool  _dirtyRectMightBeInvalid;
    bool  _drawBitmapEraserMask;
    bool  _fadeOutStrokesMode;
    PKStrokeGenerator * _inputController;
    double  _inputScale;
    bool  _invertColors;
    bool  _isTorndown;
    _Atomic double  _lastFrameDuration;
    _Atomic unsigned long long  _lastPresentationTime;
    PKLinedPaper * _linedPaper;
    double  _liveStrokeDuration;
    double  _liveStrokeElapsedTime;
    struct CGSize { 
        double width; 
        double height; 
    }  _liveStrokeMaxSize;
    bool  _liveStrokeMode;
    NSArray * _liveStrokeStrokes;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _liveStrokeStrokesAnimationBounds;
    PKMetalConfig * _metalConfig;
    struct CGImage { } * _paperTextureImage;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _paperTransform;
    double  _pencilShadowAlpha;
    double  _pencilShadowElevation;
    unsigned long long  _pixelFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
    NSMutableArray * _postPresentCallbacks;
    struct PKRunningStat { 
        long long numValues; 
        long long numValuesOverLimit; 
        double oldM; 
        double newM; 
        double oldS; 
        double newS; 
        double minValue; 
        double maxValue; 
        double limit; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _predictedTouchesLatencyStat;
    long long  _presentationCount;
    CAMetalLayer * _presentationLayer;
    double  _previewStrokeAlpha;
    unsigned long long  _previewStrokeMaxPoints;
    _Atomic int  _queuedRenders;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _readyToBeginRender;
    NSObject<OS_dispatch_queue> * _renderQueue;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _renderTransform;
    PKMetalRenderer * _renderer;
    bool  _renderingForPreview;
    bool  _sixChannelBlending;
    unsigned long long  _sixChannelMetalLayerPixelFormat;
    bool  _sixChannelUsesWideGamut;
    struct PKRunningStat { 
        long long numValues; 
        long long numValuesOverLimit; 
        double oldM; 
        double newM; 
        double oldS; 
        double newS; 
        double minValue; 
        double maxValue; 
        double limit; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _strokeLatencyStat;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _strokeTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _strokeTransformForRenderQueue;
    double  _timestampForDrawingBegan;
    NSObject<OS_dispatch_semaphore> * _updateCycleSemaphore;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _viewScissor;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)signalVSyncSemaphore:(double)arg1 presentationTime:(unsigned long long)arg2;

@end
