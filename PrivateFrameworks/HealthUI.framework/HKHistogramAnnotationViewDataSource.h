
@interface HKHistogramAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSourceProtocol> {
    HKInteractiveChartDataFormatter * _formatter;
    NSMutableArray * _keyValuePairs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKInteractiveChartDataFormatter *formatter;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *keyValuePairs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dateViewWithOrientation:(long long)arg1;
- (id)formatter;
- (id)initWithFormatter:(id)arg1;
- (id)keyValuePairs;
- (id)leftMarginViewWithOrientation:(long long)arg1;
- (long long)numberOfValuesForAnnotationView:(id)arg1;
- (void)setKeyValuePairs:(id)arg1;
- (bool)showSeparators;
- (void)updateWithPointSelectionContexts:(id)arg1;
- (id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;

@end
