
@interface PKMetalRenderer : NSObject {
    NSArray * _activeCombinedAlternativeStrokes;
    PKStroke * _activeCombinedStroke;
    struct CGSize { 
        double width; 
        double height; 
    }  _actualSize;
    struct vector<(anonymous namespace)::AnimatingStroke, std::allocator<(anonymous namespace)::AnimatingStroke>>="__begin_"^{AnimatingStroke {}  _animatingStrokes;
    double  _backboardPaperMultiply;
    struct CGColor { } * _backgroundColor;
    bool  _combineStrokesAllowed;
    <MTLCommandQueueSPI> * _commandQueue;
    double  _contentZoomScale;
    unsigned long long  _currentCacheSize;
    PKMetalRenderState * _currentRenderState;
    struct PKShaderPipelineConfig { 
        unsigned char framebufferPixelFormats[6]; 
    }  _defaultNonSixChannelPipelineConfig;
    struct PKShaderPipelineConfig { 
        unsigned char framebufferPixelFormats[6]; 
    }  _defaultSixChannelPipelineConfig;
    <MTLDevice> * _device;
    bool  _drawBitmapEraserMask;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _drawableDirtyRect;
    struct CGSize { 
        double width; 
        double height; 
    }  _drawingPixelSize;
    PKMetalFramebuffer * _dummyColorFramebuffer;
    PKMetalFramebuffer * _dummyPaintFramebuffer;
    bool  _edgeMask;
    double  _eraserIndicatorAlpha;
    bool  _fadeOutStrokesMode;
    double  _fromStrokeSpaceScale;
    double  _inputScale;
    bool  _invertColors;
    struct _PKStrokePoint { 
        double timestamp; 
        struct CGPoint { 
            double x; 
            double y; 
        } location; 
        double radius; 
        double aspectRatio; 
        double edgeWidth; 
        double force; 
        double azimuth; 
        double altitude; 
        double opacity; 
        double radius2; 
    }  _lastPointForEraser;
    bool  _lastPointForEraserIsValid;
    struct _PKStrokePoint { 
        double timestamp; 
        struct CGPoint { 
            double x; 
            double y; 
        } location; 
        double radius; 
        double aspectRatio; 
        double edgeWidth; 
        double force; 
        double azimuth; 
        double altitude; 
        double opacity; 
        double radius2; 
    }  _latestPencilShadowPoint;
    double  _latestPencilShadowPointTimestamp;
    PKLinedPaper * _linedPaper;
    struct CGColor { } * _liveRenderingOverrideColor;
    double  _liveStrokeElapsedTime;
    struct CGSize { 
        double width; 
        double height; 
    }  _liveStrokeMaxSize;
    bool  _liveStrokeMode;
    struct vector<PKMetalLiveStrokePaintStrokePoint, std::allocator<PKMetalLiveStrokePaintStrokePoint>> { 
        struct PKMetalLiveStrokePaintStrokePoint {} *__begin_; 
        struct PKMetalLiveStrokePaintStrokePoint {} *__end_; 
        struct __compressed_pair<PKMetalLiveStrokePaintStrokePoint *, std::allocator<PKMetalLiveStrokePaintStrokePoint>> { 
            struct PKMetalLiveStrokePaintStrokePoint {} *__value_; 
        } __end_cap_; 
    }  _liveStrokeStrokePointBuffer;
    PKMetalFramebuffer * _maskMSAAFramebuffer;
    bool  _needRestartWorkaroundForOldIntelDrivers;
    bool  _oneRenderPassForLiveRendering;
    struct { 
        double red; 
        double green; 
        double blue; 
        double alpha; 
    }  _originalBackClearColor;
    struct RendererFramebuffer { 
        PKMetalFramebuffer *framebuffer; 
        bool isNonPurgeable; 
        bool mustBeCleared; 
    }  _originalBackFramebuffer;
    unsigned long long  _originalBackPixelFormat;
    struct RendererFramebuffer { 
        PKMetalFramebuffer *framebuffer; 
        bool isNonPurgeable; 
        bool mustBeCleared; 
    }  _paintAccumulationFramebuffer;
    unsigned long long  _paintAndParticlePixelFormat;
    struct RendererFramebuffer { 
        PKMetalFramebuffer *framebuffer; 
        bool isNonPurgeable; 
        bool mustBeCleared; 
    }  _paintFramebuffer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _paintFramebufferDirtyRect;
    PKMetalFramebuffer * _paintFramebufferMask;
    struct vector<PKMetalPaintStrokePoint, std::allocator<PKMetalPaintStrokePoint>> { 
        struct PKMetalPaintStrokePoint {} *__begin_; 
        struct PKMetalPaintStrokePoint {} *__end_; 
        struct __compressed_pair<PKMetalPaintStrokePoint *, std::allocator<PKMetalPaintStrokePoint>> { 
            struct PKMetalPaintStrokePoint {} *__value_; 
        } __end_cap_; 
    }  _paintStrokePointBuffer;
    <MTLTexture> * _paperTexture;
    struct CGSize { 
        double width; 
        double height; 
    }  _paperTextureSize;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _paperTransform;
    struct vector<PKMetalParticleStrokePoint, std::allocator<PKMetalParticleStrokePoint>> { 
        struct PKMetalParticleStrokePoint {} *__begin_; 
        struct PKMetalParticleStrokePoint {} *__end_; 
        struct __compressed_pair<PKMetalParticleStrokePoint *, std::allocator<PKMetalParticleStrokePoint>> { 
            struct PKMetalParticleStrokePoint {} *__value_; 
        } __end_cap_; 
    }  _particleStrokePointBuffer;
    double  _pencilShadowAlpha;
    double  _pencilShadowElevation;
    PKMetalPencilShadowRenderer * _pencilShadowRenderer;
    unsigned long long  _pixelFormat;
    double  _previewStrokeAlpha;
    double  _previewStrokeMaxPoints;
    <MTLBuffer> * _randomNumberBuffer;
    unsigned long long  _renderMaskMSAASampleCount;
    PKMetalResourceHandler * _resourceHandler;
    struct shared_ptr<std::vector<(anonymous namespace)::StrokeVertex>>="__ptr_"^v"__cntrl_"^{__shared_weak_count {}  _sharedStrokeVertexBuffer;
    bool  _shouldClearOriginalBackFramebuffer;
    bool  _sixChannelBlending;
    bool  _sixChannelCanvasHasContentTexture;
    struct RendererFramebuffer { 
        PKMetalFramebuffer *framebuffer; 
        bool isNonPurgeable; 
        bool mustBeCleared; 
    }  _sixChannelMultiplyFramebuffer;
    bool  _solidColorBackboard;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _strokeTransform;
    MTKTextureLoader * _textureLoader;
    bool  _useComputeRenderCaches;
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
    struct vector<_PKStrokePoint, std::allocator<_PKStrokePoint>> { 
        struct _PKStrokePoint {} *__begin_; 
        struct _PKStrokePoint {} *__end_; 
        struct __compressed_pair<_PKStrokePoint *, std::allocator<_PKStrokePoint>> { 
            struct _PKStrokePoint {} *__value_; 
        } __end_cap_; 
    }  previewStrokePoints;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;

@end
