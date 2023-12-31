
@interface GKBasePlayerCell : GKCollectionViewCell {
    GKDashboardPlayerPhotoView * _iconView;
    NSDictionary * _metricsOverrides;
    UILabel * _nameLabel;
}

@property (nonatomic, retain) GKDashboardPlayerPhotoView *iconView;
@property (nonatomic, retain) NSDictionary *metricsOverrides;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) GKPlayer *player;

+ (double)defaultRowHeight;
+ (void)initialize;
+ (id)itemHeightList;
+ (id)itemHeightListForIdiom:(long long)arg1;
+ (id)padMetrics;
+ (id)phoneMetrics;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRectForText;
- (bool)canRemoveItem;
- (void)didUpdateModel;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)metricsOverrides;
- (id)nameLabel;
- (id)player;
- (id)popoverSourceView;
- (void)prepareForReuse;
- (void)setIconView:(id)arg1;
- (void)setMetricsOverrides:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setRepresentedItem:(id)arg1;

@end
