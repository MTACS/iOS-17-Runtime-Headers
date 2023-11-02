
@interface HUHomeAccessoryTileView : UIView {
    UIImageView * _homeView;
    bool  _iconOnlyTile;
    HUGridServiceCell * _tileView;
}

@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) UIImageView *homeView;
@property (nonatomic, readonly) bool iconOnlyTile;
@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *item;
@property (nonatomic, readonly) HUGridServiceCell *tileView;

- (void).cxx_destruct;
- (double)aspectRatio;
- (id)homeView;
- (bool)iconOnlyTile;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 categoryType:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 item:(id)arg2 iconOnlyTile:(bool)arg3;
- (id)item;
- (void)layoutSubviews;
- (id)tileView;
- (void)updateUIWithAnimation:(bool)arg1;

@end
