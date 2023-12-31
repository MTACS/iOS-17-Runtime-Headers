
@interface _UIInterfaceActionGroupHeaderScrollView : _UIAlertControllerShadowedScrollView {
    NSArray * _constraints;
    UIView * _contentView;
}

@property (nonatomic, readonly) UIView *contentView;

- (void).cxx_destruct;
- (double)_contentFitCanScrollThreshold;
- (void)accessoryInsetsDidChange:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)contentView;
- (id)initWithContentView:(id)arg1;
- (void)updateConstraints;

@end
