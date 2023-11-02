
@interface ICAttachmentWebModelIcon : NSObject {
    UIImage * _image;
    double  _scale;
    bool  _scaleImageToIconSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSURL * _url;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic) double scale;
@property (nonatomic) bool scaleImageToIconSize;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)description;
- (id)image;
- (id)initWithFallbackURL:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithImageURL:(id)arg1;
- (id)initWithURL:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (double)scale;
- (bool)scaleImageToIconSize;
- (void)setImage:(id)arg1;
- (void)setScale:(double)arg1;
- (void)setScaleImageToIconSize:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUrl:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)url;

@end
