
@interface UIAccessibilityHUDItem : NSObject <NSCopying> {
    long long  _customUserInterfaceStyle;
    UIView * _customView;
    bool  _disabledAppearance;
    bool  _flattenImage;
    UIImage * _image;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _imageInsets;
    bool  _scaleImage;
    NSString * _title;
}

@property (nonatomic) long long customUserInterfaceStyle;
@property (nonatomic, retain) UIView *customView;
@property (nonatomic) bool disabledAppearance;
@property (nonatomic) bool flattenImage;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } imageInsets;
@property (nonatomic) bool scaleImage;
@property (nonatomic, copy) NSString *title;

+ (id)HUDItemForBarButtonItem:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3 isBackButton:(bool)arg4;
+ (id)HUDItemForTabBarItem:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)customUserInterfaceStyle;
- (id)customView;
- (bool)disabledAppearance;
- (bool)flattenImage;
- (unsigned long long)hash;
- (id)image;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageInsets;
- (id)initWithCustomView:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 imageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (id)initWithTitle:(id)arg1 image:(id)arg2 imageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 scaleImage:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)scaleImage;
- (void)setCustomUserInterfaceStyle:(long long)arg1;
- (void)setCustomView:(id)arg1;
- (void)setDisabledAppearance:(bool)arg1;
- (void)setFlattenImage:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setScaleImage:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
