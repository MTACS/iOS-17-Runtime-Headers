
@protocol HMDFeaturesDataSource <NSObject>

@required

- (bool)isHH2AutoMigrationEnabled;
- (bool)isHH2MigrationDryRunEnabled;

@end
