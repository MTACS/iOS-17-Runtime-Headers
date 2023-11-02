
@interface WAKWindow : WAKResponder {
    struct CGSize { 
        double width; 
        double height; 
    }  _availableScreenSize;
    WAKView * _contentView;
    bool  _entireWindowVisibleForTesting;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _exposedScrollViewRect;
    struct Lock { 
        struct Atomic<unsigned char> { 
            struct atomic<unsigned char> { 
                struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { 
                    _Atomic unsigned char __a_value; 
                } __a_; 
            } value; 
        } m_byte; 
    }  _exposedScrollViewRectLock;
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
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frozenVisibleRect;
    CALayer * _hostLayer;
    bool  _isInSnapshottingPaint;
    WAKView * _nextResponder;
    WAKView * _responderView;
    CALayer * _rootLayer;
    double  _screenScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _screenSize;
    void * _tileCache;
    bool  _useOrientationDependentFontAntialiasing;
    bool  _visible;
}

@property (nonatomic) struct CGImage { }*contentReplacementImage;
@property (nonatomic) bool useOrientationDependentFontAntialiasing;

+ (id)currentEvent;
+ (bool)hasLandscapeOrientation;
+ (void)setOrientationProvider:(id)arg1;

- (id).cxx_construct;
- (id)_newFirstResponderAfterResigning;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleRectRespectingMasksToBounds:(bool)arg1;
- (struct CGSize { double x1; double x2; })availableScreenSize;
- (void)close;
- (struct CGImage { }*)contentReplacementImage;
- (id)contentView;
- (struct CGPoint { double x1; double x2; })convertBaseToScreen:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectFromScreen:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectToScreen:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertScreenToBase:(struct CGPoint { double x1; double x2; })arg1;
- (float)currentTileScale;
- (void)dealloc;
- (id)description;
- (void)didRotate;
- (void)displayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dumpTiles;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })exposedScrollViewRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })extendedVisibleRect;
- (id)firstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)hostLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayer:(id)arg1;
- (bool)isInSnapshottingPaint;
- (bool)isKeyWindow;
- (bool)isVisible;
- (bool)keepsZoomedOutTiles;
- (unsigned long long)keyViewSelectionDirection;
- (void)layoutTiles;
- (void)layoutTilesNow;
- (void)layoutTilesNowForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)makeFirstResponder:(id)arg1;
- (void)makeKeyWindow;
- (id)recursiveDescription;
- (void)removeAllNonVisibleTiles;
- (void)removeAllTiles;
- (void)removeForegroundTiles;
- (bool)resignFirstResponder;
- (id)rootLayer;
- (double)screenScale;
- (struct CGSize { double x1; double x2; })screenSize;
- (void)sendEvent:(id)arg1;
- (void)sendEventSynchronously:(id)arg1;
- (void)sendMouseMoveEvent:(id)arg1 contentChange:(int*)arg2;
- (void)setAvailableScreenSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentReplacementImage:(struct CGImage { }*)arg1;
- (void)setContentView:(id)arg1;
- (void)setCurrentTileScale:(float)arg1;
- (void)setEntireWindowVisibleForTesting:(bool)arg1;
- (void)setExposedScrollViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 display:(bool)arg2;
- (void)setIsInSnapshottingPaint:(bool)arg1;
- (void)setKeepsZoomedOutTiles:(bool)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRootLayer:(id)arg1;
- (void)setScreenScale:(double)arg1;
- (void)setScreenSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTilesOpaque:(bool)arg1;
- (void)setTilingDirection:(int)arg1;
- (void)setTilingMode:(int)arg1;
- (void)setUseOrientationDependentFontAntialiasing:(bool)arg1;
- (void)setVisible:(bool)arg1;
- (void)setZoomedOutTileScale:(float)arg1;
- (void*)tileCache;
- (bool)tilesOpaque;
- (int)tilingDirection;
- (int)tilingMode;
- (bool)useOrientationDependentFontAntialiasing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (void)willRotate;
- (float)zoomedOutTileScale;

@end
