
@interface HKInteractiveChartsMonthViewController : HKMonthViewController {
    NSPredicate * _additionalSamplePredicate;
    _UINavigationControllerPalette * _containingPalette;
    HKHealthStore * _healthStore;
    UIColor * _sampleColor;
    HKSampleType * _sampleType;
    HKWeekdayHeaderPaletteView * _weekdayHeaderPaletteView;
}

@property (nonatomic, retain) NSPredicate *additionalSamplePredicate;
@property (nonatomic, retain) _UINavigationControllerPalette *containingPalette;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) UIColor *sampleColor;
@property (nonatomic, retain) HKSampleType *sampleType;
@property (nonatomic, retain) HKWeekdayHeaderPaletteView *weekdayHeaderPaletteView;

- (void).cxx_destruct;
- (id)additionalSamplePredicate;
- (void)calendarScrollViewController:(id)arg1 accessoryViewForDate:(id)arg2 accessoryViewCompletion:(id /* block */)arg3;
- (id)containingPalette;
- (void)didTapTodayButton;
- (void)dismissViewController:(id)arg1;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1 dateCache:(id)arg2 date:(id)arg3;
- (id)sampleColor;
- (id)sampleType;
- (void)setAdditionalSamplePredicate:(id)arg1;
- (void)setContainingPalette:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setSampleColor:(id)arg1;
- (void)setSampleType:(id)arg1;
- (void)setWeekdayHeaderPaletteView:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)weekdayHeaderPaletteView;

@end
