
@interface HUDashboardNavigationBar : UINavigationBar <HUDashboardNavigationTitleViewDelegate> {
    bool  _isBackgroundVisible;
    HUDashboardNavigationTitleView * _titleView;
}

@property (nonatomic) bool isBackgroundVisible;
@property (nonatomic, retain) HUDashboardNavigationTitleView *titleView;

- (void).cxx_destruct;
- (long long)_sceneDraggingBehaviorOnPan;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBackgroundVisible;
- (void)largeTitleHeightDidChange:(double)arg1;
- (void)setIsBackgroundVisible:(bool)arg1;
- (void)setTitleView:(id)arg1;
- (id)titleView;

@end
