
@interface SCLCustomDayEditorSource : SCLSpecifierDataSource <SCLTimeIntervalDataSourceDelegate> {
    long long  _day;
    SCLTimeIntervalDataSource * _timeSource;
}

@property (nonatomic, readonly) long long day;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) SCLTimeIntervalDataSource *timeSource;

- (void).cxx_destruct;
- (long long)day;
- (id)enabledForSpecifier:(id)arg1;
- (id)initWithListController:(id)arg1 viewModel:(id)arg2 day:(long long)arg3 title:(id)arg4;
- (void)setEnabled:(id)arg1 specifier:(id)arg2;
- (void)setTimeSource:(id)arg1;
- (void)timeIntervalDataSource:(id)arg1 didUpdateTimeIntervals:(id)arg2;
- (id)timeSource;

@end
