
@interface NTKUpNextMatchupUpcomingView : UIView <CLKMonochromeComplicationView> {
    UIImageView * _awayLogoImageView;
    UILayoutGuide * _awayLogoLayoutGuide;
    CLKUIColoringLabel * _descriptionLabel;
    <CLKMonochromeFilterProvider> * _filterProvider;
    UIImageView * _homeLogoImageView;
    UILayoutGuide * _homeLogoLayoutGuide;
    bool  _paused;
    CLKUIColoringLabel * _versusLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (readonly) unsigned long long hash;
@property (getter=isPaused, nonatomic) bool paused;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureWithMatchup:(id)arg1;
- (id)filterProvider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPaused;
- (void)setFilterProvider:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
