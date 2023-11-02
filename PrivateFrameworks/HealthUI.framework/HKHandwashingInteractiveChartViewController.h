
@interface HKHandwashingInteractiveChartViewController : HKInteractiveChartViewController <HKHealthChartFactoryViewControllerProviderClass> {
    HKDisplayType * _goalDisplayType;
    HKDisplayType * _primaryDisplayType;
}

@property (nonatomic, retain) HKDisplayType *goalDisplayType;
@property (nonatomic, retain) HKDisplayType *primaryDisplayType;

+ (id)_generateHandwashingGoalDataSource;
+ (id)_generateHandwashingGoalDisplayTypeWithDisplayType:(id)arg1 unitPreferencesController:(id)arg2 selectedTimeScopeController:(id)arg3;
+ (id)_generateHandwashingGoalLineSeriesWithDisplayType:(id)arg1 unitPreferenceController:(id)arg2 color:(id)arg3;
+ (id)createInteractiveChartViewControllerForTypeIdentifier:(id)arg1 chartFactory:(id)arg2 applicationItems:(id)arg3 displayDate:(id)arg4 preferredOverlay:(long long)arg5 restorationUserActivity:(id)arg6 trendModel:(id)arg7 additionalChartOptions:(unsigned long long)arg8;

- (void).cxx_destruct;
- (void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3;
- (id)goalDisplayType;
- (id)primaryDisplayType;
- (void)setGoalDisplayType:(id)arg1;
- (void)setPrimaryDisplayType:(id)arg1;
- (void)viewDidLoad;

@end
