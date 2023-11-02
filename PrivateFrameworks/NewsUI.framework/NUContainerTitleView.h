
@interface NUContainerTitleView : UIView <TUNavigationBarCompressible> {
    UIView * _contentView;
}

@property (nonatomic) double contentAlpha;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_centeringReferenceView;
- (double)contentAlpha;
- (id)contentView;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setContentAlpha:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
