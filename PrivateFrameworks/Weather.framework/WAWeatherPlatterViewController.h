
@interface WAWeatherPlatterViewController : UIViewController <WFTemperatureUnitObserver> {
    WFURLComponents * _URLComponents;
    UIView * _afterAQIDividerLineView;
    UIView * _afterHeaderDividerLineView;
    WAAQIView * _aqiView;
    UIView * _backgroundView;
    City * _city;
    NSURL * _commitURL;
    NSMutableArray * _constraints;
    WATodayHeaderView * _headerView;
    UIStackView * _hourlyBeltView;
    NSArray * _hourlyForecastViews;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastBounds;
    WATodayModel * _model;
    long long  _status;
}

@property (nonatomic, retain) WFURLComponents *URLComponents;
@property (nonatomic, retain) UIView *afterAQIDividerLineView;
@property (nonatomic, retain) UIView *afterHeaderDividerLineView;
@property (nonatomic, retain) WAAQIView *aqiView;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) City *city;
@property (nonatomic, copy) NSURL *commitURL;
@property (nonatomic, retain) NSMutableArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WATodayHeaderView *headerView;
@property (nonatomic, retain) UIStackView *hourlyBeltView;
@property (nonatomic, retain) NSArray *hourlyForecastViews;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lastBounds;
@property (nonatomic, retain) WATodayModel *model;
@property (nonatomic) long long status;
@property (readonly) Class superclass;

+ (double)defaultViewHeight;

- (void).cxx_destruct;
- (id)URLComponents;
- (void)_buildModelForLocation:(id)arg1;
- (bool)_canShowWhileLocked;
- (void)_contentSizeDidUpdate:(id)arg1;
- (void)_kickoffLoadingWithLocation:(id)arg1 orPerhapsALocationString:(id)arg2;
- (void)_loadAQIDataForLocation:(id)arg1;
- (bool)_showingAQIViewForCity:(id)arg1;
- (void)_updateStatus:(long long)arg1;
- (void)_updateViewContent;
- (void)_updateViewWithAQIFromCity:(id)arg1;
- (id)afterAQIDividerLineView;
- (id)afterHeaderDividerLineView;
- (id)aqiView;
- (id)backgroundView;
- (id)city;
- (id)commitURL;
- (id)constraints;
- (id)headerView;
- (id)hourlyBeltView;
- (id)hourlyForecastViews;
- (id)init;
- (id)initWithLocation:(id)arg1;
- (id)initWithLocationString:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURLComponents:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastBounds;
- (id)model;
- (double)preferredContentWidth;
- (void)setAfterAQIDividerLineView:(id)arg1;
- (void)setAfterHeaderDividerLineView:(id)arg1;
- (void)setAqiView:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setCity:(id)arg1;
- (void)setCommitURL:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setHourlyBeltView:(id)arg1;
- (void)setHourlyForecastViews:(id)arg1;
- (void)setLastBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setModel:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setURLComponents:(id)arg1;
- (void)setupAQIView;
- (void)setupAfterAQIDividerView;
- (void)setupAfterHeaderDividerView;
- (void)setupBackgroundView;
- (void)setupConstraints;
- (void)setupHeaderView;
- (void)setupHourlyForecast;
- (long long)status;
- (void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnitTo:(int)arg2;
- (void)updateViewConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
