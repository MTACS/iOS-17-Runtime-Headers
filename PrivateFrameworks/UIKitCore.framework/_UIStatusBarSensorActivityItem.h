
@interface _UIStatusBarSensorActivityItem : _UIStatusBarItem {
    _UIStatusBarSensorActivityView * _sensorActivityIndicator;
}

@property (nonatomic, retain) _UIStatusBarSensorActivityView *sensorActivityIndicator;

- (void).cxx_destruct;
- (void)_create_sensorActivityIndicator;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)dependentEntryKeys;
- (id)sensorActivityIndicator;
- (void)setSensorActivityIndicator:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
