
@interface CAContentStreamOptions : NSObject <NSCopying> {
    unsigned char  _ChromaLocation;
    unsigned char  _YCbCrMatrix;
    bool  _alwaysScaleToFit;
    struct CGColor { } * _backgroundColorKey;
    struct CGColorSpace { } * _colorSpaceKey;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _destinationRect;
    struct CGSize { 
        double width; 
        double height; 
    }  _frameSize;
    double  _minimumFrameTime;
    unsigned int  _pixelFormat;
    bool  _preserveAspectRatioKey;
    unsigned int  _queueDepth;
    bool  _showCursorKey;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    unsigned int  _targetDisplayId;
}

@property unsigned char ChromaLocation;
@property unsigned char YCbCrMatrix;
@property bool alwaysScaleToFit;
@property struct CGColor { }*backgroundColorKey;
@property struct CGColorSpace { }*colorSpaceKey;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } destinationRect;
@property struct CGSize { double x1; double x2; } frameSize;
@property double minimumFrameTime;
@property unsigned int pixelFormat;
@property bool preserveAspectRatioKey;
@property unsigned int queueDepth;
@property bool showCursorKey;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property unsigned int targetDisplayId;

- (unsigned char)ChromaLocation;
- (unsigned char)YCbCrMatrix;
- (bool)alwaysScaleToFit;
- (struct CGColor { }*)backgroundColorKey;
- (struct CGColorSpace { }*)colorSpaceKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })destinationRect;
- (struct CGSize { double x1; double x2; })frameSize;
- (double)minimumFrameTime;
- (unsigned int)pixelFormat;
- (bool)preserveAspectRatioKey;
- (unsigned int)queueDepth;
- (void)setAlwaysScaleToFit:(bool)arg1;
- (void)setBackgroundColorKey:(struct CGColor { }*)arg1;
- (void)setChromaLocation:(unsigned char)arg1;
- (void)setColorSpaceKey:(struct CGColorSpace { }*)arg1;
- (void)setDestinationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimumFrameTime:(double)arg1;
- (void)setPixelFormat:(unsigned int)arg1;
- (void)setPreserveAspectRatioKey:(bool)arg1;
- (void)setQueueDepth:(unsigned int)arg1;
- (void)setShowCursorKey:(bool)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTargetDisplayId:(unsigned int)arg1;
- (void)setYCbCrMatrix:(unsigned char)arg1;
- (bool)showCursorKey;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (unsigned int)targetDisplayId;

@end
