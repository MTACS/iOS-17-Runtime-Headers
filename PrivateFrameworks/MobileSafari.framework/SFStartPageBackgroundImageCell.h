
@interface SFStartPageBackgroundImageCell : UICollectionViewCell {
    UIButton * _clearButton;
    <SFStartPageBackgroundImageCellDelegate> * _delegate;
    UIView * _highlightView;
    UIImageView * _imageView;
    UIView * _selectionIndicator;
}

@property (nonatomic) <SFStartPageBackgroundImageCellDelegate> *delegate;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool showsCustomImageControls;
@property (nonatomic) bool showsSelectionRing;

- (void).cxx_destruct;
- (id)delegate;
- (void)didSelectClearButton:(id)arg1;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setShowsCustomImageControls:(bool)arg1;
- (void)setShowsSelectionRing:(bool)arg1;
- (bool)showsCustomImageControls;
- (bool)showsSelectionRing;
- (void)tintColorDidChange;
- (void)updateSelectionIndicatorColor;

@end
