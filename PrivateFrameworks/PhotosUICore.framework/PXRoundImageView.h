
@interface PXRoundImageView : UIImageView {
    int  _currentRequestID;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentRequestSize;
    CALayer * _imageLayer;
    PHPerson * _representedPerson;
}

@property (nonatomic) int currentRequestID;
@property (nonatomic) struct CGSize { double x1; double x2; } currentRequestSize;
@property (nonatomic, readonly) CALayer *imageLayer;
@property (nonatomic, retain) PHPerson *representedPerson;

- (void).cxx_destruct;
- (void)_updateCorner;
- (void)_updateImageForFaceCropRequestID:(int)arg1 image:(id)arg2 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 forceUpdate:(bool)arg4 error:(id)arg5;
- (void)_updateImageIfNeeded;
- (int)currentRequestID;
- (struct CGSize { double x1; double x2; })currentRequestSize;
- (double)displayScale;
- (id)imageLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)representedPerson;
- (void)setCurrentRequestID:(int)arg1;
- (void)setCurrentRequestSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRepresentedPerson:(id)arg1;

@end
