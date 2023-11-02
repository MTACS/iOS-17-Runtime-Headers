
@interface NTKUpNextMatchupCell : NTKUpNextBaseCell {
    UILayoutGuide * _scoreLayoutGuide;
    NTKUpNextMatchupScoreView * _scoreView;
    UILayoutGuide * _upcomingLayoutGuide;
    NTKUpNextMatchupUpcomingView * _upcomingView;
}

- (void).cxx_destruct;
- (void)configureWithContent:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setFilterProvider:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)updateTimeLabel;

@end
