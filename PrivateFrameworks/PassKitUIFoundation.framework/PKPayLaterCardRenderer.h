
@interface PKPayLaterCardRenderer : NSObject {
    <MTLRenderPipelineState> * _backgroundPipelineState;
    <MTLCommandQueue> * _commandQueue;
    unsigned long long  _drawableHeight;
    unsigned long long  _drawableWidth;
    struct { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*vector; 
    }  _gravity;
    <MTLRenderPipelineState> * _instancePipelineState;
    double  _instancePlaneDepthScaleFactor;
    <MTLBuffer> * _instanceUniforms;
    <MTLBuffer> * _instanceVertexCoords;
    NSMutableArray * _instances;
    bool  _invalidated;
    PKMetalRenderLoop * _loop;
    PKPayLaterCardMagnitudes * _magnitudes;
    double  _minSeparationAtInstancePlane;
    <MTLTexture> * _overlay;
    double  _overlayAlpha;
    PKTextureLoader * _overlayLoader;
    <MTLRenderPipelineState> * _overlayPipelineState;
    bool  _presented;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _projectionMatrix;
    MTLRenderPassDescriptor * _renderPassDescriptor;
    struct { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*vector; 
    }  _rotation;
    double  _smoothedPresentedAmount;
    double  _smoothedSpacing;
    double  _smoothedViewZoom;
    double  _smoothedWaveAmount;
    <MTLBuffer> * _uniform;
    <MTLBuffer> * _vertices;
    double  _viewHalfHeightAtInstancePlane;
    double  _viewHalfWidthAtInstancePlane;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _viewMatrix;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
