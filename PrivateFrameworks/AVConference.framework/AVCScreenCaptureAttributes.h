
@interface AVCScreenCaptureAttributes : NSObject {
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
    long long  _contentType;
    unsigned int  _displayID;
    float  _pointPixelScale;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentRect;
@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly) unsigned int displayID;
@property (nonatomic, readonly) float pointPixelScale;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (long long)contentType;
- (void)dealloc;
- (unsigned int)displayID;
- (id)initWithConfiguration:(id)arg1;
- (float)pointPixelScale;

@end
