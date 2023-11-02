
@interface DashBoard.DBDashboardPlatterView : UIView {
    void burnView;
    void materialView;
    void platterCornerRadius;
    void wallpaperPreferences;
}

@property (nonatomic) double platterCornerRadius;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithWallpaperPreferences:(id)arg1;
- (double)platterCornerRadius;
- (void)setPlatterCornerRadius:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
