
@interface AVVideoCompositionRenderContextInternal : NSObject {
    NSDictionary * _basisProperties;
    NSString * _blendingTransferFunction;
    struct OpaqueFigSimpleMutex { } * _bufferPoollInitMutex;
    struct __CFDictionary { } * _cleanApertureDict;
    NSDictionary * _clientRequiredPixelBufferAttributes;
    NSDictionary * _destinationDesiredPixelBufferAttributes;
    NSString * _destinationDesiredPixelBufferColorPrimaries;
    NSString * _destinationDesiredPixelBufferTransferFunction;
    NSString * _destinationDesiredPixelBufferYCbCrMatrix;
    struct { 
        int width; 
        int height; 
    }  _destinationPixelBufferDimensions;
    struct { 
        double left; 
        double top; 
        double right; 
        double bottom; 
    }  _edgeWidths;
    bool  _highQualityRendering;
    struct { 
        long long horizontalSpacing; 
        long long verticalSpacing; 
    }  _pixelAspectRatio;
    struct __CFDictionary { } * _pixelAspectRatioDict;
    struct __CVPixelBufferPool { } * _pixelBufferPool;
    NSObject<OS_dispatch_queue> * _pixelBufferPoolQ;
    float  _renderScale;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _renderTransform;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    AVVideoComposition * _videoComposition;
    int  pixelFormatFamily;
}

- (void)_willDeallocOrFinalize;
- (void)dealloc;

@end
