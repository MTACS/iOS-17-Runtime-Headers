
@interface VCPixelBufferOverlay : VCObject {
    struct tagVCOverlaySource { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; long long x2; unsigned int x3; unsigned char x4; int x5; int x6; struct tagVCOverlaySourceInfo {} *x7; struct tagVCOverlaySourceInfo {} *x8; struct tagVCOverlaySourceInfo {} *x9; } * _audioInfo;
    struct tagVCPixelBufferOverlayConfig { 
        bool attributesHaveChanged; 
        bool overlayIsEnabled; 
        bool isLocalVideo; 
        float averageFrameRate; 
        float currentFrameRate; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } currentContentsRect; 
        struct CGSize { 
            double width; 
            double height; 
        } currentDimensions; 
        struct __CFDictionary {} *storedAttributes; 
        int camera; 
    }  _currentDetails;
    int  _currentHeight;
    int  _currentLongestLine;
    unsigned char  _currentMessageVerbosity;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentVRADimensions;
    int  _currentWidth;
    double  _lastDefaultsReadTime;
    double  _lastStringAttributesReadTime;
    struct __CFString { } * _mutableDisplayText;
    struct tagVCOverlaySource { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; long long x2; unsigned int x3; unsigned char x4; int x5; int x6; struct tagVCOverlaySourceInfo {} *x7; struct tagVCOverlaySourceInfo {} *x8; struct tagVCOverlaySourceInfo {} *x9; } * _networkInfo;
    NSObject<OS_dispatch_queue> * _stateQueue;
    struct __CFDictionary { } * _stringAttributes;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _textFrame;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    long long  _videoActivationTimestamp;
    struct tagVCOverlaySource { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; long long x2; unsigned int x3; unsigned char x4; int x5; int x6; struct tagVCOverlaySourceInfo {} *x7; struct tagVCOverlaySourceInfo {} *x8; struct tagVCOverlaySourceInfo {} *x9; } * _videoInfo;
}

@property struct tagVCPixelBufferOverlayConfig { bool x1; bool x2; bool x3; float x4; float x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; struct __CFDictionary {} *x8; int x9; } currentDetails;

- (struct tagVCPixelBufferOverlayConfig { bool x1; bool x2; bool x3; float x4; float x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; struct __CFDictionary {} *x8; int x9; })currentDetails;
- (void)dealloc;
- (id)init;
- (void)setCurrentDetails:(struct tagVCPixelBufferOverlayConfig { bool x1; bool x2; bool x3; float x4; float x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; struct __CFDictionary {} *x8; int x9; })arg1;

@end
