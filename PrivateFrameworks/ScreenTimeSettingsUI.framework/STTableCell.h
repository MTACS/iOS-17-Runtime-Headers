
@interface STTableCell : PSTableCell {
    NSMutableArray * _childViewControllers;
    UILayoutGuide * _contentLayoutGuide;
    UIViewController * _parentViewController;
    NSArray * _rtlContentLayoutGuideConstraints;
}

@property (readonly) NSMutableArray *childViewControllers;
@property (nonatomic, readonly) UILayoutGuide *contentLayoutGuide;
@property UIViewController *parentViewController;
@property (nonatomic, copy) NSArray *rtlContentLayoutGuideConstraints;

- (void).cxx_destruct;
- (bool)canReload;
- (id)childViewControllers;
- (id)contentLayoutGuide;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (id)parentViewController;
- (id)rtlContentLayoutGuideConstraints;
- (void)setParentViewController:(id)arg1;
- (void)setRtlContentLayoutGuideConstraints:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
