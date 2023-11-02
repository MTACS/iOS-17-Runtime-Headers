
@interface PKRendererTile : NSObject <NSCopying> {
    _Atomic double  _cachedContentsScale;
    double  _contentsScale;
    long long  _currentlyRenderingCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _drawingFrame;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _drawingTransform;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    PKMetalFramebuffer * _framebuffer;
    bool  _framebufferIsLocked;
    bool  _hidden;
    NSUUID * _identifier;
    _Atomic double  _lastUsedTimestamp;
    long long  _level;
    PKMetalFramebuffer * _multiplyFramebuffer;
    bool  _multiplyFramebufferIsLocked;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    double  _opacity;
    bool  _outOfDate;
    _Atomic long long  _renderCount;
    NSArray * _renderedStrokes;
    bool  _sixChannelMode;
    CALayer * _tileLayer;
    CALayer * _tileMultiplyLayer;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;

@end
