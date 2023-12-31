
@interface SUSectionButton : NSObject <NSCopying> {
    NSString * _accessibilityTitle;
    NSString * _displayTitle;
    UIImage * _image;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _imageInsets;
    NSURL * _imageURL;
    float  _imageURLScale;
    long long  _tag;
}

@property (nonatomic, copy) NSString *accessibilityTitle;
@property (nonatomic, copy) NSString *displayTitle;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } imageInsets;
@property (nonatomic, copy) NSURL *imageURL;
@property (nonatomic) float imageURLScale;
@property (nonatomic) long long tag;

- (id)accessibilityTitle;
- (void)applyToBarButtonItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)displayTitle;
- (id)image;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageInsets;
- (id)imageURL;
- (float)imageURLScale;
- (id)initWithSectionButtonDictionary:(id)arg1;
- (void)setAccessibilityTitle:(id)arg1;
- (void)setDisplayTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setImageURL:(id)arg1;
- (void)setImageURLScale:(float)arg1;
- (void)setTag:(long long)arg1;
- (long long)tag;

@end
