
@interface NWCSevenDayForecastView : UIView <CLKFullColorImageView> {
    NWCDailyForecastRangeView * _dailyForecastRangeView;
    NSArray * _dailyForecastViews;
    CLKDevice * _device;
    <CLKMonochromeFilterProvider> * _filterProvider;
    UIStackView * _horizontalStackView;
    NSArray * _separatorViews;
    <NWCDailyForecastViewBuildable> * _viewBuilder;
}

@property (nonatomic, retain) NWCDailyForecastRangeView *dailyForecastRangeView;
@property (nonatomic, retain) NSArray *dailyForecastViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (nonatomic, copy) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double fontSizeFactor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIStackView *horizontalStackView;
@property (nonatomic, retain) NSArray *separatorViews;
@property (readonly) Class superclass;
@property (nonatomic, retain) <NWCDailyForecastViewBuildable> *viewBuilder;

+ (void)initialize;
+ (unsigned long long)maximumDailyConditionCount;

- (void).cxx_destruct;
- (void)_addDailyForecastViewsToStackView:(id)arg1;
- (void)_applyConstraints;
- (id)_setupViewBuilderForDevice:(id)arg1;
- (void)configureWithImageProvider:(id)arg1 reason:(long long)arg2;
- (id)dailyForecastRangeView;
- (id)dailyForecastViews;
- (id)device;
- (id)filterProvider;
- (id)horizontalStackView;
- (id)initFullColorImageViewWithDevice:(id)arg1;
- (void)pauseLiveFullColorImageView;
- (void)processConditions:(id)arg1 dailyForecastedConditions:(id)arg2 timeZone:(id)arg3;
- (void)processSimpleEntryModel:(id)arg1;
- (void)resumeLiveFullColorImageView;
- (id)separatorViews;
- (void)setDailyForecastRangeView:(id)arg1;
- (void)setDailyForecastViews:(id)arg1;
- (void)setFilterProvider:(id)arg1;
- (void)setHorizontalStackView:(id)arg1;
- (void)setSeparatorViews:(id)arg1;
- (void)setViewBuilder:(id)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)viewBuilder;

@end
