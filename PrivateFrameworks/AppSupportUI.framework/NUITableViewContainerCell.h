
@interface NUITableViewContainerCell : UITableViewCell {
    NUIContainerView * _containerView;
}

@property (nonatomic, readonly) NUIContainerView *containerView;

+ (Class)containerViewClass;

- (void).cxx_destruct;
- (id)containerView;
- (void)containerViewDidLoad;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end
