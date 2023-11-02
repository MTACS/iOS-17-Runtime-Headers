
@interface PUImportAddToAlbumsToolbarView : UIView {
    <PUImportAddToAlbumsToolbarViewDelegate> * _delegate;
    UIButton * _destinationButton;
    NSString * _destinationDescriptionTitle;
    UILabel * _destinationLabel;
    PHPhotoLibrary * _photoLibrary;
    UILabel * _titleLabel;
}

@property (nonatomic) <PUImportAddToAlbumsToolbarViewDelegate> *delegate;
@property (nonatomic, readonly) UIButton *destinationButton;
@property (nonatomic, retain) NSString *destinationDescriptionTitle;
@property (nonatomic, retain) UILabel *destinationLabel;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_animateButtonAlpha:(double)arg1;
- (id)_destinationDescription;
- (void)_setupButton;
- (void)_setupSubviews;
- (void)_updateButtonText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)buttonPressed:(id)arg1;
- (void)buttonTouchDown:(id)arg1;
- (void)buttonTouchDragInside:(id)arg1;
- (void)buttonTouchDragOutside:(id)arg1;
- (id)delegate;
- (id)destinationButton;
- (id)destinationDescriptionTitle;
- (id)destinationLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 photoLibrary:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAccessibilityElement;
- (id)photoLibrary;
- (void)setDelegate:(id)arg1;
- (void)setDestinationDescriptionTitle:(id)arg1;
- (void)setDestinationLabel:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end
