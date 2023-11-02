
@interface NTKSwissMoonPhaseSevenDayView : UIView <CLKFullColorImageView> {
    NSArray * _dailyViews;
    NSArray * _dividerViews;
    <CLKMonochromeFilterProvider> * _filterProvider;
    UIStackView * _sevenDayLayoutView;
}

@property (nonatomic, retain) NSArray *dailyViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *dividerViews;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (nonatomic, copy) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double fontSizeFactor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIStackView *sevenDayLayoutView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_labelFilterStyle;
- (long long)_moonFilterStyle;
- (void)configureWithImageProvider:(id)arg1 reason:(long long)arg2;
- (id)dailyViews;
- (id)dividerViews;
- (id)filterProvider;
- (id)initFullColorImageViewWithDevice:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)pauseLiveFullColorImageView;
- (void)renderSynchronouslyWithImageQueueDiscard:(bool)arg1 inGroup:(id)arg2;
- (void)resumeLiveFullColorImageView;
- (void)setDailyViews:(id)arg1;
- (void)setDividerViews:(id)arg1;
- (void)setFilterProvider:(id)arg1;
- (void)setSevenDayLayoutView:(id)arg1;
- (id)sevenDayLayoutView;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
