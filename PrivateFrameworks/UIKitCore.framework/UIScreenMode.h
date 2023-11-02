
@interface UIScreenMode : NSObject {
    bool  _isMainScreen;
    FBSDisplayMode * _mode;
    double  _scale;
}

@property (nonatomic, readonly) double pixelAspectRatio;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (id)_screenModeForDisplayMode:(id)arg1 mainScreen:(bool)arg2 actualDisplayScale:(double)arg3;

- (void).cxx_destruct;
- (id)_displayMode;
- (struct CGSize { double x1; double x2; })_sizeWithLevel:(unsigned long long)arg1;
- (id)description;
- (id)initWithDisplayMode:(id)arg1 mainScreen:(bool)arg2 actualDisplayScale:(double)arg3;
- (double)pixelAspectRatio;
- (struct CGSize { double x1; double x2; })size;
- (id)valueForKey:(id)arg1;

@end
