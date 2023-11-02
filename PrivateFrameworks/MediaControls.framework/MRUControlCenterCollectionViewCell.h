
@interface MRUControlCenterCollectionViewCell : UICollectionViewCell <UIPointerInteractionDelegate> {
    MRUNowPlayingCellContentView * _cellContentView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentEdgeInsets;
    double  _cornerRadius;
    MediaControlsMaterialView * _materialView;
    UIView * _transformView;
}

@property (nonatomic, readonly) MRUNowPlayingCellContentView *cellContentView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentEdgeInsets;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MediaControlsMaterialView *materialView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *transformView;

- (void).cxx_destruct;
- (id)cellContentView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (double)cornerRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)materialView;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)prepareForReuse;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMaterialView:(id)arg1;
- (void)setTransformView:(id)arg1;
- (void)setTransitionTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 isVisible:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)transformView;

@end
