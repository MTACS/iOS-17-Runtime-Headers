
@interface HUViewControllerTableViewCell : UITableViewCell <HUViewControllerCell> {
    bool  _ignoreRounding;
    UIViewController * _parentViewController;
    UIViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreRounding;
@property (nonatomic) UIViewController *parentViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_removeFromParentViewControllerAndClearProperty:(bool)arg1;
- (void)addToParentViewController:(id)arg1;
- (bool)ignoreRounding;
- (void)layoutSubviews;
- (id)parentViewController;
- (void)prepareForReuse;
- (void)removeFromParentViewController;
- (void)setIgnoreRounding:(bool)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)viewController;

@end
