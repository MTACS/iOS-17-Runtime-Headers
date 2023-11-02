
@interface CNSharingProfilePhotoPickerItemCell : UICollectionViewCell {
    UIImageView * _imageView;
    bool  _isSmallScreen;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalSize;
    CNSharingProfilePhotoPickerItem * _pickerItem;
    CAShapeLayer * _selectionStrokeLayer;
}

@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) bool isSmallScreen;
@property (nonatomic) struct CGSize { double x1; double x2; } originalSize;
@property (nonatomic, retain) CNSharingProfilePhotoPickerItem *pickerItem;
@property (nonatomic, retain) CAShapeLayer *selectionStrokeLayer;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSmallScreen;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })originalSize;
- (id)pickerItem;
- (void)prepareForReuse;
- (id)selectionBezierPath;
- (id)selectionStrokeLayer;
- (void)setHighlighted:(bool)arg1;
- (void)setImageView:(id)arg1;
- (void)setIsSmallScreen:(bool)arg1;
- (void)setOriginalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPickerItem:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionStrokeLayer:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithImage:(id)arg1;

@end
