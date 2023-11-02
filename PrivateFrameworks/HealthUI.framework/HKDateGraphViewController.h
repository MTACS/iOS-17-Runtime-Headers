
@interface HKDateGraphViewController : HKGraphViewController <HKGraphViewDelegate> {
    NSCalendar * _currentCalendar;
    bool  _disableXAxis;
    bool  _hasSetVisibleDateRange;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumSize;
}

@property (nonatomic, retain) NSCalendar *currentCalendar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableXAxis;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createGraphViewWithDateZoom:(long long)arg1 previousDateZoom:(long long)arg2 previousXAxisSpace:(double)arg3 currentCalendar:(id)arg4 customDateAxis:(id)arg5;
- (id)_dateAxisStyle;
- (void)_marginStyleChangeForContext:(long long)arg1 graphView:(id)arg2;
- (void)_setupGraphViewSelectionStyle;
- (id)_xAxisLabelFont;
- (id)currentCalendar;
- (long long)defaultAlignmentForTimeScope:(long long)arg1;
- (bool)disableXAxis;
- (void)graphView:(id)arg1 didFinishUserScrollingToValueRange:(id)arg2;
- (void)graphView:(id)arg1 didUpdateVisibleValueRange:(id)arg2 changeContext:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateZoom:(long long)arg1 previousDateZoom:(long long)arg2 previousXAxisSpace:(double)arg3 currentCalendar:(id)arg4;
- (id)initWithDateZoom:(long long)arg1 previousDateZoom:(long long)arg2 previousXAxisSpace:(double)arg3 currentCalendar:(id)arg4 customDateAxis:(id)arg5;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (struct CGSize { double x1; double x2; })minimumSize;
- (void)setCurrentCalendar:(id)arg1;
- (void)setDetailView:(id)arg1;
- (void)setDisableXAxis:(bool)arg1;
- (void)setMinimumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
