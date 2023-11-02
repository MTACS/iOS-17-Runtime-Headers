
@interface SCLTimeIntervalDataSource : SCLSpecifierDataSource {
    NSArray * _addIntervalGroupSpecifiers;
    <SCLTimeIntervalDataSourceDelegate> * _delegate;
    NSMutableArray * _intervalGroupSpecifiers;
    SCLTimeIntervalModel * _model;
    SCLScheduleTimeFormatter * _scheduleTimeFormatter;
}

@property (nonatomic, readonly) NSArray *addIntervalGroupSpecifiers;
@property (nonatomic) <SCLTimeIntervalDataSourceDelegate> *delegate;
@property (nonatomic, readonly) NSMutableArray *intervalGroupSpecifiers;
@property (nonatomic, readonly) SCLTimeIntervalModel *model;
@property (nonatomic, readonly) SCLScheduleTimeFormatter *scheduleTimeFormatter;
@property (nonatomic, copy) NSArray *timeIntervals;

- (void).cxx_destruct;
- (void)addInterval:(id)arg1;
- (id)addIntervalGroupSpecifiers;
- (void)applySpecifiers;
- (void)configureSpecifier:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)createSpecifiersForIntervalsAtIndex:(unsigned long long)arg1;
- (id)delegate;
- (id)initWithListController:(id)arg1 timeIntervals:(id)arg2;
- (id)intervalGroupSpecifiers;
- (id)intervalSpecifiers;
- (void)loadSpecifiers;
- (id)model;
- (void)model:(id)arg1 didAddIntervalAtIndexes:(id)arg2;
- (void)model:(id)arg1 didDeleteIntervalAtIndex:(unsigned long long)arg2;
- (void)model:(id)arg1 didUpdateIntervalAtIndex:(unsigned long long)arg2;
- (unsigned long long)modelIndexForSpecifier:(id)arg1;
- (void)notifyDelegateOfModelUpdate;
- (void)reconfigureAllSpecifiers;
- (void)removeIntervalForSpecifier:(id)arg1;
- (id)scheduleTimeFormatter;
- (void)setDelegate:(id)arg1;
- (void)setTimeInterval:(id)arg1 forSpecifier:(id)arg2;
- (void)setTimeIntervals:(id)arg1;
- (id)timeIntervals;

@end
