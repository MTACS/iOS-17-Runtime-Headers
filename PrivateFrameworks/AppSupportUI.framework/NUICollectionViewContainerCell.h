
@interface NUICollectionViewContainerCell : UICollectionViewCell {
    NUIContainerView * _containerView;
}

@property (nonatomic, readonly) NUIContainerView *containerView;

+ (Class)_contentViewClass;
+ (Class)containerViewClass;

- (void).cxx_destruct;
- (id)containerView;
- (void)containerViewDidLoad;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end
