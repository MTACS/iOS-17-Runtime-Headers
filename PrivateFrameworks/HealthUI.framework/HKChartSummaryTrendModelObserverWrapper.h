
@interface HKChartSummaryTrendModelObserverWrapper : NSObject {
    <HKChartSummaryTrendModelObserver> * _weakObserver;
}

@property (nonatomic) <HKChartSummaryTrendModelObserver> *weakObserver;

- (void).cxx_destruct;
- (void)setWeakObserver:(id)arg1;
- (id)weakObserver;

@end
