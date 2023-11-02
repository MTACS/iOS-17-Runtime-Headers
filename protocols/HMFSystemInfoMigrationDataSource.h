
@protocol HMFSystemInfoMigrationDataSource <NSObject>

@required

- (<HMFSystemInfoMigrationDataSourceDelegate> *)delegate;
- (bool)isMigrating;
- (void)setDelegate:(id <HMFSystemInfoMigrationDataSourceDelegate>)arg1;

@end
