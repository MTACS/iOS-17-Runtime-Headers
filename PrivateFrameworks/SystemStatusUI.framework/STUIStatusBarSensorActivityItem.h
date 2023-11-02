
@interface STUIStatusBarSensorActivityItem : STUIStatusBarItem {
    STUIStatusBarSensorActivityView * _sensorActivityIndicator;
}

@property (nonatomic, retain) STUIStatusBarSensorActivityView *sensorActivityIndicator;

- (void).cxx_destruct;
- (void)_create_sensorActivityIndicator;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)dependentEntryKeys;
- (id)sensorActivityIndicator;
- (void)setSensorActivityIndicator:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
