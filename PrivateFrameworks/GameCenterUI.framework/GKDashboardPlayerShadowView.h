
@interface GKDashboardPlayerShadowView : UIView {
    UICollectionViewCell * _parentCell;
    GKDashboardPlayerPhotoView * _photoView;
}

@property (nonatomic) bool dimmed;
@property (nonatomic, readonly) bool isUsingPlaceholder;
@property (nonatomic) UICollectionViewCell *parentCell;
@property (nonatomic, readonly) UIView *parentView;
@property (nonatomic, retain) GKDashboardPlayerPhotoView *photoView;
@property (nonatomic, retain) GKPlayer *player;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (bool)dimmed;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidatePhoto;
- (bool)isUsingPlaceholder;
- (void)layoutSubviews;
- (id)parentCell;
- (id)parentView;
- (id)photoView;
- (id)player;
- (void)setDimmed:(bool)arg1;
- (void)setParentCell:(id)arg1;
- (void)setPhotoView:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setupPhoto;

@end
