
@protocol DNDSAssertionSyncManager <NSObject>

@required

- (<DNDSAssertionSyncManagerDataSource> *)dataSource;
- (<DNDSAssertionSyncManagerDelegate> *)delegate;
- (void)resume;
- (void)setDataSource:(id <DNDSAssertionSyncManagerDataSource>)arg1;
- (void)setDelegate:(id <DNDSAssertionSyncManagerDelegate>)arg1;

@optional

- (void)forceUpdateAllDevices;
- (void)updateDevices:(NSArray *)arg1;
- (void)updateForModeAssertionUpdateResult:(DNDSModeAssertionUpdateResult *)arg1;
- (void)updateForStateUpdate:(DNDStateUpdate *)arg1;

@end
