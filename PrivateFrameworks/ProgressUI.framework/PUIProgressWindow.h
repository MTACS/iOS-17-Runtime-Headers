
@interface PUIProgressWindow : NSObject <CALayerDelegate> {
    struct CGImage { } * _appleLogo;
    CAContext * _context;
    float  _currentProgress;
    int  _deviceClass;
    float  _displayOrientation;
    float  _displayScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _displaySize;
    PUIEnvironment * _environment;
    NSString * _errorDescription;
    bool  _forceInverted;
    id  _framebufferListenerToken;
    struct CGSize { 
        double width; 
        double height; 
    }  _framebufferSize;
    struct __IOSurface { } * _ioSurface;
    CALayer * _ioSurfaceLayer;
    bool  _isSecurityResearchDevice;
    CALayer * _layer;
    struct CGSize { 
        double width; 
        double height; 
    }  _layerPositioningSize;
    double  _progressHeight;
    CALayer * _progressLayer;
    double  _progressWidth;
    double  _progressXDelta;
    double  _progressYDelta;
    bool  _renderWithIOSurface;
    int  _screenClass;
    bool  _showsProgressBar;
    bool  _sideways;
    CATextLayer * _statusTextLayer;
    bool  _weCreatedTheContext;
    bool  _white;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *errorDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CALayer *layer;
@property (readonly) Class superclass;

+ (id)_errorDescriptionForAppleLogoNotFound;
+ (id)_errorDescriptionForUnknownDeviceClass;
+ (id)_errorDescriptionForUnsupportedScreenClass;
+ (bool)_usesPreBoardAppearance;
+ (void)setUsesPreBoardAppearance;

- (void).cxx_destruct;
- (void)_appendErrorDescriptionWithString:(id)arg1;
- (const char *)_appleTVProductSuffix;
- (void)_collectDisplayInfo;
- (struct CGColor { }*)_copyBlackCGColorRef;
- (struct CGColor { }*)_copyCGColorRefWithComponents:(const double*)arg1;
- (struct CGColor { }*)_copyWhiteCGColorRef;
- (void)_createContext;
- (struct CGImage { }*)_createImageWithName:(const char *)arg1 scale:(int)arg2 displayHeight:(int)arg3;
- (void)_createLayer;
- (void)_drawProgressLayerInContext:(struct CGContext { }*)arg1;
- (id)_initWithOptions:(unsigned long long)arg1 contextLevel:(float)arg2 appearance:(long long)arg3 environment:(id)arg4;
- (void)_layoutScreen;
- (const char *)_productSuffix;
- (void)_unsupportedScreenClass;
- (void)_updateIOSurface;
- (void)_updateLayerForFramebufferSize:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)errorDescription;
- (id)init;
- (id)initWithForceInverted:(bool)arg1;
- (id)initWithOptions:(unsigned long long)arg1 contextLevel:(float)arg2 appearance:(long long)arg3;
- (id)initWithProgressBarVisibility:(bool)arg1;
- (id)initWithProgressBarVisibility:(bool)arg1 context:(id)arg2;
- (id)initWithProgressBarVisibility:(bool)arg1 createContext:(bool)arg2 contextLevel:(float)arg3 appearance:(long long)arg4;
- (id)initWithProgressBarVisibility:(bool)arg1 level:(float)arg2;
- (id)initWithProgressBarVisibility:(bool)arg1 level:(float)arg2 forceInverted:(bool)arg3;
- (id)layer;
- (void)setProgressValue:(float)arg1;
- (void)setStatusText:(id)arg1;
- (void)setVisible:(bool)arg1;

@end
