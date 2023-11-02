
@interface HKChartSummaryTrendModel : NSObject {
    NSMutableArray * _observers;
    bool  _selectTrendInitially;
    NSArray * _timeScopeTrends;
}

@property (nonatomic, retain) NSMutableArray *observers;
@property (nonatomic, readonly) bool selectTrendInitially;
@property (nonatomic, readonly) NSArray *timeScopeTrends;

- (void).cxx_destruct;
- (void)_notifyObserversTrendModelChanged;
- (void)addObserver:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTimeScopeTrends:(id)arg1 selectTrendInitially:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (id)observers;
- (bool)selectTrendInitially;
- (void)setObservers:(id)arg1;
- (id)timeScopeTrends;
- (void)updateChartSummaryTrendModel:(id)arg1;

@end
