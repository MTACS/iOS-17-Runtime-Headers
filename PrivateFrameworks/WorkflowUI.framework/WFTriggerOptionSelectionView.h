
@interface WFTriggerOptionSelectionView : UIView {
    UIImage * _defaultImage;
    UIColor * _defaultImageTintColor;
    bool  _highlighted;
    UIImageView * _imageView;
    UILabel * _label;
    UIImage * _selectedImage;
    UIColor * _selectedStateImageTintColor;
    WFCircularGlyphView * _selectedView;
    WFCircularGlyphView * _unselectedView;
}

@property (nonatomic, retain) UIImage *defaultImage;
@property (nonatomic, retain) UIColor *defaultImageTintColor;
@property (nonatomic) bool highlighted;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic) bool selected;
@property (nonatomic, retain) UIImage *selectedImage;
@property (nonatomic, retain) UIColor *selectedStateImageTintColor;
@property (nonatomic, readonly) WFCircularGlyphView *selectedView;
@property (nonatomic, readonly) WFCircularGlyphView *unselectedView;

+ (double)scaledValueForValue:(double)arg1;

- (void).cxx_destruct;
- (id)defaultImage;
- (id)defaultImageTintColor;
- (bool)highlighted;
- (id)imageView;
- (id)init;
- (id)label;
- (bool)selected;
- (id)selectedImage;
- (id)selectedStateImageTintColor;
- (id)selectedView;
- (void)setDefaultImage:(id)arg1;
- (void)setDefaultImageTintColor:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedImage:(id)arg1;
- (void)setSelectedStateImageTintColor:(id)arg1;
- (id)unselectedView;
- (void)updateAlpha;

@end
