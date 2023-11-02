
@interface PRInlineComplicationGalleryItemCell : UICollectionViewListCell {
    UICellAccessory * _checkmarkAccessory;
    UIViewController * _contentViewController;
    UIImageView * _iconImageView;
    UILabel * _label;
    NSLayoutConstraint * _leadingConstraint;
    bool  _separatorVisible;
    UIView * _widgetContainerView;
}

@property (nonatomic, retain) UIViewController *contentViewController;
@property (nonatomic, retain) UIImage *iconImage;
@property (getter=isSeparatorVisible, nonatomic) bool separatorVisible;
@property (nonatomic) bool showsCheckmark;
@property (nonatomic, retain) NSString *title;

+ (double)checkmarkInset;
+ (double)suggestionInset;

- (void).cxx_destruct;
- (id)contentViewController;
- (id)iconImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSeparatorVisible;
- (void)prepareForReuse;
- (void)setContentViewController:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setSeparatorVisible:(bool)arg1;
- (void)setShowsCheckmark:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)showsCheckmark;
- (id)title;

@end
