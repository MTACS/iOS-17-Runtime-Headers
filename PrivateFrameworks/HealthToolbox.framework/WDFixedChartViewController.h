
@interface WDFixedChartViewController : HKTableViewController <WDUserActivityResponder> {
    HKInteractiveChartViewController * _chartController;
    HKValueRange * _fixedRange;
    HKDataMetadataDetailSection * _metadataSection;
}

@property (nonatomic, readonly) HKInteractiveChartViewController *chartController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKValueRange *fixedRange;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKDataMetadataDetailSection *metadataSection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (id)cellForChart;
- (id)chartController;
- (id)fixedRange;
- (id)initWithInteractiveChartViewController:(id)arg1 sessionSample:(id)arg2 profile:(id)arg3 title:(id)arg4;
- (id)metadataSection;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end
