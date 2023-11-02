
@interface CAContentStreamFrame : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentRect;
    double  _contentScaleX;
    double  _contentScaleY;
    double  _displayResolution;
    unsigned long long  _displayTime;
    unsigned long long  _dropCount;
    int  _status;
    struct __IOSurface { } * _surface;
    unsigned int  _surfaceId;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentRect;
@property double contentScaleX;
@property double contentScaleY;
@property double displayResolution;
@property unsigned long long displayTime;
@property unsigned long long dropCount;
@property int status;
@property struct __IOSurface { }*surface;
@property unsigned int surfaceId;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (double)contentScaleX;
- (double)contentScaleY;
- (double)displayResolution;
- (unsigned long long)displayTime;
- (unsigned long long)dropCount;
- (void)setContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentScaleX:(double)arg1;
- (void)setContentScaleY:(double)arg1;
- (void)setDisplayResolution:(double)arg1;
- (void)setDisplayTime:(unsigned long long)arg1;
- (void)setDropCount:(unsigned long long)arg1;
- (void)setStatus:(int)arg1;
- (void)setSurface:(struct __IOSurface { }*)arg1;
- (void)setSurfaceId:(unsigned int)arg1;
- (int)status;
- (struct __IOSurface { }*)surface;
- (unsigned int)surfaceId;

@end
