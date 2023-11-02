
@interface HMDFeaturesDataSource : NSObject <HMDFeaturesDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHH2AutoMigrationEnabled, readonly) bool hh2AutoMigrationEnabled;
@property (getter=isHH2MigrationDryRunEnabled, readonly) bool hh2MigrationDryRunEnabled;
@property (readonly) Class superclass;

- (bool)isHH2AutoMigrationEnabled;
- (bool)isHH2MigrationDryRunEnabled;

@end
