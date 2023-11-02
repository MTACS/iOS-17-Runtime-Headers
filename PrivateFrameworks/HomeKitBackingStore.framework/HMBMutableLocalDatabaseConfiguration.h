
@interface HMBMutableLocalDatabaseConfiguration : HMBLocalDatabaseConfiguration

@property (nonatomic, retain) HMBModelContainer *modelContainer;
@property (nonatomic) bool readOnly;

@end
