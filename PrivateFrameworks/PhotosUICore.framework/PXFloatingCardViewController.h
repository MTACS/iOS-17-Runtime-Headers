
@interface PXFloatingCardViewController : UIViewController {
    UIVisualEffectView * _backgroundVisualEffectView;
    UIView * _contentView;
    UIViewController * _contentViewController;
    <PXFloatingCardViewControllerDelegate> * _delegate;
    _UIGrabber * _grabber;
    UIView * _grabberFooterView;
    UILabel * _headerLabel;
    UIView * _headerView;
    NSLayoutConstraint * _heightConstraint;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, retain) UIVisualEffectView *backgroundVisualEffectView;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) UIViewController *contentViewController;
@property (nonatomic) <PXFloatingCardViewControllerDelegate> *delegate;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } grabAreaBounds;
@property (nonatomic, retain) _UIGrabber *grabber;
@property (nonatomic, readonly) UIView *grabberFooterView;
@property (nonatomic, retain) UILabel *headerLabel;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_dismissTapped;
- (id)_systemFontWithTextStyle:(long long)arg1 weight:(double)arg2;
- (id)backgroundView;
- (id)backgroundVisualEffectView;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)contentView;
- (id)contentViewController;
- (id)delegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })grabAreaBounds;
- (id)grabber;
- (id)grabberFooterView;
- (id)headerLabel;
- (id)headerView;
- (id)heightConstraint;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)removeFromParentViewController;
- (void)setBackgroundVisualEffectView:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGrabber:(id)arg1;
- (void)setHeaderLabel:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
