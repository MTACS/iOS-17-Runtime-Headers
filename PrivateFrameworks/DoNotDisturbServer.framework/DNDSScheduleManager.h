
@interface DNDSScheduleManager : NSObject {
    NSMutableDictionary * _currentScheduleSettingsByModeIdentifier;
    <DNDSScheduleManagerDataSource> * _dataSource;
    DNDSModeAssertionManager * _modeAssertionManager;
}

@property (nonatomic) <DNDSScheduleManagerDataSource> *dataSource;

- (void).cxx_destruct;
- (void)_refreshWithScheduleSettings:(id)arg1 modeIdentifier:(id)arg2 currentScheduleAssertion:(id)arg3 context:(id)arg4;
- (void)_refreshWithScheduleSettingsByModeIdentifier:(id)arg1 context:(id)arg2;
- (id)_scheduleManagerClientIdentifierForModeIdentifier:(id)arg1;
- (id)dataSource;
- (id)initWithModeAssertionManager:(id)arg1;
- (void)refresh;
- (void)setDataSource:(id)arg1;

@end
