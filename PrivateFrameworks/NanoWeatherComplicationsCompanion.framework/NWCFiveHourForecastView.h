
@interface NWCFiveHourForecastView : UIView <CLKFullColorImageView> {
    CLKDevice * _device;
    <CLKMonochromeFilterProvider> * _filterProvider;
    UIStackView * _horizontalStackView;
    NSArray * _hourlyForecastViews;
    NSArray * _separatorViews;
    <NWCHourlyForecastViewBuildable> * _viewBuilder;
}

@property (nonatomic, readonly) <NWMDataFormatter> *dataFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (nonatomic, copy) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double fontSizeFactor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIStackView *horizontalStackView;
@property (nonatomic, retain) NSArray *hourlyForecastViews;
@property (nonatomic, retain) NSArray *separatorViews;
@property (readonly) Class superclass;
@property (nonatomic, retain) <NWCHourlyForecastViewBuildable> *viewBuilder;

+ (void)initialize;
+ (unsigned long long)maximumHourlyConditionCount;

- (void).cxx_destruct;
- (void)_addHourlyForecastViewsToStackView:(id)arg1;
- (void)_applyConstraints;
- (id)_setupViewBuilderForDevice:(id)arg1;
- (void)configureWithImageProvider:(id)arg1 reason:(long long)arg2;
- (id)dataFormatter;
- (id)device;
- (id)filterProvider;
- (id)horizontalStackView;
- (id)hourlyForecastViews;
- (id)initFullColorImageViewWithDevice:(id)arg1;
- (void)pauseLiveFullColorImageView;
- (void)processHourlyForecastEntryModels:(id)arg1 forTimeZone:(id)arg2;
- (void)processSimpleEntryModel:(id)arg1;
- (void)resumeLiveFullColorImageView;
- (id)separatorViews;
- (void)setFilterProvider:(id)arg1;
- (void)setHorizontalStackView:(id)arg1;
- (void)setHourlyForecastViews:(id)arg1;
- (void)setSeparatorViews:(id)arg1;
- (void)setViewBuilder:(id)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)viewBuilder;

@end
