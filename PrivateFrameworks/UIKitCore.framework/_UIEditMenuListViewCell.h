
@interface _UIEditMenuListViewCell : UICollectionViewCell {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _arrowEdgeInsets;
    NSArray * _contentConstraints;
    UIStackView * _contentStackView;
    UIView * _customView;
    UIImageView * _imageView;
    _UIEditMenuListItem * _item;
    double  _maximumContentWidth;
    NSLayoutConstraint * _maximumWidthConstraint;
    NSLayoutConstraint * _minimumWidthConstraint;
    _UISlotView * _securePasteButtonSlotView;
    NSLayoutConstraint * _slotViewCenterYConstraint;
    UILabel * _titleLabel;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } arrowEdgeInsets;
@property (nonatomic, readonly) NSArray *contentConstraints;
@property (nonatomic, readonly) UIStackView *contentStackView;
@property (nonatomic, readonly) UIView *customView;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, retain) _UIEditMenuListItem *item;
@property (nonatomic) double maximumContentWidth;
@property (nonatomic, readonly) NSLayoutConstraint *maximumWidthConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *minimumWidthConstraint;
@property (nonatomic, readonly) _UISlotView *securePasteButtonSlotView;
@property (nonatomic, readonly) NSLayoutConstraint *slotViewCenterYConstraint;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (struct CGSize { double x1; double x2; })layoutSizeForItem:(id)arg1 traitCollection:(id)arg2 containerSize:(struct CGSize { double x1; double x2; })arg3;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)_createViewHierarchy;
- (void)_hideContents;
- (void)_overlaySlotView:(id)arg1;
- (unsigned int)_secureName;
- (void)_setupSlotView;
- (void)_updateBackgroundForCurrentState;
- (void)_updateConstraints;
- (void)_updateFont;
- (void)_updateLayoutMargins;
- (bool)_wantsPasteSlotView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arrowEdgeInsets;
- (id)contentConstraints;
- (id)contentStackView;
- (id)customView;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (double)maximumContentWidth;
- (id)maximumWidthConstraint;
- (id)minimumWidthConstraint;
- (void)prepareForReuse;
- (id)securePasteButtonSlotView;
- (void)setArrowEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setMaximumContentWidth:(double)arg1;
- (id)slotViewCenterYConstraint;
- (id)titleLabel;

@end
