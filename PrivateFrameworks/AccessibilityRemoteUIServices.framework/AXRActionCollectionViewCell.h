
@interface AXRActionCollectionViewCell : UICollectionViewCell <UILargeContentViewerItem> {
    UIImageView * _imageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *largeContentImage;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } largeContentImageInsets;
@property (nonatomic, readonly, copy) NSString *largeContentTitle;
@property (nonatomic, readonly) bool scalesLargeContentImage;
@property (nonatomic, readonly) bool showsLargeContentViewer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (id)largeContentImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })largeContentImageInsets;
- (id)largeContentTitle;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (bool)scalesLargeContentImage;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1 title:(id)arg2;
- (bool)showsLargeContentViewer;

@end
