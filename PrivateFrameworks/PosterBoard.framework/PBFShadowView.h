
@interface PBFShadowView : UIView <PBFShadowMetricsProviding> {
    double  _cornerRadius;
    long long  _shadowType;
    UIView * _shadowView;
}

@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long shadowType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureForShadowType;
- (double)cornerRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameWithContentWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setCornerRadius:(double)arg1;
- (void)setShadowType:(long long)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })shadowSupplementaryTransform;
- (long long)shadowType;

@end
