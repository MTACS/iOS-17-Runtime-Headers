
@protocol DNDSSettingsSyncManager <NSObject>

@required

- (<DNDSSettingsSyncManagerDataSource> *)dataSource;
- (<DNDSSettingsSyncManagerDelegate> *)delegate;
- (void)resume;
- (void)setDataSource:(id <DNDSSettingsSyncManagerDataSource>)arg1;
- (void)setDelegate:(id <DNDSSettingsSyncManagerDelegate>)arg1;
- (void)update;

@end
