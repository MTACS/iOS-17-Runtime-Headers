
@interface PRWidgetSuggestionCell : UICollectionViewCell {
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    UIImageView * _iconImageView;
    SBHWidgetWrapperViewController * _widgetWrapperViewController;
}

@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic, retain) SBHWidgetWrapperViewController *widgetWrapperViewController;

- (void).cxx_destruct;
- (bool)_descendantsShouldHighlight;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)iconImage;
- (id)iconImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIconImage:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setWidgetWrapperViewController:(id)arg1;
- (id)widgetWrapperViewController;

@end
